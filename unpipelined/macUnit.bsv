package macUnit;

//package imports
import FIFO::*;
import RegFile::*;
import FIFOF::*;


//Interface declaration for macUnit
interface MacUnit_Ifc;
	method Action 					load_A(Bit#(16) a);
	method Action 					load_B(Bit#(16) b);
	method Action 					load_C(Bit#(32) c);
	method Action 					load_s1_or_s2(Bit#(1) sel); //select between int8 and bf16 mac
	method ActionValue#(Bit#(32)) 	get_MAC();//To get the result
endinterface: MacUnit_Ifc

//Module for Integer MAC Unit
module mkIntMac(MacUnit_Ifc);
	//Internal Registers
	Reg#(Bit#(8)) 	reg_A 	<- mkReg(0);
	Reg#(Bit#(8)) 	reg_B 	<- mkReg(0);
	Reg#(Bit#(32)) 	reg_C 	<- mkReg(0);
	Reg#(Bit#(32)) 	result 	<- mkReg(0);
	
	//function to perform bitwise addition for 32-bit integers
    function Bit#(32) int32_Addition(Bit#(32) a, Bit#(32) b, Bit#(1) cin);
    	//Initialize sum and carry
        Bit#(32) sum 	= 0;
        Bit#(33) carry	= zeroExtend(cin);       
        //Addition of 32-bit numbers
        for(Integer i=0; i<32; i=i+1) begin
            sum[i] 		= (a[i] ^ b[i] ^ carry[i]);
            carry[i+1] 	= (a[i] & b[i]) | (carry[i] & (a[i] ^ b[i]));
        end
        return sum;
    endfunction: int32_Addition
    
    //function to perform bitwise addition for 8-bit integers
    function Bit#(8) int8_Addition(Bit#(8) a, Bit#(8) b, Bit#(1) cin);
    	//Initialize sum and carry
        Bit#(8) sum 	= 0;
        Bit#(9) carry	= zeroExtend(cin);        
        //Addition of 8-bit
        for(Integer i=0; i<8; i=i+1) begin
            sum[i] 		= (a[i] ^ b[i] ^ carry[i]);
            carry[i+1] 	= (a[i] & b[i]) | (carry[i] & (a[i] ^ b[i]));
        end
        return sum;
    endfunction: int8_Addition
    
    //function to perform integer multplication
    function Bit#(32) int_Multiplication(Bit#(8) a, Bit#(8) b);
        Bit#(32) 	result = 0;//Initialize the result
        Bit#(32) 	temp_a = signExtend(a); // Extend a to 32 bits for shift operations
        Bit#(8) 	temp_b = b;       
        Bool 		sign_a = (a[7]==1);
        Bool 		sign_b = (b[7]==1);       
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
        if(!sign_a == sign_b) begin
        	result = ~result+1;
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

	//Method to return Integer Mac result
	method ActionValue#(Bit#(32)) get_MAC();
		return result;
	endmethod

endmodule: mkIntMac

//BF16 MAC module 
module mkbf16Mac(MacUnit_Ifc);
	//Internal Registers
	Reg#(Bit#(16)) reg_A 	<- mkReg(0);
	Reg#(Bit#(16)) reg_B 	<- mkReg(0);
	Reg#(Bit#(32)) reg_C 	<- mkReg(0);
	Reg#(Bit#(32)) result 	<- mkReg(0);

	//function to convert bf16 to fp32
	function Bit#(32) bf16_to_fp32(Bit#(16) bf16);
		Bit#(1) 	sign 			= bf16[15]; //sign
		Bit#(8) 	exponent 		= bf16[14:7]; // exponent
		Bit#(7) 	mantissa 		= bf16[6:0]; //mantissa
		Bit#(23) 	mantissa_fp32 	= {mantissa, 16'b0};
		Bit#(32) 	fp32 			= {sign,exponent, mantissa_fp32}; //{sign ,exponent, mantissa_fp32}
		return fp32;
	endfunction:bf16_to_fp32
	
	    function Bit#(16) bitwise_Addition_int32(Bit#(16) a, Bit#(16) b, Bit#(1) cin);
		Bit#(16) sum 	= 0;
		Bit#(17) carry 	= zeroExtend(cin);

		// Perform bitwise addition over 32 bits
		for (Integer i = 0; i < 16; i = i + 1) begin
		    sum[i] 		= (a[i] ^ b[i] ^ carry[i]);
		    carry[i+1] 	= (a[i] & b[i]) | (carry[i] & (a[i] ^ b[i]));
		end
		return sum;
	    endfunction: bitwise_Addition_int32
	    
	    function Tuple2#(Bit#(24),Bit#(25)) bitwise_Addition_int23(Bit#(24) a, Bit#(24) b, Bit#(1) cin);
			Bit#(24) sum 	= 0;
			Bit#(25) carry 	= zeroExtend(cin);

			// Perform bitwise addition over 32 bits
			for (Integer i = 0; i < 24; i = i + 1) begin
		    	sum[i] 		= (a[i] ^ b[i] ^ carry[i]);
		    	carry[i+1] 	= (a[i] & b[i]) | (carry[i] & (a[i] ^ b[i]));
			end
			return tuple2(sum, carry);
	    endfunction: bitwise_Addition_int23


	//function to perform 24 bit multiplication
	function Bit#(16) multiplication_24bit(Bit#(8) a, Bit#(8) b);
		Bit#(16) product	= 0;
		Bit#(16) temp_a 	= zeroExtend(a); // Extend a to 32 bits for shift operations

		for(Integer i=0; i<8; i=i+1) begin
			if(b[i]==1) begin
				product = bitwise_Addition_int32(product, (temp_a << i), 0);
			end
		end
		return product;//return the middle 32 bits
	endfunction: multiplication_24bit

	//Function to perform multiplication for fp32
	function Bit#(32) multiplication_fp32(Bit#(32) a_fp32, Bit#(32) b_fp32);
		Bit#(1) 	sign_A 				= a_fp32[31];
		Bit#(1) 	sign_B 				= b_fp32[31];
		Bit#(8) 	mantissa_a 			= {1'b1, a_fp32[22:16]};
		Bit#(8) 	mantissa_b 			= {1'b1, b_fp32[22:16]};
		Bit#(8) 	exponent_A 			= a_fp32[30:23];
		Bit#(8) 	exponent_B 			= b_fp32[30:23];
		Bit#(16) 	mantissa_product 	= multiplication_24bit(mantissa_a,mantissa_b);
		Bit#(8) 	exponent_sum 		= exponent_A + exponent_B -127;
		Bit#(8) 	final_mantissa;
		
		if (mantissa_product[15] == 1) begin
        	// Product already normalized
        	final_mantissa = {1'b0,mantissa_product[14:8]}; // Take top 7 bits and 1 bit for rounding check
        	exponent_sum = exponent_sum + 1; // Adjust exponent
        	// Handle rounding
        	if (((mantissa_product[6:0])!= 0||final_mantissa[0] == 1) && mantissa_product[7] == 1) begin
            	final_mantissa = final_mantissa + 1; // Round up (round to nearest even)
            	if (final_mantissa[7]==1) begin
            		exponent_sum = exponent_sum + 1;
            	end
            end
    	end 
    	else begin
        	final_mantissa = {1'b0,mantissa_product[13:7]}; // Take top 7 bits and 1 bit for rounding check
       		if (((mantissa_product[5:0])!= 0||final_mantissa[0] == 1) && mantissa_product[6] == 1) begin
            	final_mantissa = final_mantissa + 1; // Round up (round to nearest even)
            	if (final_mantissa[7]==1) begin
            		exponent_sum = exponent_sum + 1;
            	end
            end
    	end
		//Handle rounding
		Bit#(23) mantissa_rounded = {final_mantissa[6:0], 16'b0};
		return {sign_A^sign_B,exponent_sum,mantissa_rounded};
	endfunction: multiplication_fp32

	//fp32 addition logic
	function Bit#(32) fp32_Addition(Bit#(32) a_fp32, Bit#(32) b_fp32);
		Bit#(1) 	sign_A 				= a_fp32[31];
		Bit#(1) 	sign_B 				= b_fp32[31];
		Bit#(24) 	mantissa_a 			= {1'b1, a_fp32[22:0]};
		Bit#(24) 	mantissa_b 			= {1'b1, b_fp32[22:0]};
		Bit#(8) 	exponent_A 			= a_fp32[30:23];
		Bit#(8) 	exponent_B 			= b_fp32[30:23];
		Bit#(1) 	round_flag 			= 0;
		Int#(8) 	exponent_diff 		= unpack(exponent_A-exponent_B);
		Int#(8) 	exponent_diff1 		= unpack(exponent_B-exponent_A);
		Bit#(8) 	result_exponent 	= exponent_A;
		Bit#(24) 	aligned_mantissa_A 	= mantissa_a;
		Bit#(24) 	aligned_mantissa_B 	= mantissa_b;
		
		if(exponent_diff>0) begin
			aligned_mantissa_B = aligned_mantissa_B>>exponent_diff;
			round_flag = mantissa_b[exponent_diff-1];
		end else if(exponent_diff<0) begin
			aligned_mantissa_A = aligned_mantissa_A>>exponent_diff1;
			result_exponent = exponent_A+pack(exponent_diff1);
			round_flag = mantissa_a[exponent_diff1-1];
		end
		//Add or subtract mantissas
		Bit#(1) result_sign;
		Bit#(24) result_mantissa;
		Bit#(24) result_mantissa1 = 0;
		Bit#(25) result_carry;
		result_sign=sign_A;
		Tuple2#(Bit#(24),Bit#(25)) result = bitwise_Addition_int23(aligned_mantissa_A, aligned_mantissa_B, 0);
		result_mantissa = tpl_1(result);
		result_carry = tpl_2(result);
		result_mantissa1 = result_mantissa;	
		if(result_carry[24]==1) begin
			result_mantissa1 = result_mantissa>>1;
			round_flag = result_mantissa[0];
			result_exponent = result_exponent+1;
		end
		if(round_flag==1) begin
			result_mantissa1 = result_mantissa1 + 1;
		end
		return {result_sign, result_exponent,result_mantissa1[22:0]};		
	endfunction: fp32_Addition
	
	//Rule to compute the result
	rule rl_compute_bf16_mac;
		Bit#(32) fp32_A = bf16_to_fp32(reg_A);
		Bit#(32) fp32_B = bf16_to_fp32(reg_B);
		result <= fp32_Addition(multiplication_fp32(fp32_A, fp32_B),reg_C);
		//result <= multiplication_fp32(fp32_A, fp32_B);
	endrule: rl_compute_bf16_mac

	//Interface methods to load inputsS
	method Action load_A(Bit#(16) a);
		reg_A <= a;
	endmethod: load_A
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
		return result;
	endmethod:get_MAC
	
endmodule: mkbf16Mac

//Top level Mac Unit module
(*synthesize*)
module mkMacUnitTop(MacUnit_Ifc);
	//Control bit to select integer mac or float mac
	Reg#(Bit#(1)) reg_s1_or_s2 <- mkReg(0);

	//Instantiate Integer mac and bf16mac
	MacUnit_Ifc int_Mac 	<- mkIntMac();
	MacUnit_Ifc bf16_Mac 	<- mkbf16Mac();

	//register to hold the selected mac output
	Reg#(Bit#(32)) result 	<- mkReg(0);

	//Rule to compute the selected mac based on s1_or_s2
	rule rl_select_mac_output;
		if(reg_s1_or_s2 == 0) begin
			let mac_result 	<- int_Mac.get_MAC();
			result 			<= mac_result;
		end else begin
			let mac_result 	<- bf16_Mac.get_MAC();
			result 			<= mac_result;
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






















