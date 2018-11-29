/*
Copyright (c) 2013, IIT Madras
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

*  Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
*  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
*  Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Author Names : Neel Gala
Email ID : neelgala@gmail.com

Description : 
This is the 64-bit core of the c_class processor. It containes rules for each stage. The description of each stage 
is given in the respective rules.
*/
package riscv;

  /*===== Package imports === */
  import SpecialFIFOs::*;
  import FIFO::*;
  import FIFOF::*;
  import DReg::*;
  import Vector ::*;
  import TxRx::*;
  import Connectable::*;
  import GetPut::*;
  /*========================= */
  
  import stage1::*;
  import stage2::*;
  import stage3::*;
  import stage4::*;
  import common_types::*;
  `include "common_params.bsv"
  
  interface Ifc_riscv;
    
  	interface Get#(Tuple4#(Bit#(VADDR),Bool,Bit#(3),Bool)) inst_request;
    interface Put#(Tuple3#(Bit#(32),Bool,Bit#(3))) inst_response;
    //interface Put#(Tuple4#(Bit#(3),Bit#(VADDR),Bit#(VADDR),Bit#(2))) prediction_response;
    //interface Get#(Tuple2#(Bit#(3),Bit#(VADDR))) send_prediction_request;
    interface Get#(Tuple2#(Memrequest,Bit#(1))) to_dmem;
    `ifdef bpu
      method Maybe#(Training_data#(VADDR)) training_data;
    `endif 
    `ifdef Debug
      method ActionValue#(Bit#(XLEN)) read_write_gprs(Bit#(5) r, Bit#(XLEN) data 
          `ifdef spfpu ,Op3type rfselect `endif );
    `endif
    `ifdef supervisor // TODO make the following into a common structure
      interface Put#(Maybe#(Tuple4#(Bit#(XLEN), Bool, Bool, Access_type))) memory_response;
    `else
      interface Put#(Maybe#(Tuple3#(Bit#(XLEN), Bool, Access_type))) memory_response;
    `endif
    method Action clint_msip(Bit#(1) intrpt);
    method Action clint_mtip(Bit#(1) intrpt);
    method Action clint_mtime(Bit#(XLEN) c_mtime);
    `ifdef simulate
      interface Get#(DumpType) dump;
    `endif
    `ifdef supervisor
    	method Bit#(XLEN) send_satp;
    	method Chmod perm_to_TLB;
      method Fence_VMA_type#(VADDR) fence_tlbs;
    `endif
    method Bool flush_dmem;
	  method Action set_external_interrupt(Tuple2#(Bool,Bool) ex_i);
  endinterface

  (*synthesize*)
  (*preempts="flush_rename_mapping, commit_instruction"*)
  module mkriscv(Ifc_riscv);
    let verbosity = `VERBOSITY ;

    `ifdef supervisor
      Wire#(Fence_VMA_type#(VADDR)) wr_sfence_vma  <- mkWire();
    `endif

    Ifc_stage1 stage1 <- mkstage1();
    Ifc_stage2 stage2 <- mkstage2();
    Ifc_stage3 stage3 <- mkstage3();
    Ifc_stage4 stage4 <- mkstage4();

    FIFOF#(PIPE1) pipe1 <-mkSizedFIFOF(2);
    FIFOF#(PIPE2) pipe2 <- mkSizedFIFOF(2);
    FIFOF#(PIPE3) pipe3 <- mkSizedFIFOF(2);

    mkConnection(stage1.to_stage2, pipe1);
    mkConnection(pipe1, stage2.rx_in);
    mkConnection(stage2.tx_out, pipe2);
    mkConnection(pipe2, stage3.rx_in);
    mkConnection(stage3.tx_out, pipe3);
    mkConnection(pipe3, stage4.rx_in);

    let {flush_from_exe, flushpc_from_exe}=stage3.flush_from_exe;
    let {flush_from_wb, flushpc_from_wb}=stage4.flush;
    let {decode_firing, rd_index}=stage2.fetch_rd_index;

    rule flush_stage1_2(flush_from_exe != None || flush_from_wb);
      if(verbosity>1)
      $display($time, "\tRISCV: Clearing all FIFOs: flush_from_wb: %b flush_from_exe: ",
          flush_from_wb, fshow(flush_from_exe));
      pipe1.clear;
      pipe2.clear;
    endrule
    rule flush_stage3(flush_from_wb);
      pipe3.clear;
    endrule
    rule flush_rename_mapping(flush_from_exe!=None || flush_from_wb);
      stage2.reset_renaming;
    endrule
    rule commit_instruction;
      stage2.commit_rd(stage4.commit_rd);
    endrule

    rule connect_get_index(decode_firing);
      stage3.invalidate_index(rd_index);
    endrule
    mkConnection(stage3.fwd_from_mem, stage4.fwd_from_mem);
    rule flush_stage1(flush_from_exe!=None||flush_from_wb);
      if(flush_from_wb)
        stage1.flush(flushpc_from_wb, False ,True); // TODO second field indicates a fence.
      else
        stage1.flush(flushpc_from_exe, False, False); // can never send a fence request.
    endrule
    rule connect_csrs;
      stage2.csrs(stage4.csrs_to_decode);
    endrule
    rule clear_stall_in_decode_stage(flush_from_exe != None || flush_from_wb);
      stage2.csr_updated(True);
    endrule
    rule check_csr_update(!(flush_from_exe != None || flush_from_wb));
      stage2.csr_updated(stage4.csr_updated);
    endrule
    rule upd_stage2eEpoch(flush_from_exe!=None);
      stage2.update_eEpoch();
    endrule
    rule upd_stage2wEpoch(flush_from_wb);
      stage2.update_wEpoch();
      stage3.update_wEpoch();
    endrule
    // TODO RAS support will enable the following rule.
//    rule ras_push_connect;
//      stage1.push_ras(stage3.ras_push);
//    endrule
    `ifdef RV64
      rule connect_inferred_xlen;
        stage3.inferred_xlen(stage4.inferred_xlen);
      endrule
    `endif
    `ifdef spfpu
      rule connect_roundingmode;
        stage3.roundingmode(stage4.roundingmode);
      endrule
    `endif
    `ifdef supervisor
      rule send_sfence_command(stage4.send_sfence);
        if(verbosity>1)
          $display($time,"\tRISCV: Sending SFENCE command to TLBs");
        let {op1,op2}=stage3.sfence_operands;
        wr_sfence_vma <= Fence_VMA_type{rs1:truncate(op1),rs2:truncate(op2)};
      endrule
    `endif
    ///////////////////////////////////////////

//    method Bool interrupt;
//    `ifdef spfpu
//  		method Bit#(3) roundingmode; TODO
//    `endif

    interface inst_request=stage1.inst_request;
    interface inst_response=stage1.inst_response;
//    interface prediction_response =stage1.prediction_response; // TODO BPU support
//    interface send_prediction_request=stage1.send_prediction_request; // TODO support
    `ifdef Debug
      method ActionValue#(Bit#(XLEN)) read_write_gprs(Bit#(5) r, Bit#(XLEN) data 
            `ifdef spfpu ,Op3type rfselect `endif ) = stage2.read_write_gprs(r, data `ifdef spfpu
            rfselect `endif );
    `endif
    interface to_dmem=stage3.to_dmem;
    `ifdef bpu
      method  training_data=stage3.training_data;
    `endif
    method Action clint_msip(Bit#(1) intrpt)=stage4.clint_msip(intrpt);
    method Action clint_mtip(Bit#(1) intrpt)=stage4.clint_mtip(intrpt);
    method Action clint_mtime(Bit#(XLEN) c_mtime)=stage4.clint_mtime(c_mtime);
    `ifdef simulate
      interface dump=stage4.dump;
    `endif
    `ifdef supervisor
    	method send_satp=stage4.send_satp;
    	method perm_to_TLB=stage4.perm_to_TLB;
      method Fence_VMA_type#(VADDR) fence_tlbs=wr_sfence_vma;
    `endif
    interface memory_response=stage4.memory_response;
    method Bool flush_dmem;
			return flush_from_wb;
		endmethod
	  method Action set_external_interrupt(Tuple2#(Bool,Bool)
                                                        ex_i)=stage4.set_external_interrupt(ex_i);
  endmodule

endpackage


