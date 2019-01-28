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
  import CustomFIFOs::*;
  `include "common_params.bsv"
  
  interface Ifc_riscv;
    
  	interface Get#(ICore_request#( `vaddr, 3)) inst_request;
    interface Put#(Tuple4#(Bit#(32),Bool,Bit#(6),Bit#(3))) inst_response;
  `ifdef dcache
		interface Get#(DMem_request#(`vaddr,ELEN,1)) memory_request;
  `else 
		interface Get#(MemoryReadReq#(`vaddr,1)) memory_read_request;
  `endif
  `ifdef dcache
    interface Put#(DMem_response#(ELEN,1)) memory_response;
    (*always_enabled*)
    method Action storebuffer_empty(Bool e);
    method Tuple2#(Bool,Bool) initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1),Bit#(`vaddr))) r);
    method Action store_is_cached(Bool c);
    (*always_enabled*)
    method Action cache_is_available(Bool avail);
  `else
    interface Put#(MemoryReadResp#(1)) memory_read_response;
		interface Get#(MemoryWriteReq#(`vaddr,1,ELEN)) memory_write_request;
    interface Put#(MemoryWriteResp) memory_write_response;
  `endif 
    method Action clint_msip(Bit#(1) intrpt);
    method Action clint_mtip(Bit#(1) intrpt);
    method Action clint_mtime(Bit#(64) c_mtime);
	  method Action set_external_interrupt(Bit#(1) ex_i);
  `ifdef rtldump
    interface Get#(DumpType) dump;
  `endif
  `ifdef cache_control
    method Bit#(2) mv_cacheenable;
    method Bit#(XLEN) csr_mstatus;
  `endif
    method Bit#(2) curr_priv;
	`ifdef supervisor
		method Bit#(XLEN) csr_satp;
	`endif
  endinterface

  (*synthesize*)
  (*preempts="fwding_from_exe1,nofwding_from_exe1"*)
  `ifndef PIPE2
  (*preempts="fwding_from_mem1,nofwding_from_mem1"*)
  `endif
  module mkriscv(Ifc_riscv);
    let verbosity = `VERBOSITY ;

    Ifc_stage1 stage1 <- mkstage1();
    Ifc_stage2 stage2 <- mkstage2();
    Ifc_stage3 stage3 <- mkstage3();
    Ifc_stage4 stage4 <- mkstage4();
    Ifc_stage5 stage5 <- mkstage5();

    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);

    FIFOF#(PIPE1_min) pipe1min <-mkSizedFIFOF(2);
    FIFOF#(PIPE1_opt1) pipe1opt1 <-mkSizedFIFOF(2);

    FIFOF#(PIPE2_min#(ELEN,FLEN)) pipe2min <- mkLFIFOF();
  `ifdef spfpu
    FIFOF#(OpFpu) pipe2fpu <- mkLFIFOF();
  `endif
  `ifdef bpu
    FIFOF#(Bit#(2)) pipe2bpu <- mkLFIFOF();
  `endif
  `ifdef rtldump
    FIFOF#(Bit#(32)) pipe2inst <- mkLFIFOF();
  `endif

`ifdef PIPE2
    FIFOF#(PIPE3) pipe3 <- mkSizedFIFOF(2);
  `ifdef rtldump
    FIFOF#(Tuple2#(Bit#(`vaddr),Bit#(32))) pipe3inst <-mkSizedFIFOF(2);
  `endif
    Ifc_PipeFIFOF#(PIPE4) pipe4 <- mkPipeFIFOF();
  `ifdef rtldump
    FIFOF#(Tuple2#(Bit#(`vaddr),Bit#(32))) pipe4inst <-mkSizedFIFOF(2);
  `endif
`else
    FIFOF#(PIPE3) pipe3 <- mkLFIFOF();
  `ifdef rtldump
    FIFOF#(Tuple2#(Bit#(`vaddr),Bit#(32))) pipe3inst <-mkLFIFOF();
  `endif
    FIFOF#(PIPE4) pipe4 <- mkLFIFOF();
  `ifdef rtldump
    FIFOF#(Tuple2#(Bit#(`vaddr),Bit#(32))) pipe4inst <-mkLFIFOF();
  `endif
`endif

    mkConnection(stage1.tx_min, pipe1min);
    mkConnection(pipe1min, stage2.rx_min);

  `ifdef bpu
    mkConnection(stage1.tx_opt1,pipeopt1);
    mkConnection(pipeopt1,stage2.rx_opt1);
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

  `ifdef PIPE2
    mkConnection(stage3.tx_out, pipe3);
    mkConnection(pipe3, stage4.rx_min);
  `else
    mkConnection(stage3.tx_out, pipe3);
    mkConnection(pipe3, stage4.rx_min);
  `endif

  `ifdef rtldump
    mkConnection(stage3.tx_inst,pipe3inst);
    mkConnection(pipe3inst,stage4.rx_inst);
  `endif

  `ifdef PIPE2  
    mkConnection(stage4.tx_min,pipe4.fifo);
    mkConnection(pipe4.fifo,stage5.rx_in);
  `else
    mkConnection(stage4.tx_min,pipe4);
    mkConnection(pipe4,stage5.rx_in);
  `endif

  `ifdef rtldump
    mkConnection(stage4.tx_inst,pipe4inst);
    mkConnection(pipe4inst,stage5.rx_inst);
  `endif
    let {flush_from_exe, flushpc_from_exe}=stage3.flush_from_exe;
    let {flush_from_wb, flushpc_from_wb, fenceI `ifdef supervisor ,sfence `endif }=stage5.flush;

    rule update_wEpoch(flush_from_wb);
      rg_wEpoch<=~rg_wEpoch;
    endrule

    rule commit_instruction;
      stage2.commit_rd(stage5.commit_rd);
      if(stage5.commit_rd matches tagged Valid .c)
        stage3.latest_commit(c);
    endrule

    rule flush_stage1(flush_from_exe!=None||flush_from_wb);
      if(flush_from_wb)
        stage1.flush(flushpc_from_wb `ifdef icache , fenceI `ifdef supervisor , sfence `endif `endif ); // TODO Sfence
      else
        stage1.flush(flushpc_from_exe `ifdef icache , False `ifdef supervisor , False `endif `endif ); // EXE can never send a fence request.
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
  `ifndef dcache
    rule connect_store_request;
      stage4.start_store(stage5.initiate_store);
    endrule
    rule connect_store_response;
      stage5.write_resp(stage4.store_response);
    endrule
    rule connect_storebuffer_status;
      stage3.storebuffer_empty(stage4.storebuffer_empty);
    endrule
  `endif
    // TODO RAS support will enable the following rule.
//    rule ras_push_connect;
//      stage1.push_ras(stage3.ras_push);
//    endrule

    rule fwding_from_exe1;
      let data = pipe3.first;
      let {committype, field1, field2, field3, field4}=data;
      Bit#(5) rd = field4[5:1];
      RFType rdtype = unpack(field4[6]);
      Bit#(ELEN) rdval = field2;
      Bool available = (committype==REGULAR);
    `ifdef spfpu
      stage3.fwd_from_pipe3(tuple5(committype!=TRAP && field4[0]==rg_wEpoch, available,rd,rdval,rdtype));
    `else
      stage3.fwd_from_pipe3(tuple4(committype!=TRAP && field4[0]==rg_wEpoch, available,rd,rdval));
    `endif
    endrule
    rule nofwding_from_exe1;
    `ifdef spfpu
      stage3.fwd_from_pipe3(tuple5(False, ?, ?, ?, ?));
    `else
      stage3.fwd_from_pipe3(tuple4(False, ?, ?, ?));
    `endif
    endrule
  `ifdef PIPE2
    rule fwding_from_mem1;
      let {present, data} = pipe4.first_data;
      let {committype , epoch}=data;
      Bit#(5) rd = 0;
      RFType rdtype = FRF;
      Bit#(ELEN) rdval = 0;
      Bool available = False;
      if(committype matches tagged REG .r)begin
        available=True;
        rd=r.rd;
        rdval = r.commitvalue;
        rdtype = r.rdtype;
      end
    `ifdef atomic
      else if (committype matches tagged STORE .s)begin
        available=True;
        rd=s.rd;
        rdval=s.commitvalue;
        rdtype=IRF;
      end
    `endif
    `ifdef spfpu
      stage3.fwd_from_pipe4_first(tuple5(present && epoch == rg_wEpoch,available,rd,rdval,rdtype));
    `else
      stage3.fwd_from_pipe4_first(tuple4(present && epoch == rg_wEpoch,available,rd,rdval));
    `endif
    if(present && epoch == rg_wEpoch)
    `ifdef spfpu
      stage2.fwd_from_wb(tuple3(rd,rdval,rdtype));
    `else
      stage2.fwd_from_wb(tuple2(rd,rdval));
    `endif
    endrule
    rule fwding_from_mem2;
      let {present, data} = pipe4.second_data;
      let {committype , epoch}=data;
      Bit#(5) rd = 0;
      RFType rdtype = FRF;
      Bit#(ELEN) rdval = 0;
      Bool available = False;
      if(committype matches tagged REG .r)begin
        available=True;
        rd=r.rd;
        rdval = r.commitvalue;
        rdtype = r.rdtype;
      end
    `ifdef atomic
      else if (committype matches tagged STORE .s)begin
        available=True;
        rd=s.rd;
        rdval=s.commitvalue;
        rdtype=IRF;
      end
    `endif
    `ifdef spfpu
      stage3.fwd_from_pipe4_second(tuple5(present && epoch == rg_wEpoch, available,rd,rdval,rdtype));
    `else
      stage3.fwd_from_pipe4_second(tuple4(present && epoch == rg_wEpoch, available,rd,rdval));
    `endif
    endrule
  `else
    rule fwding_from_mem1;
      let data = pipe4.first;
      let {committype , epoch}=data;
      Bit#(5) rd = 0;
      RFType rdtype = FRF;
      Bit#(ELEN) rdval = 0;
      Bool available = False;
      if(committype matches tagged REG .r)begin
        available=True;
        rd=r.rd;
        rdval = r.commitvalue;
        rdtype = r.rdtype;
      end
    `ifdef atomic
      else if (committype matches tagged STORE .s)begin
        available=True;
        rd=s.rd;
        rdval=s.commitvalue;
        rdtype=IRF;
      end
    `endif
    `ifdef spfpu
      stage3.fwd_from_pipe4_first(tuple5(epoch==rg_wEpoch, available,rd,rdval,rdtype));
    `else
      stage3.fwd_from_pipe4_first(tuple4(epoch==rg_wEpoch, available,rd,rdval));
    `endif
      if(epoch == rg_wEpoch)begin
      `ifdef spfpu
        stage2.fwd_from_wb(tuple3(rd,rdval,rdtype));
      `else
        stage2.fwd_from_wb(tuple2(rd,rdval));
      `endif
      end
    endrule
    rule nofwding_from_mem1;
    `ifdef spfpu
      stage3.fwd_from_pipe4_first(tuple5(False, ?, ?, ?, ?));
    `else
      stage3.fwd_from_pipe4_first(tuple4(False, ?, ?, ?));
    `endif
    endrule
  `endif
    ///////////////////////////////////////////

    interface inst_request=stage1.inst_request;
    interface inst_response=stage1.inst_response;
  `ifdef dcache
    interface memory_request=stage3.memory_request;
  `else
    interface memory_read_request=stage3.memory_read_request;
  `endif
    method Action clint_msip(Bit#(1) intrpt)=stage5.clint_msip(intrpt);
    method Action clint_mtip(Bit#(1) intrpt)=stage5.clint_mtip(intrpt);
    method Action clint_mtime(Bit#(64) c_mtime)=stage5.clint_mtime(c_mtime);
    `ifdef rtldump
      interface dump=stage5.dump;
    `endif
  `ifdef dcache
    interface memory_response=stage4.memory_response;
    method Action storebuffer_empty(Bool e);
      stage3.storebuffer_empty(e);
    endmethod
    method initiate_store =stage5.initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1),Bit#(`vaddr))) r);
      stage5.write_resp(r);
    endmethod
    method Action store_is_cached(Bool c);
      stage5.store_is_cached(c);
    endmethod
    method Action cache_is_available(Bool avail);
      stage3.cache_is_available(avail);
    endmethod
  `else
    interface memory_read_response=stage4.memory_read_response;
		interface memory_write_request=stage4.memory_write_request;
    interface memory_write_response=stage4.memory_write_response;
  `endif
	  method Action set_external_interrupt(Bit#(1) ex_i)=stage5.set_external_interrupt(ex_i);
  `ifdef cache_control
    method mv_cacheenable = stage5.mv_cacheenable;
    method csr_mstatus= stage5.csr_mstatus;
  `endif
    method curr_priv = stage5.curr_priv;
		`ifdef supervisor
			method csr_satp=stage5.csr_satp;
		`endif
  endmodule

endpackage


