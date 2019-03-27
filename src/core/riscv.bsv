/*
Copyright (c) 2013, IIT Madras
All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

*  Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
*  Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and / or other materials provided with the distribution.
*  Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Author Names : Neel Gala
Email ID : neelgala@gmail.com

Description : 
This is the 64 - bit core of the c_class processor. It containes rules for each stage. The description of each stage 
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
 
  import stage0::*;
  import stage1::*;
  import stage2::*;
  import stage3::*;
  import stage4::*;
  import stage5::*;
  import common_types::*;
  import CustomFIFOs::*;
  import globals::*;
  `include "common_params.bsv"

`ifdef debug
  import debug_types ::*;
`endif
  
  interface Ifc_riscv;
    
 	  method ActionValue#(FetchRequest#(`vaddr, `iesize)) inst_request;
    interface Put#(NextPC) next_pc;
  `ifdef bpu
    method Action predicted_pc(PredictionToStage0 pred);
    method Training_data train_bpu;
    method Bit#(`vaddr) ras_push;
  `endif
    interface Put#(FetchResponse#(32, `iesize)) inst_response;
    interface Get#(DMem_request#(`vaddr, ELEN, 1)) memory_request;
    interface Put#(DMem_core_response#(ELEN, 1)) memory_response;
    method Tuple2#(Bool, Bool) initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1), Bit#(`vaddr))) r);
    (*always_enabled*)
    method Action storebuffer_empty(Bool e);
    method Action store_is_cached(Bool c);
    (*always_enabled*)
    method Action cache_is_available(Bool avail);
    method Action clint_msip(Bit#(1) intrpt);
    method Action clint_mtip(Bit#(1) intrpt);
    method Action clint_mtime(Bit#(64) c_mtime);
	  method Action set_external_interrupt(Bit#(1) ex_i);
  `ifdef rtldump
    interface Get#(DumpType) dump;
  `endif
    method Bit#(XLEN) csr_mstatus;
    method Bit#(3) mv_cacheenable;
    method Bit#(2) curr_priv;
	`ifdef supervisor
		method Bit#(XLEN) csr_satp;
	`endif
  `ifdef pmp
    method Vector#(`PMPSIZE, Bit#(8)) pmp_cfg;
    method Vector#(`PMPSIZE, Bit#(`paddr )) pmp_addr;
  `endif

  `ifdef debug
    // interface to interact with debugger
    method ActionValue#(Bit#(XLEN)) debug_access_gprs(AbstractRegOp cmd);
    method ActionValue#(Bit#(XLEN)) debug_access_csrs(AbstractRegOp cmd);
    method Action debug_halt_request(Bit#(1) ip);
    method Action debug_resume_request(Bit#(1) ip);
    method Bit#(1) core_is_halted;
    method Bit#(1) core_debugenable;
    method Action debugger_available (Bit#(1) avail);
  `endif
  endinterface

  (*synthesize*)
  (*preempts="fwding_from_exe1, nofwding_from_exe1"*)
  `ifndef PIPE2
  (*preempts="fwding_from_mem1, nofwding_from_mem1"*)
  `endif
  module mkriscv(Ifc_riscv);
    let verbosity = `VERBOSITY ;

    Ifc_stage0 stage0 <- mkstage0();
    Ifc_stage1 stage1 <- mkstage1();
    Ifc_stage2 stage2 <- mkstage2();
    Ifc_stage3 stage3 <- mkstage3();
    Ifc_stage4 stage4 <- mkstage4();
    Ifc_stage5 stage5 <- mkstage5();

  `ifdef debug
    Wire#(Bool) wr_debugger_available <- mkWire();
  `endif

    Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);

    FIFOF#(PIPE1) pipe1 <- mkSizedFIFOF(2);

    FIFOF#(Stage3Meta) pipe2_meta <- mkLFIFOF();
    FIFOF#(Stage3OpMeta) pipe2_opmeta <- mkLFIFOF();
    FIFOF#(RFOperands) pipe2_op <- mkLFIFOF();

  `ifdef rtldump
    FIFOF#(Bit#(32)) pipe2inst <- mkLFIFOF();
  `endif

`ifdef PIPE2
//    FIFOF#(PIPE3) pipe3 <- mkSizedFIFOF(2);
    FIFOF#(Stage4Common) pipe3common <- mkSizedFIFOF(2);
    FIFOF#(Stage4Type)   pipe3type   <- mkSizedFIFOF(2);
  `ifdef rtldump
    FIFOF#(Tuple2#(Bit#(`vaddr), Bit#(32))) pipe3inst <- mkSizedFIFOF(2);
  `endif
    Ifc_PipeFIFOF#(PIPE4) pipe4 <- mkPipeFIFOF();
  `ifdef rtldump
    FIFOF#(Tuple2#(Bit#(`vaddr), Bit#(32))) pipe4inst <- mkSizedFIFOF(2);
  `endif
`else
    //FIFOF#(PIPE3) pipe3 <- mkLFIFOF();
    FIFOF#(Stage4Common) pipe3common <- mkLFIFOF();
    FIFOF#(Stage4Type)   pipe3type   <- mkLFIFOF();
  `ifdef rtldump
    FIFOF#(Tuple2#(Bit#(`vaddr), Bit#(32))) pipe3inst <- mkLFIFOF();
  `endif
    FIFOF#(PIPE4) pipe4 <- mkLFIFOF();
  `ifdef rtldump
    FIFOF#(Tuple2#(Bit#(`vaddr), Bit#(32))) pipe4inst <- mkLFIFOF();
  `endif
`endif

    mkConnection(stage1.tx_to_stage2, pipe1);
    mkConnection(pipe1, stage2.rx_from_stage1);

    mkConnection(stage2.tx_meta_to_stage3, pipe2_meta);
    mkConnection(pipe2_meta, stage3.rx_meta_from_stage2);
    
    mkConnection(stage2.tx_op_to_stage3, pipe2_op);
    mkConnection(pipe2_op, stage3.rx_op_from_stage2);
    
    mkConnection(stage2.tx_opmeta_to_stage3, pipe2_opmeta);
    mkConnection(pipe2_opmeta, stage3.rx_opmeta_from_stage2);
  `ifdef rtldump
    mkConnection(stage2.tx_inst, pipe2inst);
    mkConnection(pipe2inst, stage3.rx_inst);
  `endif

    mkConnection(stage3.tx_common_to_stage4, pipe3common);
    mkConnection(pipe3common, stage4.rx_common_from_stage3);
    mkConnection(stage3.tx_type_to_stage4, pipe3type);
    mkConnection(pipe3type, stage4.rx_type_from_stage3);

  `ifdef rtldump
    mkConnection(stage3.tx_inst, pipe3inst);
    mkConnection(pipe3inst, stage4.rx_inst);
  `endif

  `ifdef PIPE2  
    mkConnection(stage4.tx_min, pipe4.fifo);
    mkConnection(pipe4.fifo, stage5.rx_in);
  `else
    mkConnection(stage4.tx_min, pipe4);
    mkConnection(pipe4, stage5.rx_in);
  `endif

  `ifdef rtldump
    mkConnection(stage4.tx_inst, pipe4inst);
    mkConnection(pipe4inst, stage5.rx_inst);
  `endif
    let {flush_from_exe, flushpc_from_exe}=stage3.flush_from_exe;
    let {flush_from_wb, flushpc_from_wb, fenceI `ifdef supervisor, sfence `endif }=stage5.flush;

    rule send_next_pc;
      stage3.next_pc(pipe1.first.program_counter);
    endrule
   //stage 3 reading value of csr arith_excep register//
   `ifdef ARITH_EXCEP
    rule arith_exception_en;
    stage3.rd_arith_excep_en(stage5.arith_excep);
    endrule
   `endif


    rule update_wEpoch(flush_from_wb);
      rg_wEpoch<=~rg_wEpoch;
    endrule

    rule commit_instruction;
      stage2.commit_rd(stage5.commit_rd);
      if(stage5.commit_rd matches tagged Valid .c)
        stage3.latest_commit(c);
    endrule

    rule flush_stage0(flush_from_exe||flush_from_wb);
        stage0.flush(Stage0Flush{ pc : flush_from_wb ? flushpc_from_wb : flushpc_from_exe
                                `ifdef ifence
                                  ,fence : flush_from_wb ? fenceI : False
                                `endif
                                `ifdef supervisor 
                                  , sfence : flush_from_wb ? sfence : False
                                `endif });
    endrule
    rule connect_csrs;
      stage2.csrs(stage5.csrs_to_decode);
      stage1.csr_misa_c(stage5.csr_misa_c);
      stage3.csr_misa_c(stage5.csr_misa_c);
    endrule
    rule clear_stall_in_decode_stage(flush_from_exe || flush_from_wb);
      stage2.clear_stall(True);
    endrule
    rule upd_stage2eEpoch(flush_from_exe);
      stage2.update_eEpoch();
      stage1.update_eEpoch();
      stage0.update_eEpoch();
    endrule
    rule upd_stage2wEpoch(flush_from_wb);
      stage0.update_wEpoch();
      stage1.update_wEpoch();
      stage2.update_wEpoch();
      stage3.update_wEpoch();
      stage4.update_wEpoch();
    endrule

    rule fwding_from_exe1;
      let s4common = pipe3common.first;
      let s4type   = pipe3type.first;

      Bit#(5) rd = s4common.rd;
    `ifdef spfpu
      RFType rdtype = s4common.rdtype;
    `endif
      
      Bool available = False;
      if (s4type matches tagged Regular .*)
        available = True;

      Bit#(ELEN) rdval = s4type.Regular.rdvalue;
      Bool valid = s4common.epochs == rg_wEpoch ;
      if ( valid &&& s4type matches tagged Trap .*)
        valid=False;

    `ifdef spfpu
      stage3.fwd_from_pipe3(tuple5(valid, available, rd, rdval, rdtype));
    `else
      stage3.fwd_from_pipe3(tuple4(valid, available, rd, rdval));
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
      let {committype, epoch}=data;
      Bit#(5) rd = 0;
      RFType rdtype = FRF;
      Bit#(ELEN) rdval = 0;
      Bool available = False;
      if(committype matches tagged REG .r)begin
        available = True;
        rd = r.rd;
        rdval = r.commitvalue;
      `ifdef spfpu
        rdtype = r.rdtype;
      `endif
      end
    `ifdef atomic
      else if (committype matches tagged STORE .s)begin
        available = True;
        rd = s.rd;
        rdval = s.commitvalue;
        rdtype = IRF;
      end
    `endif
    `ifdef spfpu
      stage3.fwd_from_pipe4_first(tuple5(present && epoch == rg_wEpoch, available, rd, rdval, rdtype));
    `else
      stage3.fwd_from_pipe4_first(tuple4(present && epoch == rg_wEpoch, available, rd, rdval));
    `endif
    if(present && epoch == rg_wEpoch)
    `ifdef spfpu
      stage2.fwd_from_wb(tuple3(rd, rdval, rdtype));
    `else
      stage2.fwd_from_wb(tuple2(rd, rdval));
    `endif
    endrule
    rule fwding_from_mem2;
      let {present, data} = pipe4.second_data;
      let {committype, epoch}=data;
      Bit#(5) rd = 0;
      RFType rdtype = FRF;
      Bit#(ELEN) rdval = 0;
      Bool available = False;
      if(committype matches tagged REG .r)begin
        available = True;
        rd = r.rd;
        rdval = r.commitvalue;
      `ifdef spfpu
        rdtype = r.rdtype;
      `endif
      end
    `ifdef atomic
      else if (committype matches tagged STORE .s)begin
        available = True;
        rd = s.rd;
        rdval = s.commitvalue;
        rdtype = IRF;
      end
    `endif
    `ifdef spfpu
      stage3.fwd_from_pipe4_second(tuple5(present && epoch == rg_wEpoch, available, rd, rdval, rdtype));
    `else
      stage3.fwd_from_pipe4_second(tuple4(present && epoch == rg_wEpoch, available, rd, rdval));
    `endif
    endrule
  `else
    rule fwding_from_mem1;
      let data = pipe4.first;
      let {committype, epoch}=data;
      Bit#(5) rd = 0;
      RFType rdtype = FRF;
      Bit#(ELEN) rdval = 0;
      Bool available = False;
      if(committype matches tagged REG .r)begin
        available = True;
        rd = r.rd;
        rdval = r.commitvalue;
        rdtype = r.rdtype;
      end
    `ifdef atomic
      else if (committype matches tagged STORE .s)begin
        available = True;
        rd = s.rd;
        rdval = s.commitvalue;
        rdtype = IRF;
      end
    `endif
    `ifdef spfpu
      stage3.fwd_from_pipe4_first(tuple5(epoch == rg_wEpoch, available, rd, rdval, rdtype));
    `else
      stage3.fwd_from_pipe4_first(tuple4(epoch == rg_wEpoch, available, rd, rdval));
    `endif
      if(epoch == rg_wEpoch)begin
      `ifdef spfpu
        stage2.fwd_from_wb(tuple3(rd, rdval, rdtype));
      `else
        stage2.fwd_from_wb(tuple2(rd, rdval));
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

  `ifdef debug
    rule connect_debug_info;
      stage2.debug_status(DebugStatus {debugger_available : wr_debugger_available ,
                                       core_is_halted     : unpack(stage5.core_is_halted),
                                       step_set           : unpack(stage5.step_is_set),
                                       step_ie            : unpack(stage5.step_ie),
                                       core_debugenable   : unpack(stage5.core_debugenable)} );
    endrule
  `endif
    ///////////////////////////////////////////

    interface inst_request = stage0.inst_request;
    interface next_pc = stage1.next_pc;
  `ifdef bpu
    method predicted_pc = stage0.predicted_pc;
    method train_bpu = stage3.train_bpu;
    method ras_push = stage3.ras_push;
  `endif
    interface inst_response = stage1.inst_response;
    interface memory_request = stage3.memory_request;
    method Action clint_msip(Bit#(1) intrpt) = stage5.clint_msip(intrpt);
    method Action clint_mtip(Bit#(1) intrpt) = stage5.clint_mtip(intrpt);
    method Action clint_mtime(Bit#(64) c_mtime) = stage5.clint_mtime(c_mtime);
    `ifdef rtldump
      interface dump = stage5.dump;
    `endif
    interface memory_response = stage4.memory_response;
    method Action storebuffer_empty(Bool e);
      stage3.storebuffer_empty(e);
    endmethod
    method initiate_store = stage5.initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1), Bit#(`vaddr))) r);
      stage5.write_resp(r);
    endmethod
    method Action store_is_cached(Bool c);
      stage5.store_is_cached(c);
    endmethod
    method Action cache_is_available(Bool avail);
      stage3.cache_is_available(avail);
    endmethod
	  method Action set_external_interrupt(Bit#(1) ex_i) = stage5.set_external_interrupt(ex_i);
    method csr_mstatus = stage5.csr_mstatus;
    method mv_cacheenable = stage5.mv_cacheenable;
    method curr_priv = stage5.curr_priv;
		`ifdef supervisor
			method csr_satp = stage5.csr_satp;
		`endif
  `ifdef pmp
    method pmp_cfg = stage5.pmp_cfg;
    method pmp_addr = stage5.pmp_addr;
  `endif
  `ifdef debug
    method debug_access_gprs = stage2.debug_access_gprs;
    method debug_access_csrs = stage5.debug_access_csrs;
    method debug_halt_request = stage5.debug_halt_request;
    method debug_resume_request = stage5.debug_resume_request;
    method core_is_halted = stage5.core_is_halted;
    method core_debugenable = stage5.core_debugenable;
    method Action debugger_available (Bit#(1) avail);
      wr_debugger_available <= unpack(avail);
    endmethod
  `endif
  endmodule

endpackage


