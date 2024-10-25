package macUnit;

//package imports
import FIFO::*;
import RegFile::*;
import FIFOF::*;
//import Reg#(Bit#(16));

//Interface declaration for macUnit
interface MacUnit_Ifc;
	method Action load_A(Bit#(16) a);
	method Action load_B(Bit#(16) b);
	method Action load_C(Bit#(32) c);
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
	
	//function to perform bitwise addition for 32-bit integers
    function Bit#(32) int32_Addition(Bit#(32) a, Bit#(32) b, Bit#(1) cin);
    //Initialize sum and carry
        Bit#(32) sum =0;
        Bit#(33) carry=zeroExtend(cin);
        
        //Addition
        for(Integer i=0; i<32; i=i+1) begin
            sum[i] = (a[i] ^ b[i] ^ carry[i]);
            carry[i+1] = (a[i] & b[i]) | (carry[i] & (a[i] ^ b[i]));
        end
        return sum;
    endfunction: int32_Addition
    
    //function to perform bitwise addition for 8-bit integers
    function Bit#(8) int8_Addition(Bit#(8) a, Bit#(8) b, Bit#(1) cin);
    //Initialize sum and carry
        Bit#(8) sum =0;
        Bit#(9) carry=zeroExtend(cin);
        
        //Addition
        for(Integer i=0; i<8; i=i+1) begin
            sum[i] = (a[i] ^ b[i] ^ carry[i]);
            carry[i+1] = (a[i] & b[i]) | (carry[i] & (a[i] ^ b[i]));
        end
        return sum;
    endfunction: int8_Addition
    
    //function to perform integer multplication
    function Bit#(32) int_Multiplication(Bit#(8) a, Bit#(8) b);
        Bit#(32) result = 0;//Initialize the result
        Bit#(32) temp_a = signExtend(a); // Extend a to 32 bits for shift operations
        Bit#(8) temp_b  = b;
        
        Bool sign_a = (a[7]==1);
        Bool sign_b = (b[7]==1);
        
        //If a and b are negative negate a and b
        if(sign_a) begin
        	temp_a = int32_Addition(~temp_a,1,0);
        end
        if(sign_b) begin
        	temp_b = int8_Addition(~temp_b,1,0);
        end
          
        //Iterate over each bit of b to check if the corresponding bit of a should be added
        for(Integer i=0; i<8; i=i+1) begin
            if(temp_b[i]==1) begin
                result = int32_Addition(result, (temp_a << i), 0);
            end
        end
        
        //Adjust for the sign of the product
        if(!sign_a==sign_b) begin
        	result= ~result+1;
        end
        
        return result;
    endfunction: int_Multiplication
    
	rule rl_Compute_Int_Mac;
		result <= int32_Addition(int_Multiplication(reg_A, reg_B), reg_C,0);
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
	method Action load_s1_or_s2(Bit#(1) sel);
	//no op	
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
	
	//function to perform 48-bit addition
	/*function Bit#(48) addition_48bit(Bit#(48) a, Bit#(48) b,Bit#(1) cin);
		Bit#(48) sum=0;
		Bit#(49) carry = zeroExtend(cin);
		for(Integer i=0;i<48;i=i+1) begin
			sum[i] = (a[i]^b[i]^carry[i]);
			carry[i+1] = (a[i]&b[i])|(carry[i]&(a[i]^b[i]));
		end
		return sum;
	endfunction

	//function to perform 24 bit multiplication
	function Bit#(48) multiplication_24bit(Bit#(24) a, Bit#(24) b);
		Bit#(48) product=0;
		Bit#(48) temp_a = zeroExtend(a);
		for(Integer i=0; i<24; i=i+1) begin
			if(b[i]==1) begin
				product = addition_48bit(product,(temp_a<<i),0);
			end
		end
		return temp_a;//return the middle 32 bits
	endfunction: multiplication_24bit*/

	//Function to perform multiplication for fp32
	function Bit#(32) multiplication_fp32(Bit#(32) a_fp32, Bit#(32) b_fp32);
		//Split the binary to sign, mantissa and exponent
		Bit#(1) sign_A = a_fp32[31];
		Bit#(1) sign_B = b_fp32[31];
		Bit#(8) exponent_A = a_fp32[30:23];
		Bit#(8) exponent_B = b_fp32[30:23];
		Bit#(24) mantissa_a = {1'b1, a_fp32[22:0]};
		Bit#(24) mantissa_b = {1'b1, b_fp32[22:0]};
		//Bit#(48) mantissa_product = multiplication_24bit(mantissa_a,mantissa_b);
		Bit#(48) mantissa_product = zeroExtend(mantissa_a)*zeroExtend(mantissa_b);
		//find mantissa correct or not
		//Bit#(32) mant =  mantissa_product[47:16];
		Bit#(32) mant = zeroExtend(mantissa_a);
		//Handle rounding
		//Bit#(24) mantissa_rounded = mantissa_product[31:8];
		Bit#(8) exponent_sum = exponent_A + exponent_A -127;
		Bit#(24) mantissa_rounded=mantissa_product[47:24];
		//Handling overflow in mantissa
		if(mantissa_rounded[23]==1) begin
			mantissa_rounded = mantissa_rounded>>1;
			exponent_sum = exponent_sum + 1;
		end

		//Return the final result
		//return {sign_A ^ sign_B, exponent_sum[7:0], mantissa_rounded[22:0]};
		return mant;

	endfunction: multiplication_fp32

	//fp32 addition logic
	function Bit#(32) fp32_Addition(Bit#(32) a_fp32, Bit#(32) b_fp32);
		Bit#(1) sign_A = a_fp32[31];
		Bit#(1) sign_B = b_fp32[31];
		Bit#(23) mantissa_a = a_fp32[22:0];//{1'b1, a_fp32[22:0]};
		Bit#(23) mantissa_b = b_fp32[22:0];//{1'b1, b_fp32[22:0]};
		Bit#(8) exponent_A = a_fp32[30:23];
		Bit#(8) exponent_B = b_fp32[30:23];
		//Bit#(32) sum=0;
		//Bit#(33) carry =0;
		//carry[0] = cin;
		Bit#(8) exponent_diff = exponent_A-exponent_B;
		
		Bit#(23) aligned_mantissa_A = mantissa_a;
		Bit#(23) aligned_mantissa_B = mantissa_b;
		
		if(exponent_diff>0) begin
			aligned_mantissa_B = aligned_mantissa_B>>exponent_diff;
		end else if(exponent_diff<0) begin
			aligned_mantissa_A = aligned_mantissa_A>>-exponent_diff;
		end

		//Add or subtract mantissas
		Bit#(1) result_sign;
		Bit#(23) result_mantissa;
		if(sign_A==sign_B) begin
			//if both signs are same add mantissas
			result_sign=sign_A;
			result_mantissa = aligned_mantissa_A ^ aligned_mantissa_B;
			//handle carry for mantissa addition
			Bit#(24) carry=0;
			for(Integer i=0;i<23;i=i+1) begin
				Bit#(1) temp = aligned_mantissa_A[i] & aligned_mantissa_B[i];
				carry[i+1] = (aligned_mantissa_A[i] ^ aligned_mantissa_B[i])|carry[i];
			end
			if(carry[23]==1) begin
				//normalize the value if overload occurs
				result_mantissa = result_mantissa>>1;
				exponent_A=exponent_A+1;
			end
		end else begin
			//if sign differs subtract mantissas
			result_sign = sign_A;//Assume sign
			if(aligned_mantissa_A<aligned_mantissa_B) begin
				result_sign = sign_B;//change sign if b is larger
				result_mantissa = aligned_mantissa_B^aligned_mantissa_A;
			end else begin
				result_mantissa = aligned_mantissa_A^aligned_mantissa_B;
			end	
		end	
		return {result_sign, exponent_A[7:0],result_mantissa[22:0]};		
	endfunction: fp32_Addition
	
	//Rule to compute the result
	/*rule rl_compute_bf16_mac;
		Bit#(32) fp32_A = bf16_to_fp32(reg_A);
		Bit#(32) fp32_B = bf16_to_fp32(reg_B);
		result <= multiplication_fp32(fp32_A, fp32_B);
		//result <= fp32_Addition(multiplication_fp32(fp32_A, fp32_B), reg_C);
	endrule: rl_compute_bf16_mac*/

	//Interface methods to load inputsS
	method Action load_A(Bit#(16) a);
		reg_A <= a;
	endmethod
	method Action load_B(Bit#(16) b);
		reg_B <= b;
	endmethod
	method Action load_C(Bit#(32) c);
		reg_C <= c;
	endmethod
	method Action load_s1_or_s2(Bit#(1) sel);
	//no op	
	endmethod
	
	//method to return result
	method ActionValue#(Bit#(32)) get_MAC();
		Bit#(32) fp32_A = bf16_to_fp32(reg_A);
		Bit#(32) fp32_B = bf16_to_fp32(reg_B);
		result <= multiplication_fp32(fp32_A, fp32_B);
		//result <= fp32_Addition(multiplication_fp32(fp32_A, fp32_B), reg_C);
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
	MacUnit_Ifc bf16_Mac <- mkbf16Mac();

	//register to hold the selected mac output
	Reg#(Bit#(32)) result <- mkReg(0);

	//Rule to compute the selected mac based on s1_or_s2
	rule rl_select_mac_output;
		if(reg_s1_or_s2 == 0) begin
			let mac_result <- int_Mac.get_MAC();
			result <= mac_result;
		end else begin
			let mac_result <- bf16_Mac.get_MAC();
			result <= mac_result;
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






















