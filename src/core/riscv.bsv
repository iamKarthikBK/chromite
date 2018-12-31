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
  import stage5::*;
  import common_types::*;
  `include "common_params.bsv"
  
  interface Ifc_riscv;
    
  	interface Get#(Tuple4#(Bit#(VADDR),Bool,Bit#(3),Bool)) inst_request;
    interface Put#(Tuple3#(Bit#(32),Bool,Bit#(3))) inst_response;
    interface Get#(MemoryReadReq#(VADDR,1)) memory_read_request;
    interface Put#(MemoryReadResp#(1)) memory_read_response;
		interface Get#(MemoryWriteReq#(VADDR,1,ELEN)) memory_write_request;
    interface Put#(MemoryWriteResp) memory_write_response;
    method Action clint_msip(Bit#(1) intrpt);
    method Action clint_mtip(Bit#(1) intrpt);
    method Action clint_mtime(Bit#(64) c_mtime);
	  method Action set_external_interrupt(Bit#(1) ex_i);
  `ifdef rtldump
    interface Get#(DumpType) dump;
  `endif
  `ifdef cache_control
    method Bit#(2) mv_cacheenable;
  `endif
  endinterface

  (*synthesize*)
  module mkriscv(Ifc_riscv);
    let verbosity = `VERBOSITY ;

    Ifc_stage1 stage1 <- mkstage1();
    Ifc_stage2 stage2 <- mkstage2();
    Ifc_stage3 stage3 <- mkstage3();
    Ifc_stage4 stage4 <- mkstage4();
    Ifc_stage5 stage5 <- mkstage5();

    FIFOF#(PIPE1_min) pipe1min <-mkSizedFIFOF(2);
    FIFOF#(PIPE1_opt1) pipe1opt1 <-mkSizedFIFOF(2);
    FIFOF#(PIPE1_opt2) pipe1opt2 <-mkSizedFIFOF(2);

    FIFOF#(PIPE2_min#(ELEN,FLEN)) pipe2min <- mkSizedFIFOF(2);
    `ifdef spfpu
      FIFOF#(OpFpu) pipe2fpu <- mkSizedFIFOF(2);
    `endif
    `ifdef bpu
      FIFOF#(Bit#(2)) pipe2bpu <- mkSizedFIFOF(2);
    `endif
    `ifdef rtldump
      FIFOF#(Bit#(32)) pipe2inst <- mkSizedFIFOF(2);
    `endif

    FIFOF#(PIPE3) pipe3 <- mkSizedFIFOF(2);
    `ifdef rtldump
      FIFOF#(Tuple2#(Bit#(VADDR),Bit#(32))) pipe3inst <-mkSizedFIFOF(2);
    `endif

    FIFOF#(PIPE4) pipe4 <-mkSizedFIFOF(2);
    `ifdef rtldump
      FIFOF#(Tuple2#(Bit#(VADDR),Bit#(32))) pipe4inst <-mkSizedFIFOF(2);
    `endif

    mkConnection(stage1.tx_min, pipe1min);
    mkConnection(pipe1min, stage2.rx_min);

  `ifdef bpu
    mkConnection(stage1.tx_opt1,pipeopt1);
    mkConnection(pipeopt1,stage2.rx_opt1);
  `endif
  `ifdef supervisor
    mkConnection(stage1.tx_opt2,pipeopt2);
    mkConnection(pipeopt2,stage2.rx_opt2);
  `endif

    mkConnection(stage2.tx_min, pipe2min);
    mkConnection(pipe2min, stage3.rx_min);
    `ifdef rtldump
      mkConnection(stage2.tx_inst, pipe2inst);
      mkConnection(pipe2inst, stage3.rx_inst);
    `endif
    `ifdef bpu
      mkConnection(stage2.tx_bpu, pipe2bpu);
      mkConnection(pipe2bpu, stage3.rx_bpu);
    `endif
    `ifdef spfpu
      mkConnection(stage2.tx_fpu, pipe2fpu);
      mkConnection(pipe2fpu, stage3.rx_fpu);
    `endif

    mkConnection(stage3.tx_out, pipe3);
    mkConnection(pipe3, stage4.rx_min);

    `ifdef rtldump
      mkConnection(stage3.tx_inst,pipe3inst);
      mkConnection(pipe3inst,stage4.rx_inst);
    `endif

    mkConnection(stage4.tx_min,pipe4);
    mkConnection(pipe4,stage5.rx_in);

    `ifdef rtldump
      mkConnection(stage4.tx_inst,pipe4inst);
      mkConnection(pipe4inst,stage5.rx_inst);
    `endif
    let {flush_from_exe, flushpc_from_exe}=stage3.flush_from_exe;
    let {flush_from_wb, flushpc_from_wb, fenceI}=stage5.flush;
    let {decode_firing, rd_index}=stage2.fetch_rd_index;

    rule commit_instruction;
      stage2.commit_rd(stage5.commit_rd);
    endrule
    rule connect_get_index(decode_firing);
      stage3.invalidate_index(rd_index);
    endrule

    mkConnection(stage3.fwd_from_mem, stage4.fwd_from_mem);
    rule flush_stage1(flush_from_exe!=None||flush_from_wb);
      if(flush_from_wb)
        stage1.flush(flushpc_from_wb, fenceI);
      else
        stage1.flush(flushpc_from_exe, False); // can never send a fence request.
    endrule
    rule connect_csrs;
      stage2.csrs(stage5.csrs_to_decode);
      stage1.csrs(stage5.csrs_to_decode);
      stage3.csr_misa_c(stage5.csr_misa_c);
    endrule
    rule clear_stall_in_decode_stage(flush_from_exe != None || flush_from_wb);
      stage2.clear_stall(True);
    endrule
    rule upd_stage2eEpoch(flush_from_exe!=None);
      stage2.update_eEpoch();
      stage1.update_eEpoch();
    endrule
    rule upd_stage2wEpoch(flush_from_wb);
      stage1.update_wEpoch();
      stage2.update_wEpoch();
      stage3.update_wEpoch();
      stage4.update_wEpoch();
    endrule
    rule connect_store_request;
      stage4.start_store(stage5.initiate_store);
    endrule
    rule connect_store_response;
      stage5.write_resp(stage4.store_response);
    endrule
    // TODO RAS support will enable the following rule.
//    rule ras_push_connect;
//      stage1.push_ras(stage3.ras_push);
//    endrule
    `ifdef spfpu
      rule connect_roundingmode;
        stage3.roundingmode(stage5.roundingmode);
      endrule
    `endif
    rule connect_storebuffer_status;
      stage3.storebuffer_empty(stage4.storebuffer_empty);
    endrule
    ///////////////////////////////////////////

    interface inst_request=stage1.inst_request;
    interface inst_response=stage1.inst_response;
    interface memory_read_request=stage3.memory_read_request;
    method Action clint_msip(Bit#(1) intrpt)=stage5.clint_msip(intrpt);
    method Action clint_mtip(Bit#(1) intrpt)=stage5.clint_mtip(intrpt);
    method Action clint_mtime(Bit#(64) c_mtime)=stage5.clint_mtime(c_mtime);
    `ifdef rtldump
      interface dump=stage5.dump;
    `endif
    interface memory_read_response=stage4.memory_read_response;
		interface memory_write_request=stage4.memory_write_request;
    interface memory_write_response=stage4.memory_write_response;
	  method Action set_external_interrupt(Bit#(1) ex_i)=stage5.set_external_interrupt(ex_i);
  `ifdef cache_control
    method mv_cacheenable = stage5.mv_cacheenable;
  `endif
  endmodule

endpackage


