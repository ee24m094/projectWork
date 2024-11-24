package mmUnit;

import macUnit::*;
import FIFO::*;
import Vector::*;

//parameters for array dimensions
//Maybe#(int) num_ROWS=4;
//Maybe#(int) num_COLS=4;

//parameter int num_rows=4;

// =======Processing Element Interface===============//
interface PE_Ifc;
    method Action load_A(Bit#(16) a);                   // Load element of matrix A
    method Action load_B(Bit#(16) b);                   // Load element of matrix B
    method Action load_C(Bit#(32) c);
    method Action load_s1_or_s2(Bit#(1) sel);
    method ActionValue#(Bit#(32)) get_Result();         // Get result from the PE
    
    method Action pass_A(Bit#(16) a);
    method Action pass_B(Bit#(16) b);
endinterface

// Processing Element Module
module mkPE(PE_Ifc);
    MacUnit_Ifc macunit <- mkMacUnitTop();                  // Instantiate MAC Unit
    
    //Internal registers to hold a and b
    Reg#(Bit#(16)) reg_A <- mkReg(0);                 // FIFO for A input
    Reg#(Bit#(16)) reg_B <- mkReg(0);                 // FIFO for B input
    //Reg#(Bit#(32)) fifo_result <- mkFIFO();            // FIFO to store result
    
    //load and pass a
    method Action load_A(Bit#(16) a);
    	reg_A <= a;
    	macunit.load_A(a);
    endmethod
    
    method Action pass_A(Bit#(16) a);
    	reg_A <= a;
    endmethod
    
    //load and pass b
    method Action load_B(Bit#(16) b);
    	reg_B <= b;
    	macunit.load_B(b);
    endmethod
    
    method Action pass_B(Bit#(16) b);
    	reg_B <= b;
    endmethod

    method Action load_C(Bit#(32) c);
        macunit.load_C(c);
    endmethod

    method Action load_s1_or_s2(Bit#(1) sel);
        macunit.load_s1_or_s2(sel);
    endmethod

    method ActionValue#(Bit#(32)) get_Result();
    	let result<-macunit.get_MAC();
        return result;
    endmethod
endmodule : mkPE

// ==================Systolic Array Module====================//

// Interface for the Systolic Array Matrix Multiplier
interface MmUint_Ifc;
    method Action load_A_row(Vector#(4, Bit#(16)) aRow,UInt#(8) rowIndex);
    method Action load_B_col(Vector#(4, Bit#(16)) bCol,UInt#(8) colIndex);
    method Action load_C(Vector#((16), Bit#(32)) cValues);
    method Action load_s1_or_s2(Bit#(1) sel);
    method ActionValue#(Vector#(16, Bit#(32))) get_results();
endinterface

(* synthesize *)
module mkMmUnit(MmUint_Ifc);

    // Instantiate a 4x4 array of Processing Elements (PEs)
    Vector#(4, Vector#(4, PE_Ifc)) pes<-replicateM(replicateM(mkPE));

    // Load a row of matrix A into the PE
    method Action load_A_row(Vector#(4, Bit#(16)) aRow,UInt#(8) rowIndex);
        for (Integer col = 0; col < 4; col = col + 1) begin
            pes[rowIndex][col].load_A(aRow[col]);
        end
    endmethod

    // Load columns of matrix B into the PE
    method Action load_B_col(Vector#(4, Bit#(16)) bCol,UInt#(8) colIndex);
        for (Integer row = 0; row < 4; row = row + 1) begin
            pes[colIndex][row].load_B(bCol[row]);
        end
    endmethod
    
    //Load all cvalues into PEs
    method Action load_C(Vector#(16, Bit#(32)) cValues);
    	for (Integer row = 0; row < 4; row = row + 1) begin
    		for (Integer col = 0; col < 4; col = col + 1) begin
    			pes[row][col].load_C(cValues[row*4+col]);
    		end
    	end
    endmethod
    
    //set the mac operation for int8 or bf16
    method Action load_s1_or_s2(Bit#(1) sel);
    	for (Integer row = 0; row < 4; row = row + 1) begin
    		for (Integer col = 0; col < 4; col = col + 1) begin
    			pes[row][col].load_s1_or_s2(sel);
    		end
    	end
    endmethod

    // Method to get the final results from all PEs
    method ActionValue#(Vector#(16, Bit#(32))) get_results();
        Vector#(16, Bit#(32)) results;
        for (Integer row = 0; row < 4; row = row + 1) begin
    		for (Integer col = 0; col < 4; col = col + 1) begin
    			let result<-pes[row][col].get_Result();
    			results[row*4+col]=result;
    		end
    	end
        return results;
    endmethod

endmodule : mkMmUnit

endpackage:mmUnit















