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
1.  This module decodes the instructions fetched from the previous stage and also fetches the 
    operands from the registerfile.
2.  If a csr operation is being decoded, then the next instruction is stalled untill the csr
    completes and commits the instruction.

TODO: Check for mispredictions:
1. The bpu will only train for conditional branches. So the npc will either be PC+4 or a PC+/-4KB.
We can compare both of these with npc. If neither match then the prediction is absolutely wrong. So
we need to flush.. but what would the new pc be? - PC+4 or the new jump address. The same can be
done for JAL/JALR being predicted by RAS.
The only issue here is this does not remove the npc checking in the execute stage. If the npc
matches PC+4,  but the execution stage will stil have to make the comparison and confirm if indeed
the branch is not taken or taken and thus npc is correct or wrong.

NOTE0: Handling flushes
  Flushes in this stage are handled by 2 epoch registers: eEpoch and wEpoch. This bits are compared
  to the epochs bits from the fetch unit (status under which they were fetched). If they do not
  match then the instruction is dropped. The reason for having 2 epoch registers is because both:
  the execute and the writeback stage can generate a flush of the pipe,  causing instructions to be
  dropped all over.

NOTE1: Handling Traps
  By handling trap and flushing fetch to jump to the trap routine in this stage saves cycle. One
  might also consider that PC no longer needs to be sent to the subsequent stages. However,  note that
  the load/store exceptions are only captured in the next staged. Including pagefaults. So you will
  any how need to handle a trap in that stage as well.

  Additionally, if you have 2 stages handling traps,  you will have prioritize on over the other.
  Suppose you take a trap from the decode stage but there exists an instruction in the subsequent
  pipeline buffers which will generate a memory exception. While taking the trap in the decode stage
  you have corrupted the csrs and this will screw up all further exception handling.

NOTE2: Handling WFI. 
  WFI is also handled in this stage. If a wfi instruction is encountered is treated as a NOP and
  simply dropped. Simultaenously a register is set. When the instruction requests to be decoded and
  the register is set,  the instruction will only progress if an interrupt has arrived. This will
  ensure that the interrupt is taken on the next instructions as required by the spec. When this
  interrupt is taken (under stall mode) then the register is reset and normal functionality resumes.

  If there are n-continous "wfi" instructions,  then n-interrupts will have to be serviced to resume
  the core.

NOTE3: When an illegal exception is taken you have to store the instruction in the mtval register.
This enables trap handlers to quickly emulate the instruction in software. To do this, in case of an
illega exception we send the instruction as rs1 from stage2 and then pass it as the rd value after
exection stage.

--------------------------------------------------------------------------------------------------
*/
package stage2;
	/*=== package imports === */
	import FIFOF::*;
	import TxRx:: *;
	import DReg::*;
	import Connectable::*;
	import GetPut::*;
	/* ====================== */

	/* === project imports === */
	import registerfile::*;
	import decoder::*;
	import common_types::*;
	`include "common_params.bsv"
	/* ====================== */

	interface Ifc_stage2;
		method Action commit_rd (Maybe#(CommitData) commit);
		/* ===== pipe connections ========= */
		interface RXe#(PIPE1) rx_in;
    (*always_ready*)
		interface TXe#(PIPE2) tx_out;
		/*================================= */
		`ifdef Debug
      method ActionValue#(Bit#(XLEN)) read_write_gprs(Bit#(5) r, Bit#(XLEN) data 
          `ifdef spfpu ,Op3type rfselect `endif );
		`endif
    method Action csrs (CSRtoDecode csr);
    method Action csr_updated (Bool upd);
		method Action update_eEpoch;
		method Action update_wEpoch;
    method Tuple2#(Bool, Bit#(TLog#(PRFDEPTH))) fetch_rd_index;
    method Action reset_renaming;
	endinterface:Ifc_stage2

  (*synthesize*)
  (*conflict_free="commit_rd, decode_and_fetch"*)
  (*preempts="reset_renaming, decode_and_fetch"*)
  (*preempts="reset_renaming, commit_rd"*)
  module mkstage2(Ifc_stage2);

    Ifc_registerfile registerfile <-mkregisterfile();
		RX#(PIPE1) rx <-mkRX;
		TX#(PIPE2) tx <-mkTX;
      
    let verbosity = `VERBOSITY ;
    Wire#(CSRtoDecode) wr_csrs <-mkWire();
		Reg#(Bit#(1)) eEpoch <-mkReg(0);
		Reg#(Bit#(1)) wEpoch <-mkReg(0);
    Reg#(Bool) rg_stall <- mkReg(False);
    Reg#(Bool) rg_wfi <- mkReg(False);
    Wire#(Bool) wr_op_complete <-mkDWire(False);
    Reg#(Bit#(TLog#(PRFDEPTH))) rd_index <- mkReg(0);
    Wire#(Bit#(TLog#(PRFDEPTH))) wr_rd_index <- mkDWire(0);

    rule decode_and_fetch(!rg_stall);
      let {prv, mip, csr_mie, mideleg, misa, counteren, mie, fs}=wr_csrs;
	    let pc=rx.u.first.program_counter;
	    let inst=rx.u.first.instruction;
	    let pred=rx.u.first.prediction;
	    let epochs=rx.u.first.epochs;
      let err=rx.u.first.accesserr_pagefault;
      `ifdef spfpu
        let {opdecode, meta, trap, resume_wfi, rdtype} <- decoder_func(inst, truncateLSB(err), wr_csrs);
      `else
        let {opdecode, meta, trap, resume_wfi} <- decoder_func(inst, err, wr_csrs);
      `endif
      `ifdef spfpu
        let {rs1addr, rs2addr, rd, rs3addr, rs1type, rs2type, rs3type}=opdecode;
      `else
        let {rs1addr, rs2addr, rd, rs1type, rs2type} = opdecode;
      `endif

      `ifdef RV64
        let {fn, instrType, memaccess, imm, funct3, wfi, word32}=meta;
      `else
        let {fn, instrType, memaccess, imm, funct3, wfi}=meta;
        Bool word32=False; // TODO word32 from Metadata type should be removed
      `endif
      
      if(!wfi && {eEpoch, wEpoch}==epochs)begin
        wr_op_complete<= True;
        if(rd_index==4)
          rd_index<= 0;
        else
          rd_index<= rd_index+ 1;
        wr_rd_index<= rd_index;

        let {rs1, rs2 `ifdef spfpu , rs3 `endif , rs1index, rs2index `ifdef spfpu , rs3index `endif }
             <-registerfile.opaddress(rs1addr, rs2addr, rd, rd_index
              `ifdef spfpu , rs1type, rs2type, rs3addr, rs3type, rdtype `endif );

        Bit#(XLEN) op1=(rs1type==PC)?signExtend(pc):rs1;
        Bit#(XLEN) op2=(rs2type==Constant2 && misa[2]==1)?'d2:(rs2type==Constant4)?'d4:
                                                            (rs2type==Immediate)?signExtend(imm):rs2;
        Bit#(VADDR) op3=(instrType==MEMORY || instrType==JALR)?truncate(rs1):zeroExtend(pc); 
        Bool traptaken=True;
        if(trap matches tagged None)begin
          traptaken=False;
        end
        if(traptaken)begin
          op1=zeroExtend(inst); 
          op3=zeroExtend(pc);
        end
        `ifdef spfpu
          Bit#(XLEN) op4=(rs3type==FRF)?rs3:signExtend(imm);
        `else
          Bit#(VADDR) op4=signExtend(imm);
        `endif

        OpData t2 =tuple4(op1, op2, op3, op4);
        `ifdef spfpu
          OpTypes t1 =tuple6(rs1index, rs2index, rs3index, rd_index, rdtype, instrType);
        `else
          OpTypes t1 =tuple4(rs1index, rs2index, rd_index, instrType);
        `endif

        `ifdef bpu
          MetaData t3 = tuple8(rd, word32, memaccess, fn, funct3, pred, epochs, trap);
        `else
          MetaData t3 = tuple7(rd, word32, memaccess, fn, funct3, epochs, trap);
        `endif

        if(verbosity>0)begin
          $display($time, "\tDECODE: PC: %h Inst: %h Epoch: %b CurrEpochs: %b WFI: %b ERR: %b", pc, inst, 
              epochs, {eEpoch, wEpoch}, wfi, err);
          $display($time, "\tDECODE: rs1addr: %d rs2addr: %d", rs1addr, rs2addr 
              `ifdef spfpu ," rs3addr: %d",rs3addr `endif );
          $display($time, "\tDECODE: rs1type: ", fshow(rs1type), " rs2type ", fshow(rs2type)
            `ifdef spfpu ," rs3type: ",fshow(rs3type) `endif );
          $display($time, "\tDECODE: rs1index: %d rs2index: %d rdindex: %d instrtype: ", rs1index,
          rs2index, rd_index, fshow(instrType) `ifdef spfpu ,", rs3index:%d", rs3index `endif );
          $display($time, "\tDECODE: op1: %h op2: %h op3: %h op4: %h", op1, op2, op3, op4);
          $display($time, "\tDECODE: rd: %d, rdtype: ",rd, `ifdef spfpu fshow(rdtype), `endif 
              " word32: %b, memaccess:",  word32, fshow(memaccess));
          $display($time, "\tDECODE: fn: %b funt3: %b trap:", fn, funct3, fshow(trap) );
        end

	      `ifdef simulate
	        tx.u.enq(tuple4(t1, t2, t3, inst));
	      `else
	        tx.u.enq(tuple3(t1, t2, t3));
        `endif
      end
      else
        if(verbosity>=1)
          $display($time,"\tDECODE: dropping instructions due to epoch mis-match");
      if((rg_wfi && resume_wfi) || (!rg_wfi))
        rx.u.deq; 

      if({eEpoch, wEpoch}==epochs)begin
        if(instrType==SYSTEM_INSTR)
          rg_stall<= True;
       // rg_wfi<=wfi;
      end  
    endrule

		method tx_out=tx.e;
		method rx_in=rx.e;
    method Action csrs (CSRtoDecode csr);
      wr_csrs<= csr;
    endmethod
		method Action commit_rd (Maybe#(CommitData) commit);
      registerfile.commit_rd(commit);
    endmethod

    // This method will get activated when there is a flush from the execute stage
		method Action update_eEpoch;
		  if(verbosity>1) 
        $display($time,"\tSTAGE2: updating eEpoch"); 
			eEpoch<=~eEpoch;
		endmethod
    // This method gets activated when there is a flush from the write-back stage.
		method Action update_wEpoch;
			if(verbosity>1)
        $display($time,"\tSTAGE2: updating wEpoch"); 
			wEpoch<=~wEpoch;
		endmethod
    method Action csr_updated (Bool upd) if(rg_stall);
      if(upd)
        rg_stall<= False;
    endmethod
    method fetch_rd_index = tuple2(wr_op_complete, wr_rd_index);
    method reset_renaming=registerfile.reset_renaming;
  endmodule
endpackage
