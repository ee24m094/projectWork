package macUnit;

//package imports

//Custom struct
typedef struct{
	Bit#(32) macOut;
}macOutResult deriving(Bits,eq);

//Interface declaration
interafce macUnit_ifc;
	method Action start(Bit#(16) a, Bit#(16) b, Bit#(32) c,Bit#(1) s1_or_s2);
	method mac_Result get_result();
endinterface: macUnit_ifc

//Module declaration
(*synthesize*)
module mkMac_Unit(macUnit_ifc);

	Reg#(Bit#(8)) reg_A <- mkReg(0);
	Reg#(Bit#(8)) reg_B <- mkReg(0);
	Reg#(Bit#(32)) reg_C <- mkReg(0);
	Reg#(macOutResult) reg_Out <- mkReg(macOutResult(macOut='0);
	
	function Bit#(32) bitwise_Addition(
	Bit#(32) a, 
	Bit#(32) b
	Bit#(1) cin
	);

		Bit#(32) sum=0;
		Bit#(33) carry='0;
		carry[0] = cin;
		
		for(Integer i=0;i=32;i=i+1) begin
			sum[i] = (a[i] ^ b[i] ^ carry[i]);
			carry[i] = (a[i] & b[i] | (carry[i] & (a[i] ^ b[i]));
		end
		
		return sum;

	endfunction: bitwise_Addition 

	function macOutResult Multiplication(Bit#(8) a, Bit#(8) b);
		
		Bit#(32) product=0;
		Bit#(32) shifted_A = zeroExtend(a);
		
		for(Integer i=0;i<8;i=i+1) begin
			if(b[i])
				product = bitwise_Addition(product, shifted_A);
				shifted_A = shifted_A<<1;
		end
		
		return product;
	
	endfunction: Multiplication
	
	rule rl_macUnit();
		rg_Out <= bitwise_Addition(reg_A, reg_B, reg_C);
	endrule: rl_macUnit	

	method Action start(Bit#(32) a, Bit#(32) b, Bit#(1) c, Bit#(1) s1_or_s2);
		reg_A <= a;
		reg_B <= b;
		reg_C <= c;
		reg_s1_or_s2 <= s1_or_s2;
	endmethod:start
	

endpackage:macUnit
