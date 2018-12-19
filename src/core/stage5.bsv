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
    interface RXe#(PIPE3) rx_in;
    `ifdef simulate
      interface RXe#(Tuple2#(Bit#(VADDR),Bit#(32))) rx_inst;
    `endif
    interface Put#(Maybe#(MemoryReadResp#(1))) memory_read_response;
    method Maybe#(CommitData) commit_rd;
    interface Get#(Tuple2#(Bit#(ELEN), Bit#(3))) fwd_from_mem;
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

    RX#(PIPE3) rx<-mkRX;
    `ifdef simulate
      RX#(Tuple2#(Bit#(VADDR),Bit#(32))) rxinst <-mkRX;
    `endif
    Ifc_csr csr <- mkcsr();
    Wire#(Bool) wr_csr_updated <- mkDWire(False);

    // wire that captures the response coming from the external memory or cache.
    Wire#(Maybe#(MemoryReadResp#(1))) wr_memory_response <- mkDWire(tagged Invalid);

    // wire that carriues the information for operand forwarding
    Wire#(Maybe#(Tuple2#(Bit#(ELEN), Bit#(3)))) wr_operand_fwding <- mkDWire(tagged Invalid);

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
      let {committype, field1, field2, field3, field4}=rx.u.first;
    `ifdef rtldump
      let {simpc,inst}=rxinst.u.first;
    `endif

      Bit#(VADDR) badaddr = field1;
      Bit#(5) fflags=truncate(field1);
      Bit#(3) func3= field1[2:0];
      Bit#(12) csraddr = field1[14:3];
      Bit#(2) lpc = field1[16:15];

      Bit#(ELEN) storedata=field2;
      Bit#(ELEN) commitvalue = field2;
      Bit#(XLEN) rs1 = truncate(field2);
      
      Bit#(VADDR) pc = field3;
      
      Bit#(1) epoch = field4[0];
      Bit#(7) trapcause = field4[7:1];
      Bit#(3) rdindex = field4[3:1];
      Bit#(5) rd = field4[8:4];
      Op3type rdtype = unpack(field4[9]);
      Access_type memaccess = unpack(field4[12:10]);
      

      Bit#(VADDR) jump_address=?;
      Bool fl = False;
      `ifdef simulate
        `ifdef rtldump
          $display($time,"\tWBMEM: PC: %h: inst: %h",simpc,inst);
        `endif
      `endif
      if(rg_epoch==epoch)begin
        if(committype==TRAP)begin
          let newpc <- csr.take_trap(trapcause, pc, badaddr);
          fl=True;
          jump_address=newpc;
          rx.u.deq;
          `ifdef rtldump
            rxinst.u.deq;
          `endif
          if(verbosity>0)
            $display($time, "\tWBMEM: Received TRAP: ", trapcause);
        end
        else if(committype == MEMORY) begin
          if (wr_memory_response matches tagged Valid .resp)begin
            if(verbosity>1)
              $display($time, "\tWBMEM: Got response from the Memory: ",fshow(resp));
            let {data, err_fault, epochs}=resp;
            if(err_fault==0 )begin // no bus error
//            `ifdef dpfpu TODO
//              if(nanboxing==1)
//                data[63:32]='1;
//            `endif
              wr_operand_fwding <= tagged Valid tuple2(data, rdindex);
              `ifdef spfpu
                wr_commit <= tagged Valid (tuple4(rd, zeroExtend(data), rdindex, rdtype)); //  TODO data from the previous stage should be Max(FLEN,XLEN) bits wide
              `else
                wr_commit <= tagged Valid (tuple3(rd, data, rdindex));
              `endif
              `ifdef rtldump
                if(rd==0 `ifdef spfpu && rdtype==IRF `endif )
                  data=0;
                `ifdef spfpu
                  dump_ff.enq(tuple6(prv, signExtend(pc), inst, rd, data, rdtype));
                `else
                  dump_ff.enq(tuple5(prv, signExtend(pc), inst, rd, data));
                `endif
              `endif
            end
            else begin
              if(verbosity>1)
                $display($time, "\tWBMEM: Received Exception from Memory: ", fshow(resp));
              Bit#(7) cause=0;
              `ifdef supervisor
                if(err_fault[0]==1)
                  if(memaccess==Load)
                    cause = `Load_pagefault;
                  else
                    cause = `Store_pagefault;
                else if(err_fault[1]==1)
              `endif
                if(memaccess== Load)
                  cause = `Load_access_fault;
                else
                  cause = `Store_access_fault;
              jump_address<- csr.take_trap(cause, pc, badaddr);
              fl= True;
            end
          `ifdef rtldump
            rxinst.u.deq;
          `endif
            rx.u.deq;
          end
          else if(verbosity>1)
            $display($time, "\tWBMEM: Waiting for response from the Memory");
        end
        else if(committype == SYSTEM_INSTR)begin
          let {drain, newpc, dest}<-csr.system_instruction(csraddr, rs1, func3, lpc);
          jump_address=newpc;
          fl=drain;
          `ifdef spfpu
            wr_commit <= tagged Valid (tuple4(rd, zeroExtend(dest), rdindex, rdtype));//  TODO data from the previous stage should be Max(FLEN,XLEN) bits wide
            wr_operand_fwding <= tagged Valid tuple2(zeroExtend(dest),  rdindex);
          `else
            wr_commit <= tagged Valid (tuple3(rd, dest, rdindex));
            wr_operand_fwding <= tagged Valid tuple2(zeroExtend(dest),  rdindex);
          `endif
          `ifdef rtldump 
            if(rd==0)
              dest=0;
            `ifdef spfpu
              dump_ff.enq(tuple6(prv, signExtend(simpc), inst, rd, zeroExtend(dest), rdtype)); // TODO
            `else
              dump_ff.enq(tuple5(prv, signExtend(simpc), inst, rd, dest));
            `endif
          `endif
        `ifdef rtldump
          rxinst.u.deq;
        `endif
          rx.u.deq;
        end
        else begin
          // in case of regular instruction simply update RF and forward the data.
          `ifdef spfpu
            wr_commit <= tagged Valid (tuple4(rd, commitvalue, rdindex, rdtype));//  TODO data from the previous stage should be Max(FLEN,XLEN) bits wide
            csr.update_fflags(fflags); 
          `else
            wr_commit <= tagged Valid (tuple3(rd, commitvalue, rdindex));
          `endif
          rx.u.deq;
        `ifdef rtldump
          rxinst.u.deq;
        `endif
          `ifdef rtldump
            if(rd==0 `ifdef spfpu && rdtype==IRF `endif )
              field2=0;
            `ifdef spfpu
              dump_ff.enq(tuple6(prv, signExtend(simpc), inst, rd, field2, rdtype));
            `else
              dump_ff.enq(tuple5(prv, signExtend(simpc), inst, rd, field2));
            `endif
          `endif
        end
        
        // if it is a branch/JAL_R instruction generate a flush signal to the pipe. 
        wr_flush<=tuple2(fl, jump_address);
        if(fl)begin
          rg_epoch <= ~rg_epoch;
        end
        if(fl || committype==SYSTEM_INSTR)
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

    interface  memory_read_response= interface Put
      method Action put (Maybe#(MemoryReadResp#(1)) response);
        wr_memory_response <= response;
      endmethod
    endinterface;

    interface rx_in=rx.e;
    interface rx_inst=rxinst.e;

    method Maybe#(CommitData) commit_rd();
      return wr_commit;
    endmethod

    interface fwd_from_mem = interface Get
      method ActionValue#(Tuple2#(Bit#(ELEN), Bit#(3))) get 
                                                    if(wr_operand_fwding matches tagged Valid .data);
        return data;
      endmethod
    endinterface;

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
