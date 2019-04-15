/* 
Copyright (c) 2013, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and/or other materials provided 
 with the distribution.  
* Neither the name of IIT Madras  nor the names of its contributors may be used to endorse or 
  promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Author: Neel Gala
Email id: neelgala@gmail.com
Details:

--------------------------------------------------------------------------------------------------
*/
package stage5;
  import TxRx::*;
  import GetPut::*;
  import common_types::*;
  `include "common_params.bsv"
  `include "Logger.bsv"

  import FIFO::*;
  import FIFOF::*;
  import csr::*;
  import csrfile::*;
  import DReg::*;
  import Vector::*;
`ifdef debug
  import debug_types::*;
`endif


  interface Ifc_stage5;
    interface RXe#(PIPE4) rx_in;
    `ifdef rtldump
      interface RXe#(Tuple2#(Bit#(`vaddr),Bit#(32))) rx_inst;
    `endif
    method Maybe#(CommitData) commit_rd;
  `ifdef supervisor
    method Tuple4#(Bool, Bit#(`vaddr), Bool, Bool) flush;
  `else
    method Tuple3#(Bool, Bit#(`vaddr), Bool) flush;
  `endif  
    method CSRtoDecode csrs_to_decode;
	  method Action clint_msip(Bit#(1) intrpt);
		method Action clint_mtip(Bit#(1) intrpt);
		method Action clint_mtime(Bit#(64) c_mtime);
    `ifdef rtldump
      interface Get#(DumpType) dump;
    `endif
		`ifdef supervisor
			method Bit#(XLEN) csr_satp;
		`endif
	  method Action set_external_interrupt(Bit#(1) ex_i);
    method Bit#(1) csr_misa_c;
    method Tuple2#(Bool,Bool) initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1),Bit#(`vaddr))) r);
  `ifdef dcache
    (*always_enabled*)
    method Action store_is_cached(Bool c);
  `endif
    method Bit#(3) mv_cacheenable;
    method Bit#(2) curr_priv;
    method Bit#(XLEN) csr_mstatus;
  `ifdef pmp
    method Vector#(`PMPSIZE, Bit#(8)) pmp_cfg;
    method Vector#(`PMPSIZE, Bit#(`paddr )) pmp_addr;
  `endif
  `ifdef debug
    method ActionValue#(Bit#(XLEN)) debug_access_csrs(AbstractRegOp cmd);
    method Action debug_halt_request(Bit#(1) ip);
    method Action debug_resume_request(Bit#(1) ip);
    method Bit#(1) core_is_halted;
    method Bit#(1) step_is_set;
    method Bit#(1) step_ie;
    method Bit#(1) core_debugenable;
  `endif
  endinterface

  (*synthesize*)
  (*conflict_free="instruction_commit,set_external_interrupt"*)
  (*conflict_free="instruction_commit,increment_instruction_counter"*)
  (*conflict_free="set_external_interrupt,instruction_commit"*)
`ifdef debug
  (*conflict_free="debug_access_csrs,instruction_commit"*)
`endif
  module mkstage5(Ifc_stage5);


    RX#(PIPE4) rx<-mkRX;
  `ifdef rtldump
    RX#(Tuple2#(Bit#(`vaddr),Bit#(32))) rxinst <-mkRX;
  `endif
    Ifc_csr csr <- mkcsr();

    // wire that carries the commit data that needs to be written to the integer register file.
    Wire#(Maybe#(CommitData)) wr_commit <- mkDWire(tagged Invalid);
    Wire#(Bool) wr_increment_minstret <- mkDWire(False);

    // wire which signals the entire pipe to be flushed.
  `ifdef supervisor
    Wire#(Tuple4#(Bool, Bit#(`vaddr), Bool, Bool)) wr_flush <- mkDWire(tuple4(False, ?, False, False));
  `else
    Wire#(Tuple3#(Bool, Bit#(`vaddr), Bool)) wr_flush <- mkDWire(tuple3(False, ?, False));
  `endif

    // the local epoch register
    Reg#(Bit#(1)) rg_epoch <- mkReg(0);

  `ifdef rtldump
    FIFO#(DumpType) dump_ff <- mkLFIFO;
    let prv=csr.csrs_to_decode.prv;
  `endif
    Reg#(Bool) rg_store_initiated <- mkReg(False);
    Wire#(Maybe#(Tuple2#(Bit#(1),Bit#(`vaddr)))) wr_store_response <- mkDWire(tagged Invalid);
  `ifdef dcache
    Wire#(Bool) wr_store_is_cached <- mkDWire(False);
    Wire#(Tuple2#(Bool,Bool)) wr_initiate_store <- mkDWire(tuple2(False,False));
  `else
    Wire#(Tuple2#(Bool,Bool)) wr_initiate_store <- mkDReg(tuple2(False,False));
  `endif

    rule instruction_commit;
      let {commit, epoch}=rx.u.first;
    `ifdef rtldump
      let {simpc,inst}=rxinst.u.first;
    `endif
      Bool fenceI=False;
    `ifdef supervisor
      Bool sFence=False;
    `endif
      Bit#(`vaddr) jump_address=?;
      Bool fl = False;
      `ifdef rtldump
        `logLevel( stage5, 0, $format("STAGE5: PC: %h: inst: %h commit: ",simpc,inst,fshow(commit)))
      `endif
      if(rg_epoch==epoch)begin
        if(commit matches tagged TRAP .t)begin
          if(t.cause==`Rerun || t.cause==`IcacheFence `ifdef supervisor || t.cause==`SFence `endif )begin
            `logLevel( stage5, 0, $format("STAGE5: Rerun initiated"))
            fl=True;
            jump_address=t.pc;
            fenceI=(t.cause==`IcacheFence );
            `ifdef supervisor
              sFence = (t.cause==`SFence);
            `endif
          end
          else begin
            let newpc <- csr.take_trap(t.cause, t.pc, t.badaddr);
            fl=True;
            jump_address=newpc;
          end
          rx.u.deq;
          `ifdef rtldump
            rxinst.u.deq;
          `endif
          `logLevel( stage5, 0, $format("STAGE5: Received TRAP:%d NewPC:%h fl:%b",t.cause,jump_address,fl))
        end
        else if (commit matches tagged STORE .s)begin
        `ifdef dcache
          if (!rg_store_initiated && wr_store_is_cached)begin
            wr_initiate_store <= tuple2(unpack(rg_epoch),True);
            wr_increment_minstret<=True;
            `ifdef spfpu
              `ifdef atomic
                wr_commit <= tagged Valid (tuple3(s.rd, s.commitvalue, IRF)); 
              `else
                wr_commit <= tagged Valid (tuple3(0, 0, IRF)); 
              `endif
            `else
              `ifdef atomic
                wr_commit <= tagged Valid (tuple2(s.rd, s.commitvalue));
              `else
                wr_commit <= tagged Valid (tuple2(0, 0));
              `endif
            `endif
            `ifdef rtldump
              `ifdef atomic
                Bit#(ELEN) data=s.commitvalue;
                if(s.rd==0)
                  data=0;
                dump_ff.enq(tuple6(prv, signExtend(s.pc), inst, s.rd, data, IRF));
              `else
                dump_ff.enq(tuple6(prv, signExtend(s.pc), inst, 0, 0, IRF));
              `endif
              rxinst.u.deq;
            `endif
              rx.u.deq;
          end
          else 
        `endif
          if(!rg_store_initiated)begin
            wr_initiate_store <= tuple2(unpack(rg_epoch),True);
            rg_store_initiated<=True;
            `logLevel( stage5, 0, $format("STAGE5: Initiating Store request"))
          end
          else if(wr_store_response matches tagged Valid .resp) begin
            rg_store_initiated<=False;
            `logLevel( stage5, 0, $format("STAGE5: Store response Received: ",fshow(resp)))
            let {err, badaddr} = resp;
            if(err==0)begin
              wr_increment_minstret<=True;
            `ifdef spfpu
              `ifdef atomic
                wr_commit <= tagged Valid (tuple3(s.rd, s.commitvalue, IRF)); 
              `else
                wr_commit <= tagged Valid (tuple3(0, 0, IRF)); 
              `endif
            `else
              `ifdef atomic
                wr_commit <= tagged Valid (tuple2(s.rd, s.commitvalue));
              `else
                wr_commit <= tagged Valid (tuple2(0, 0));
              `endif
            `endif
            `ifdef rtldump
              `ifdef atomic
                Bit#(ELEN) data=s.commitvalue;
                if(s.rd==0)
                  data=0;
                dump_ff.enq(tuple6(prv, signExtend(s.pc), inst, s.rd, data, IRF));
              `else
                dump_ff.enq(tuple6(prv, signExtend(s.pc), inst, 0, 0, IRF));
              `endif
              rxinst.u.deq;
            `endif
              rx.u.deq;
            end
            else begin
              let newpc <- csr.take_trap(`Store_access_fault, s.pc, badaddr);
              fl=True;
              jump_address=newpc;
              rx.u.deq;
            `ifdef rtldump
              rxinst.u.deq;
            `endif
            end
          end
          else begin
            `logLevel( stage5, 0, $format("STAGE5: Waiting for Store response"))
          end
        end
        else if(commit matches tagged SYSTEM .sys)begin
          let {drain, newpc, dest}<-csr.system_instruction(sys.csraddr, sys.rs1, sys.func3, sys.lpc);
          jump_address=newpc;
          fl=drain;
        `ifdef spfpu
          wr_commit <= tagged Valid (tuple3(sys.rd, zeroExtend(dest), IRF));
        `else
          wr_commit <= tagged Valid (tuple2(sys.rd, dest));
        `endif
        `ifdef rtldump 
          if(sys.rd==0)
            dest=0;
          dump_ff.enq(tuple6(prv, signExtend(simpc), inst, sys.rd, zeroExtend(dest), IRF));
        `endif
        `ifdef rtldump
          rxinst.u.deq;
        `endif
          rx.u.deq;
        end
        else if(commit matches tagged REG .r)begin
          // in case of regular instruction simply update RF and forward the data.
          `logLevel( stage5, 0, $format("WBMEM: Regular commit"))
          wr_increment_minstret<=True;
        `ifdef spfpu
          wr_commit <= tagged Valid (tuple3(r.rd, r.commitvalue, r.rdtype));
          csr.update_fflags(r.fflags); 
        `else
          wr_commit <= tagged Valid (tuple2(r.rd, r.commitvalue));
        `endif
          rx.u.deq;
        `ifdef rtldump
          rxinst.u.deq;
        `endif
        `ifdef rtldump
          let data=r.commitvalue;
          if(r.rd==0 `ifdef spfpu && r.rdtype==IRF `endif )
            data=0;
            dump_ff.enq(tuple6(prv, signExtend(simpc), inst, r.rd, data, `ifdef spfpu r.rdtype `else
            IRF `endif ));
        `endif
        end
        
        // if it is a branch/JAL_R instruction generate a flush signal to the pipe. 
      `ifdef supervisor
        wr_flush<=tuple4(fl, jump_address, fenceI, sFence);
      `else
        wr_flush<=tuple3(fl, jump_address, fenceI);
      `endif
        if(fl)begin
          rg_epoch <= ~rg_epoch;
        end
      end
      else begin
          `logLevel( stage5, 0, $format("WBMEM: Dropping instruction"))
          if(commit matches tagged STORE .s)
            wr_initiate_store<=tuple2(unpack(rg_epoch),True);
        // TODO if the instruction is a Store we need to deque that entry from the store buffer.
        rx.u.deq;
      `ifdef rtldump
        rxinst.u.deq;
      `endif
      end
    endrule

    rule increment_instruction_counter(wr_increment_minstret);
      csr.incr_minstret;
    endrule
    interface rx_in=rx.e;
  `ifdef rtldump
    interface rx_inst=rxinst.e;
  `endif
    method Maybe#(CommitData) commit_rd();
      return wr_commit;
    endmethod
    method flush=wr_flush;
    method csrs_to_decode = csr.csrs_to_decode;

	  method Action clint_msip(Bit#(1) intrpt);
      csr.clint_msip(intrpt);
    endmethod
		method Action clint_mtip(Bit#(1) intrpt);
      csr.clint_mtip(intrpt);
    endmethod
		method Action clint_mtime(Bit#(64) c_mtime);
      csr.clint_mtime(c_mtime);
    endmethod
    `ifdef rtldump
      interface dump = interface Get
        method ActionValue#(DumpType) get ;
          dump_ff.deq;
          return dump_ff.first;
        endmethod
      endinterface;
    `endif
		`ifdef supervisor
			method csr_satp=csr.csr_satp;
		`endif
	  method Action set_external_interrupt(Bit#(1) ex_i)=csr.set_external_interrupt(ex_i);
    method csr_misa_c=csr.csr_misa_c;
    method initiate_store=wr_initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1),Bit#(`vaddr))) r);
      wr_store_response<=r;
    endmethod
  `ifdef dcache
    method Action store_is_cached(Bool c);
      wr_store_is_cached<=c;
    endmethod
  `endif
    method mv_cacheenable = csr.mv_cacheenable;
    method curr_priv = csr.curr_priv;
    method csr_mstatus= csr.csr_mstatus;
  `ifdef pmp
    method pmp_cfg=csr.pmp_cfg;
    method pmp_addr=csr.pmp_addr;
  `endif
  `ifdef debug
    method debug_access_csrs = csr.debug_access_csrs; 
    method debug_halt_request = csr.debug_halt_request;
    method debug_resume_request = csr.debug_resume_request;
    method core_is_halted = csr.core_is_halted;
    method step_is_set = csr.step_is_set;
    method step_ie = csr.step_ie;
    method core_debugenable = csr.core_debugenable;
  `endif
  endmodule
endpackage
