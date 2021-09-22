import fpu :: *;

interface Ifc_fpu_topmod;
      method Action _start(Bit#(ELEN) op1, Bit#(ELEN) op2, Bit#(ELEN) op3, Bit#(4) opcode, Bit#(7) f7, Bit#(3) f3, Bit#(2) imm,  Bit#(3) fsr, Bool issp);
      method XBoxOutput get_result;
      method Action flush;
endinterface 

(*synthesize*)
module mkfpu_topmod(Ifc_fpu_topmod);
    Reg#(Tuple8#(Tuple3#(Bit#(ELEN), Bit#(ELEN), Bit#(ELEN)), Bit#(4), Bit#(7), Bit#(3), Bit#(2), Bit#(3), Bit#(1), Tuple2#(Bit#(ELEN), Bit#(5)))) _input <- mkReg(unpack(0)); 
    Reg#(XBoxOutput) _output <- mkReg(unpack(0));

    method Action _start(Bit#(ELEN) op1, Bit#(ELEN) op2, Bit#(ELEN) op3, Bit#(4) opcode, Bit#(7) f7, Bit#(3) f3, Bit#(2) imm,  Bit#(3) fsr, Bool issp) if (spdiv_sqrt.oinReady() /*&& dpdiv_sqrt.oinReady()*/ && !rg_valid);
      rg_valid <= True;
      rg_input <= Input_Packet {
                    op1 : op1,
                    op2 : op2,
                    op3 : op3,
                    opcode   : opcode,
                    f7   : f7,
                    f3   : f3,
                    imm  : imm,
                    fsr  : fsr,
                    issp : issp
                  };
    endmethod

endmodule