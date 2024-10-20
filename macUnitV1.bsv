package macUnit;

//package imports
import FIFO::*;
import RegFile::*;
import FIFOF::*;
import Reg#(Bit#(16));

//Interface declaration for macUnit
interface MacUnit_Ifc;
	method Action load_A(Bit#(16) a);
	method Action load_B(Bit#(16) b);
	method Action load_C(Bit#(16) c);
	method Action load_s1_or_s2(Bit#(1) sel); //select between int8 and bf16 mac
	method ActionValue#(Bit#(32)) get_MAC();//To get the result
endinterface: MacUnit_Ifc

//Module for Integer MAC Unit
module mkIntMac(MacUnit_Ifc);
	//Internal Registers
	Reg#(Bit#(8)) reg_A <- mkReg(0);
	Reg#(Bit#(8)) reg_B <- mkReg(0);
	Reg#(Bit#(32)) reg_C <- mkReg(0);
	Reg#(Bit#(32)) result <- mkReg(0);
	
	//Function to perform multiplication for int32
	function Bit#(32) Int_Multiplication(Bit#(8) a, Bit#(8) b);
		Bit#(32) product=0;
		for(Integer i=0; i<8; i=i+1) begin
			if(b[i]) begin
				product = product ^ (zeroExtend(a) << i);
			end
		end
		return product;
	endfunction:Int_Multiplication

	//Funtion to perform bitwise addition for integers
	function Bit#(32) Int32_Addition(
	Bit#(32) a, 
	Bit#(32) b,
	Bit#(1) cin;
	);
	//Initialize sum and carry
		Bit#(32) sum=0;
		Bit#(33) carry=0;
		carry[0] = cin;

		//Add bit by bit with carry
		for(Integer i=0; i<32; i=i+1) begin
			sum[i] = (a[i] ^ b[i] ^ carry[i]);
			carry[i+1] = (a[i] & b[i] | (carry[i] & (a[i] ^ b[i])));
		end
		return sum;
	endfunction: Int32_Addition

	//Rule to compute the result: A*B+C(Integer version)
	rule rl_Compute_Int_Mac;
		result <= Int32_Addition(Int_Multiplication(reg_A, reg_B), reg_C,0);
	endrule:rl_Compute_Int_Mac

	//Interface methods to load inputs
	method Action load_A(Bit#(16) a);
		reg_A <= truncate(a);
	endmethod

	method Action load_B(Bit#(16) b);
		reg_B <= truncate(b);
	endmethod

	method Action load_C(Bit#(32) c);
		reg_C <= c;
	endmethod

	//Method to return result
	method ActionValue#(Bit#(32)) get_MAC();
		return result;
	endmethod

endmodule: mkIntMac

//BF16 MAC module 
module mkbf16Mac(MacUnit_Ifc);
	//Internal Registers
	Reg#(Bit#(16)) reg_A <- mkReg(0);
	Reg#(Bit#(16)) reg_B <- mkReg(0);
	Reg#(Bit#(32)) reg_C <- mkReg(0);
	Reg#(Bit#(32)) result <- mkReg(0);

	//function to convert bf16 to fp32
	function Bit#(32) bf16_to_fp32(Bit#(16) bf16);
		Bit#(32) fp32 = zeroExtend(bf16[15]) << 31; //sign
		fp32 = fp32 | (zeroExtend(bf16[14:7])) << 23; // exponent
		fp32 = fp32 | (zeroExtend(bf16[6:0])) << 16; //mantissa
		return fp32;
	endfunction:bf16_to_fp32

	//function to perform 24 bit multiplication
	function Bit#(32) Multiplication_24bit(Bit#(24) a, Bit#(24) b);
		Bit#(48) product=0;

		for(Integer i=0; i<24; i=i+1) begin
			if(b[i]) begin
				product = product ^ (zeroExtend(a) << i);
			end
		return product[47:16];//return the middle 32 bits
	endfunction: Multiplication_24bit

	//Function to perform multiplication for fp32
	function Bit#(32) Multiplication_fp32(Bit#(32) a_fp32, Bit#(32) b_fp32);
		Bit#(1) sign_A = a_fp32[31];
		Bit#(1) sign_B = b_fp32[31];
		Bit#(23) mantissa_a = {1'b1, a_fp32[22:0]};
		Bit#(23) mantissa_b = {1'b1, b_fp32[22:0]};
		Bit#(8) exponent_A = a_fp32[30:23];
		Bit#(8) exponent_B = b_fp32[30:23];
		Bit#(48) mantissa_product = Multiplication_24bit(mantissa_a,mantissa_b);

		//Handle rounding
		Bit#(23) mantissa_rounded = mantissa_product[46:24];
		Bit#(8) exponent_sum = exponent_A + exponent_A -127;

		//Handling overflow in mantissa
		if(mantissa_rounded[23]) begin
			mantissa_rounded = mantissa_rounded >> 1;
			exponent_sum = exponent_sum + 1;
		end

		//Return the final result
		return {sign_A ^ sign_B, exponent_sum, mantissa_rounded[22:0]};

	endfunction: Multiplication_fp32

	//fp32 addition logic
	function Bit#(32) fp32_Addition(Bit#(32) a, Bit#(32) b, Bit#(1) cin);
		Bit#(32) sum=0;
		Bit#(33) carry =0;
		carry[0] = cin;

		for(Integer i=0; i<32; i=i+1) begin
			sum[i] = (a[i] ^ b[i] ^ carry[i]);
			carry[i+1] = (a[i] & b[i] | (carry[i] & (a[i] ^ b[i])));
		end
		return sum;
	endfunction: fp32_Addition
	
	//Rule to compute the result
	rule rl_compute_bf16_mac;
		Bit#(32) fp32_A = bf16_to_fp32(reg_A);
		Bit#(32) fp32_B = bf16_to_fp32(reg_B);
		result <= fp32_Addition(Multiplication_fp32(fp32_A, fp_32_B), reg_C,0);
	endrule: rl_compute_bf16_mac

	//Interface methods to load inputsS
	method Action load_A(Bit#(16) a);
		reg_A <= a;
	endmethod
	method Action load_B(Bit#(16) b);
		reg_B <= b;
	endmethod
	method Action load_C(Bit#(16) c);
		reg_C <= c;
	endmethod

	//method to return result
	method ActionValue#(Bit#(32)) get_MAC();
		return result;
	endmethod
	
endmodule: mkbf16Mac

//Top level Mac Unit module
(*synthesize*)
module mkMacUnitTop(MacUnit_Ifc);
	//Control bit to select integer mac or float mac
	Reg#(Bit#(1)) reg_s1_or_s2 <- mkReg(0);

	//Instantiate Integer mac and bf16mac
	MacUnit_Ifc int_Mac <- mkIntMac();
	macUnit_ifc bf16_Mac <- mkbf16Mac();

	//register to hold the selected mac output
	Reg#(Bit#(32)) result <- mkReg(0);

	//Rule to compute the selected mac based on s1_or_s2
	rule rl_select_mac_output;
		if(reg_s1_or_s2 == 0) begin
			result <= int_Mac.get_MAC();
		end else begin
			result <= bf16_Mac.get_MAC();
		end
	endrule: rl_select_mac_output

	method Action load_A(Bit#(16) a);
		if(reg_s1_or_s2 == 0) begin
			int_Mac.load_A(a);
		end else begin
			bf16_Mac.load_A(a);
		end	
	endmethod: load_A

	method Action load_B(Bit#(16) b);
		if(reg_s1_or_s2 == 0) begin
			int_Mac.load_B(b);
		end else begin
			bf16_Mac.load_B(b);
		end	
	endmethod: load_B

	method Action load_C(Bit#(32) c);
		if(reg_s1_or_s2 == 0) begin
			int_Mac.load_C(c);
		end else begin
			bf16_Mac.load_C(c);
		end	
	endmethod: load_C

	//method to select the innteger mac or fp mac
	method Action load_s1_or_s2(Bit#(1) sel);
		reg_s1_or_s2 <= sel;
	endmethod: load_s1_or_s2

	//method to return selected mac result
	method ActionValue#(Bit#(32)) get_MAC();
		return result;
	endmethod
endmodule: mkMacUnitTop

endpackage:macUnit
