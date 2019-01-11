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

  import FIFO::*;
  import FIFOF::*;
  import csr::*;
  import csrfile::*;
  import DReg::*;
  interface Ifc_stage5;
    interface RXe#(PIPE4) rx_in;
    `ifdef rtldump
      interface RXe#(Tuple2#(Bit#(VADDR),Bit#(32))) rx_inst;
    `endif
    method Maybe#(CommitData) commit_rd;
    method Tuple3#(Bool, Bit#(VADDR), Bool) flush;
    method CSRtoDecode csrs_to_decode;
	  method Action clint_msip(Bit#(1) intrpt);
		method Action clint_mtip(Bit#(1) intrpt);
		method Action clint_mtime(Bit#(64) c_mtime);
    method Bool interrupt;
    `ifdef rtldump
      interface Get#(DumpType) dump;
    `endif
    `ifdef RV64 method Bool inferred_xlen; `endif // False-32bit,  True-64bit 
		`ifdef supervisor
			method Bit#(XLEN) send_satp;
			method Chmod perm_to_TLB;
      method Bool send_sfence;
		`endif
    `ifdef spfpu
  		method Bit#(3) roundingmode;
    `endif
	  method Action set_external_interrupt(Bit#(1) ex_i);
    method Bit#(1) csr_misa_c;
    method Tuple2#(Bool,Bool) initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1),Bit#(VADDR))) r);
  `ifdef dcache
    method Action store_is_cached(Bool c);
  `endif
  `ifdef cache_control
    method Bit#(2) mv_cacheenable;
  `endif
  endinterface

  (*synthesize*)
  module mkstage5(Ifc_stage5);

    let verbosity = `VERBOSITY ;

    RX#(PIPE4) rx<-mkRX;
  `ifdef rtldump
    RX#(Tuple2#(Bit#(VADDR),Bit#(32))) rxinst <-mkRX;
  `endif
    Ifc_csr csr <- mkcsr();

    // wire that carries the commit data that needs to be written to the integer register file.
    Wire#(Maybe#(CommitData)) wr_commit <- mkDWire(tagged Invalid);

    // wire which signals the entire pipe to be flushed.
    Wire#(Tuple3#(Bool, Bit#(VADDR), Bool)) wr_flush <- mkDWire(tuple3(False, ?, False));

    // the local epoch register
    Reg#(Bit#(1)) rg_epoch <- mkReg(0);

  `ifdef rtldump
    FIFO#(DumpType) dump_ff <- mkLFIFO;
    let prv=tpl_1(csr.csrs_to_decode);
  `endif
    Reg#(Bool) rg_store_initiated <- mkReg(False);
    Wire#(Tuple2#(Bool,Bool)) wr_initiate_store <- mkDWire(tuple2(False,False));
    Wire#(Maybe#(Tuple2#(Bit#(1),Bit#(VADDR)))) wr_store_response <- mkDWire(tagged Invalid);
  `ifdef dcache
    Wire#(Bool) wr_store_is_cached <- mkDWire(False);
  `endif

    rule instruction_commit;
      let {commit, epoch}=rx.u.first;
    `ifdef rtldump
      let {simpc,inst}=rxinst.u.first;
    `endif
      Bool fenceI=False;
      Bit#(VADDR) jump_address=?;
      Bool fl = False;
      `ifdef rtldump
        if(verbosity>0)
          $display($time,"\tWBMEM: PC: %h: inst: %h commit: ",simpc,inst,fshow(commit));
      `endif
      if(rg_epoch==epoch)begin
        if(commit matches tagged TRAP .t)begin
          if(t.cause==`Rerun || t.cause==`IcacheFence )begin
            fl=True;
            jump_address=t.pc;
            fenceI=(t.cause==`IcacheFence );
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
          if(verbosity>0)
            $display($time, "\tWBMEM: Received TRAP: ", t.cause, " New PC: %h",jump_address);
        end
        else if (commit matches tagged STORE .s)begin
        `ifdef dcache
          wr_initiate_store <= tuple2(unpack(rg_epoch),True);
          if ( wr_store_is_cached)begin
            `ifdef spfpu
              wr_commit <= tagged Valid (tuple3(s.rd, s.commitvalue, IRF)); 
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
          else if(wr_store_response matches tagged Valid .resp) begin
            if(verbosity>1)
              $display($time,"\tSTAGE5: Store response Received: ",fshow(resp));
            let {err, badaddr} = resp;
            if(err==0)begin
            `ifdef spfpu
              wr_commit <= tagged Valid (tuple3(s.rd, s.commitvalue, IRF)); 
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
              Bit#(7) trapcause='1;
              trapcause=`Store_access_fault;
              let newpc <- csr.take_trap(trapcause, s.pc, badaddr);
              fl=True;
              jump_address=newpc;
              rx.u.deq;
            `ifdef rtldump
              rxinst.u.deq;
            `endif
            end
          end
          else begin
            if(verbosity>1)
              $display($time,"\tSTAGE5: Waiting for Store response");
          end
          
        `else
          if(!rg_store_initiated)begin // if store has not started yet.
            if(verbosity>0)
              $display($time,"\tSTAGE5: Initiating Store request");
            rg_store_initiated<=True;
            wr_initiate_store<=tuple2(True,False);
          end
          else if(wr_store_response matches tagged Valid .resp)begin
            if(verbosity>1)
              $display($time,"\tSTAGE5: Store response Received: ",fshow(resp));
            let {err, badaddr} = resp;
            if(err==0)begin
            `ifdef spfpu
              wr_commit <= tagged Valid (tuple3(s.rd, s.commitvalue, IRF)); 
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
              Bit#(7) trapcause='1;
              trapcause=`Store_access_fault;
              let newpc <- csr.take_trap(trapcause, s.pc, badaddr);
              fl=True;
              jump_address=newpc;
              rx.u.deq;
            `ifdef rtldump
              rxinst.u.deq;
            `endif
            end
            rg_store_initiated<=False;
          end
          else begin
            if(verbosity>1)
              $display($time,"\tSTAGE5: Waiting for Store response");
          end
        `endif
        end
        else if(commit matches tagged SYSTEM .sys)begin
          let {drain, newpc, dest}<-csr.system_instruction(sys.csraddr, sys.rs1, sys.func3, sys.lpc);
          jump_address=newpc;
          fl=drain;
        `ifdef spfpu
          wr_commit <= tagged Valid (tuple3(sys.rd, zeroExtend(dest), sys.rdtype));
        `else
          wr_commit <= tagged Valid (tuple2(sys.rd, dest));
        `endif
        `ifdef rtldump 
          if(sys.rd==0)
            dest=0;
          dump_ff.enq(tuple6(prv, signExtend(simpc), inst, sys.rd, zeroExtend(dest), sys.rdtype));
        `endif
        `ifdef rtldump
          rxinst.u.deq;
        `endif
          rx.u.deq;
        end
        else if(commit matches tagged REG .r)begin
          // in case of regular instruction simply update RF and forward the data.
          if(verbosity>0)
            $display($time,"\tWBMEM: Regular commit");
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
          dump_ff.enq(tuple6(prv, signExtend(simpc), inst, r.rd, data, r.rdtype));
        `endif
        end
        
        // if it is a branch/JAL_R instruction generate a flush signal to the pipe. 
        wr_flush<=tuple3(fl, jump_address, fenceI);
        if(fl)begin
          rg_epoch <= ~rg_epoch;
        end
      end
      else begin
        if(verbosity>1)
          $display($time, "\tWBMEM: Dropping instruction. Epoch: %b rg_epoch: %b",epoch,rg_epoch);
          if(commit matches tagged STORE .s)
            wr_initiate_store<=tuple2(False,True);
        // TODO if the instruction is a Store we need to deque that entry from the store buffer.
        rx.u.deq;
      `ifdef rtldump
        rxinst.u.deq;
      `endif
      end
    endrule

    rule increment_instruction_counter(wr_commit matches tagged Valid .x);
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
    `ifdef RV64 method Bool inferred_xlen = csr.inferred_xlen; `endif // False-32bit,  True-64bit 
    method  interrupt=csr.interrupt;
		`ifdef supervisor
			method send_satp=csr.send_satp;
			method perm_to_TLB=csr.perm_to_TLB;
      method send_sfence=csr.send_sfence;
		`endif
    `ifdef spfpu
  		method roundingmode=csr.roundingmode;
    `endif
	  method Action set_external_interrupt(Bit#(1) ex_i)=csr.set_external_interrupt(ex_i);
    method csr_misa_c=csr.csr_misa_c;
    method initiate_store=wr_initiate_store;
    method Action write_resp(Maybe#(Tuple2#(Bit#(1),Bit#(VADDR))) r);
      wr_store_response<=r;
    endmethod
  `ifdef dcache
    method Action store_is_cached(Bool c);
      wr_store_is_cached<=c;
    endmethod
  `endif
  `ifdef cache_control
    method mv_cacheenable = csr.mv_cacheenable;
  `endif
  endmodule
endpackage
