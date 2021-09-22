/*
Author: Sugandha Tiwari
Description: Wrapper for HardFloat FMA Module
*/
package wrapper_fma;

  import bsvmkmulAdd:: * ;
  import ConfigReg::*;
  import FIFO::*;
  import UniqueWrappers::*;
  import Vector :: * ;
  import DReg :: * ;
  `include "fpu.defines"

  interface Ifc_wrapper_fma#(numeric type expWidth, numeric type sigWidth);
    method Action request(Bit#(2) op, Bit#(TAdd#(expWidth, sigWidth)) a, Bit#(TAdd#(expWidth, sigWidth)) b, Bit#(TAdd#(expWidth, sigWidth)) c, Bit#(3) rm);
    method Tuple2#(Bit#(TAdd#(expWidth, sigWidth)), Bit#(5)) response;
    method Bool resp_valid;
  endinterface
  
  module mkwrapper_fma(Ifc_wrapper_fma#(expWidth, sigWidth));
    Ifc_mulAdd#(expWidth, sigWidth) fma <- mkmulAdd;
    
    Vector#(`fma_stages, Reg#(Tuple2#(Bit#(TAdd#(expWidth, sigWidth)), Bit#(5))))  rg_inputs  <- replicateM(mkReg(unpack(0)));
    Vector#(`fma_stages, Reg#(Bool))  rg_valid  <- replicateM(mkDReg(False));

    //Reg#(Tuple5#(Bit#(2), Bit#(TAdd#(expWidth, sigWidth)), Bit#(TAdd#(expWidth, sigWidth)), Bit#(TAdd#(expWidth, sigWidth)), Bit#(3))) input_reg <- mkReg(unpack(0));
    Reg#(Bit#(2)) reg_op <- mkDReg(0);
    Reg#(Bit#(TAdd#(expWidth, sigWidth))) reg_a <- mkDReg(0);
    Reg#(Bit#(TAdd#(expWidth, sigWidth))) reg_b <- mkDReg(0);
    Reg#(Bit#(TAdd#(expWidth, sigWidth))) reg_c <- mkDReg(0);
    Reg#(Bit#(3)) reg_rm <- mkDReg(0);
    Reg#(Bool) ip_valid <- mkDReg(False);

    rule rl_start;
      for(Integer i = 1; i <=  `fma_stages-1 ; i = i + 1) begin
        rg_inputs[i] <= rg_inputs[i - 1];
        rg_valid[i] <= rg_valid[i-1];
      end
    endrule

    rule start_calc (ip_valid);
      /*Bit#(2) op <- tpl_1(input_reg); 
      Bit#(TAdd#(expWidth, sigWidth)) a <- tpl_2(input_reg);
      Bit#(TAdd#(expWidth, sigWidth)) b <- tpl_3(input_reg);
      Bit#(TAdd#(expWidth, sigWidth)) c <- tpl_4(input_reg);
      Bit#(3) rm <- tpl_5(input_reg);*/
      fma.request(1, reg_op, reg_rm, reg_a, reg_b, reg_c);
			$display("FMA wrapper: a: %x b: %x c: %x op: %b rm: %b res: %x flag: %b", reg_a, reg_b, reg_c, reg_op, reg_rm, fma.oout, fma.oexceptionFlags);
      rg_inputs[0] <=  tuple2(fma.oout,  fma.oexceptionFlags);
      rg_valid[0] <=  True;
    endrule
    
    method Action request(Bit#(2) op, Bit#(TAdd#(expWidth, sigWidth)) a, Bit#(TAdd#(expWidth, sigWidth)) b, Bit#(TAdd#(expWidth, sigWidth)) c, Bit#(3) rm);
      //input_reg <= tuple5(op, a, b, c, rm);
      reg_op <= op;
      reg_a <= a; 
      reg_b <= b;
      reg_c <= c;
      reg_rm <= rm;
      ip_valid <= True;
    endmethod
    
    method Tuple2#(Bit#(TAdd#(expWidth, sigWidth)), Bit#(5)) response;
      return rg_inputs[`fma_stages -1];
    endmethod
    
    method Bool resp_valid;
      return rg_valid[`fma_stages-1];
    endmethod
    
  endmodule
endpackage