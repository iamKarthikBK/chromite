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

  interface Ifc_stage5;
    interface RXe#(PIPE4) rx_in;
    `ifdef simulate
      interface RXe#(Tuple2#(Bit#(VADDR),Bit#(32))) rx_inst;
    `endif
    method Maybe#(CommitData) commit_rd;
    method Tuple2#(Bool, Bit#(VADDR)) flush;
    method CSRtoDecode csrs_to_decode;
	  method Action clint_msip(Bit#(1) intrpt);
		method Action clint_mtip(Bit#(1) intrpt);
		method Action clint_mtime(Bit#(64) c_mtime);
    method Bool csr_updated;
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
  endinterface

  (*synthesize*)
  module mkstage5(Ifc_stage5);

    let verbosity = `VERBOSITY ;

    RX#(PIPE4) rx<-mkRX;
    `ifdef simulate
      RX#(Tuple2#(Bit#(VADDR),Bit#(32))) rxinst <-mkRX;
    `endif
    Ifc_csr csr <- mkcsr();
    Wire#(Bool) wr_csr_updated <- mkDWire(False);

    // wire that carries the commit data that needs to be written to the integer register file.
    Wire#(Maybe#(CommitData)) wr_commit <- mkDWire(tagged Invalid);

    // wire which signals the entire pipe to be flushed.
    Wire#(Tuple2#(Bool, Bit#(VADDR))) wr_flush <- mkDWire(tuple2(False, ?));

    // the local epoch register
    Reg#(Bit#(1)) rg_epoch <- mkReg(0);

    `ifdef rtldump
      FIFO#(DumpType) dump_ff <- mkLFIFO;
      let prv=tpl_1(csr.csrs_to_decode);
    `endif


    rule instruction_commit;
      let {commit, epoch}=rx.u.first;
    `ifdef rtldump
      let {simpc,inst}=rxinst.u.first;
    `endif
      Bit#(VADDR) jump_address=?;
      Bool fl = False;
      `ifdef simulate
        `ifdef rtldump
          $display($time,"\tWBMEM: PC: %h: inst: %h",simpc,inst);
        `endif
      `endif
      if(rg_epoch==epoch)begin
        if(commit matches tagged TRAP .t)begin
          let newpc <- csr.take_trap(t.cause, t.pc, t.badaddr);
          fl=True;
          jump_address=newpc;
          rx.u.deq;
          `ifdef rtldump
            rxinst.u.deq;
          `endif
          if(verbosity>0)
            $display($time, "\tWBMEM: Received TRAP: ", t.cause);
        end
//        else if(commit matches tagged STORE .s) begin
//          if (wr_memory_response matches tagged Valid .resp)begin
//            if(verbosity>1)
//              $display($time, "\tWBMEM: Got response from the Memory: ",fshow(resp));
//            let {data, err_fault, epochs}=resp;
//            if(err_fault==0 )begin // no bus error
////            `ifdef dpfpu TODO
////              if(nanboxing==1)
////                data[63:32]='1;
////            `endif
//              `ifdef spfpu
//                wr_commit <= tagged Valid (tuple4(rd, zeroExtend(data), rdindex, rdtype)); //  TODO data from the previous stage should be Max(FLEN,XLEN) bits wide
//              `else
//                wr_commit <= tagged Valid (tuple3(rd, data, rdindex));
//              `endif
//              `ifdef rtldump
//              `ifdef spfpu
//                dump_ff.enq(tuple6(prv, signExtend(pc), inst, rd, 0, rdtype));
//              `else
//                dump_ff.enq(tuple5(prv, signExtend(pc), inst, rd, 0));
//              `endif
//              `endif
//            end
//            else begin
//              if(verbosity>1)
//                $display($time, "\tWBMEM: Received Exception from Memory: ", fshow(resp));
//              Bit#(7) cause=0;
//              `ifdef supervisor
//                if(err_fault[0]==1)
//                  if(memaccess==Load)
//                    cause = `Load_pagefault;
//                  else
//                    cause = `Store_pagefault;
//                else if(err_fault[1]==1)
//              `endif
//                if(memaccess== Load)
//                  cause = `Load_access_fault;
//                else
//                  cause = `Store_access_fault;
//              jump_address<- csr.take_trap(cause, pc, badaddr);
//              fl= True;
//            end
//          `ifdef rtldump
//            rxinst.u.deq;
//          `endif
//            rx.u.deq;
//          end
//          else if(verbosity>1)
//            $display($time, "\tWBMEM: Waiting for response from the Memory");
//        end
        else if(commit matches tagged SYSTEM .sys)begin
          let {drain, newpc, dest}<-csr.system_instruction(sys.csraddr, sys.rs1, sys.func3, sys.lpc);
          jump_address=newpc;
          fl=drain;
          `ifdef spfpu
            wr_commit <= tagged Valid (tuple4(sys.rd, zeroExtend(dest), sys.rdindex, sys.rdtype));//  TODO data from the previous stage should be Max(FLEN,XLEN) bits wide
          `else
            wr_commit <= tagged Valid (tuple3(sys.rd, sys.dest, sys.rdindex));
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
        else if(commit matches tagged REGULAR .r)begin
          // in case of regular instruction simply update RF and forward the data.
        `ifdef spfpu
          wr_commit <= tagged Valid (tuple4(r.rd, r.commitvalue, r.rdindex, r.rdtype));//  TODO data from the previous stage should be Max(FLEN,XLEN) bits wide
          csr.update_fflags(r.fflags); 
        `else
          wr_commit <= tagged Valid (tuple3(r.rd, r.commitvalue, r.rdindex));
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
        wr_flush<=tuple2(fl, jump_address);
        if(fl)begin
          rg_epoch <= ~rg_epoch;
        end
        if(fl)
          wr_csr_updated<= True;
        else if(commit matches tagged SYSTEM .x)
          wr_csr_updated<= True;

      end
      else begin
        if(verbosity>1)
          $display($time, "\tWBMEM: Dropping instruction. Epoch: %b rg_epoch: %b",epoch,rg_epoch);
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
    interface rx_inst=rxinst.e;

    method Maybe#(CommitData) commit_rd();
      return wr_commit;
    endmethod
    method flush=wr_flush;
    method csrs_to_decode = csr.csrs_to_decode;
    method Bool csr_updated = wr_csr_updated;

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
  endmodule
endpackage
