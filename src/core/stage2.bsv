/* 
Copyright (c) 2013, IIT Madras All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted
provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this list of conditions
  and the following disclaimer.  
* Redistributions in binary form must reproduce the above copyright notice, this list of 
  conditions and the following disclaimer in the documentation and / or other materials provided 
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

Author : Neel Gala
Email id : neelgala@gmail.com
Details:
1.  This module decodes the instructions fetched from the previous stage and also fetches the 
    operands from the registerfile.
2.  If a csr operation is being decoded, then the next instruction is stalled untill the csr
    completes and commits the instruction.

NOTE0 : Handling flushes
  Flushes in this stage are handled by 2 epoch registers : eEpoch and wEpoch. This bits are compared
  to the epochs bits from the fetch unit (status under which they were fetched). If they do not
  match then the instruction is dropped. The reason for having 2 epoch registers is because both:
  the execute and the writeback stage can generate a flush of the pipe,  causing instructions to be
  dropped all over.

NOTE1 : Handling Traps
  By handling trap and flushing fetch to jump to the trap routine in this stage saves cycle. One
  might also consider that PC no longer needs to be sent to the subsequent stages. However,  note that
  the load / store exceptions are only captured in the next staged. Including pagefaults. So you will
  any how need to handle a trap in that stage as well.

  Additionally, if you have 2 stages handling traps,  you will have prioritize on over the other.
  Suppose you take a trap from the decode stage but there exists an instruction in the subsequent
  pipeline buffers which will generate a memory exception. While taking the trap in the decode stage
  you have corrupted the csrs and this will screw up all further exception handling.

NOTE2 : Handling WFI. 
  WFI is also handled in this stage. If a wfi instruction is encountered is treated as a NOP and
  simply dropped. Simultaenously a register is set. When the instruction requests to be decoded and
  the register is set,  the instruction will only progress if an interrupt has arrived. This will
  ensure that the interrupt is taken on the next instructions as required by the spec. When this
  interrupt is taken (under stall mode) then the register is reset and normal functionality resumes.

  If there are n - continous "wfi" instructions,  then n - interrupts will have to be serviced to resume
  the core.

NOTE3 : When an illegal exception is taken you have to store the instruction in the mtval register.
This enables trap handlers to quickly emulate the instruction in software. To do this, in case of an
illega exception we send the instruction as rs1 from stage2 and then pass it as the rd value after
exection stage.

--------------------------------------------------------------------------------------------------
*/
package stage2;
  // -- package imports --//
	import FIFOF::*;
	import TxRx:: *;
	import DReg::*;
	import Connectable::*;
	import GetPut::*;

  // -- project imports --//
	import registerfile::*;       // for instantiating the registerfile
	import decoder::*;            // for the decode functions.
  import common_types::*;       // for pipe - line types
  `include "common_params.bsv"  // for core parameters
  `include "Logger.bsv"         // for logging display statements.
  import globals::*;


	interface Ifc_stage2;

    // recieve packet from stage1
		interface RXe#(PIPE1) rx_from_stage1;

    // send decoded info to stage3 
    interface TXe#(Stage3Meta)    tx_meta_to_stage3;
    interface TXe#(RFOperands)    tx_op_to_stage3;
    interface TXe#(Stage3OpMeta)  tx_opmeta_to_stage3;

  `ifdef rtldump
    // this interface is like a parallel for dumping the trace.
    interface TXe#(Bit#(32)) tx_inst;
  `endif
		
    // input from commit stage (stage5) to update the regfile on instruction retirement
    method Action commit_rd (Maybe#(CommitData) commit);

    // input from the csr file containing all the required csrs to capture exceptions.
    method Action csrs (CSRtoDecode csr);


    // this method indicates that a flush has been generated from the exe / wb stage and thus the
    // current stage can quit the stall that was initiated due to an exception generation
    method Action clear_stall (Bool upd);

    // method to update epochs on redirection from execute stage
		method Action update_eEpoch;
    
    // method to update epochs on redirection from write - back stage
		method Action update_wEpoch;

    // this is an input method used for operand forwarding from the commit - stage (stage5)
    method Action fwd_from_wb(CommitData commit);

  `ifdef ras
    // this is an output method which the current stage uses to train the RAS unit in the BTB when a
    // return instruction is detected.
    method RASTraining train_ras;
  `endif
	endinterface : Ifc_stage2

  (*synthesize*)
  module mkstage2(Ifc_stage2);

    String stage2=""; // defined for logger

    // --------------------- Start instantiations ------------------------//
    // instantiation of the registerfile module
    Ifc_registerfile registerfile <- mkregisterfile();

    // FIFO to interface with stage0 and receive fetched instruction
		RX#(PIPE1) rx <- mkRX;

    // FIFO interface to send the decoded information to the next stage.
    TX#(Stage3Meta)   tx_meta   <- mkTX;
    TX#(Stage3OpMeta) tx_opmeta <- mkTX;
    TX#(RFOperands)   tx_op     <- mkTX;

  `ifdef rtldump
    // fifo interface used to transmit the trace of the instruction for rtl.dump generation
    TX#(Bit#(32)) txinst <- mkTX;
  `endif

  `ifdef ras
    // wire to train the RAS
    Wire#(RASTraining) wr_train_ras <- mkWire();
  `endif
   
    Wire#(CSRtoDecode) wr_csrs <- mkWire();
    
    // The following registers are use to the maintain epochs from various pipeline stages:
    // writeback and execute stage.
		Reg#(Bit#(1)) eEpoch <- mkReg(0);
		Reg#(Bit#(1)) wEpoch <- mkReg(0);

    // this register is used to stall the current stage from processing any new instructions until a
    // redirection from execute / write - back is received. The stall is generated when an trap is
    // detected in this stage for the current instruction being processed. This prevents flooding
    // the pipe with un - necessary instructions since a redirection is expected.
    Reg#(Bool) rg_stall <- mkReg(False);
    Reg#(Bool) rg_wfi   <- mkReg(False);

    // This register when set to true indicates that the current instruction being processed will
    // have to be re - fetched and executed since the previous instruction was a CSR operation.
    Reg#(Bool) rg_rerun <- mkReg(False);
    
    // This register when set to true indicates that the current instruction being processed will
    // have to be re - fetched and executed since the previous instruction was a fencei instruction
    Reg#(Bool) rg_fencei_rerun <- mkReg(False);

  `ifdef supervisor
    // This register when set to true indicates that the current instruction being processed will
    // have to be re - fetched and executed since the previous instruction was a sfence instruction
    Reg#(Bool) rg_sfence_rerun <- mkReg(False);
  `endif

    // the following wires are used to ensure that rg_rerun and rg_stall are not set in the cycle a
    // redirection from the exe / wb stage is received.
    Wire#(Bool) wr_flush_from_exe <- mkDWire(False);
    Wire#(Bool) wr_flush_from_wb  <- mkDWire(False);
    
    // ---------------------- End Instatiations --------------------------//

    // ---------------------- Start Rules -------------------------------//

    // RuleName : decode_and_opfetch
    // Explicit Conditions : rg_stall == False
    // Implicit Conditions : rx.notEmpty and all tx fifos are not full
    // Description : This rule decodes the current fetched instruction, fetches the operands from the
    // registerfile and sends the required struct to the next stage.
    rule decode_and_opfetch(!rg_stall);

      // --- extract the fields from the packet received from the stage1 ---- //
	    let pc = rx.u.first.program_counter;
	    let inst = rx.u.first.instruction;
	    let epochs = rx.u.first.epochs;
      let trap = rx.u.first.trap;
    `ifdef supervisor
      let trapcause = rx.u.first.cause;
    `endif
    `ifdef compressed
      let upper_err = rx.u.first.upper_err;
    `endif
    `ifdef branch_speculation
      let prediction = rx.u.first.prediction;
    `endif
      // -------------------------------------------------------------------- //

      let decoded <- decoder_func(inst,trap, `ifdef supervisor trapcause, `endif wr_csrs, 
                                  rg_rerun, rg_fencei_rerun 
                                  `ifdef supervisor ,rg_sfence_rerun `endif );
      let imm = decoded.meta.immediate;
      let func_cause = decoded.meta.funct;
      let instrType = decoded.meta.inst_type;
      let word32 = decode_word32(inst,wr_csrs.csr_misa[2]);
    `ifdef ras
      if(instrType == JALR && (decoded.op_addr.rs1addr == 'b00001 || decoded.op_addr.rs1addr == 'b00101))
        wr_train_ras <= RASTraining{pc : pc `ifdef compressed ,edgecase : !decoded.compressed 
                                                                      && pc[1]==1 `endif } ;
    `endif

    `ifdef spfpu
      RFType rf1type = `ifdef spfpu decoded.op_type.rs1type == FloatingRF ? FRF : `endif IRF;
      RFType rf2type = `ifdef spfpu decoded.op_type.rs2type == FloatingRF ? FRF : `endif IRF;
    `endif
      `logLevel( stage2, 0, $format("STAGE2 : PC:%h Instruction:%h",pc, inst))

      if(instrType != WFI && {eEpoch, wEpoch}==epochs)begin
        let rs1 <- registerfile.read_rs1(decoded.op_addr.rs1addr 
                            `ifdef spfpu ,rf1type `endif );
        let rs2 <- registerfile.read_rs2(decoded.op_addr.rs2addr 
                            `ifdef spfpu ,rf2type `endif );
      `ifdef spfpu
        let rs3 <- registerfile.read_rs3(decoded.op_addr.rs3addr);
      `endif

//        Bit#(ELEN) op1 = (rs1type == PC) ? signExtend(pc) : rs1;
//        Bit#(`vaddr) op3 = (instrType == MEMORY || instrType == JALR) ? truncate(rs1) : zeroExtend(pc); 
        Bit#(ELEN) op1 = rs1;
        Bit#(ELEN) op2 = (decoded.op_type.rs2type == Constant2) ? 'd2: // constant2 only is C enabled.
                       (decoded.op_type.rs2type == Constant4) ? 'd4:
                       (decoded.op_type.rs2type == Immediate) ? signExtend(imm) : rs2;
        // TODO send badaddress as separate field if required.
        if(instrType == TRAP && func_cause == `Illegal_inst )
            op1 = zeroExtend(inst); // for badaddr
        else if(instrType == TRAP && func_cause == `Inst_pagefault)
            op1 = pc; 
      `ifdef compressed
        if(instrType == TRAP && func_cause == `Inst_pagefault && upper_err)
            op1 = pc + 2;
      `endif
      `ifdef spfpu
        Bit#(FLEN) op4 = (decoded.op_type.rs3type == FRF) ? rs3 : signExtend(imm);
      `else
        Bit#(FLEN) op4 = signExtend(imm);
      `endif
        rg_rerun <= decoded.meta.rerun && !wr_flush_from_exe && !wr_flush_from_wb;
        if(instrType == MEMORY && decoded.meta.memaccess == FenceI)
          rg_fencei_rerun <= True;
        else 
          rg_fencei_rerun <= False;
      `ifdef supervisor
        if(instrType == MEMORY && decoded.meta.memaccess == SFence)
          rg_sfence_rerun <= True;
        else 
          rg_sfence_rerun <= False;
      `endif

        let stage3meta = Stage3Meta{funct : func_cause, memaccess : decoded.meta.memaccess, 
                                    inst_type : instrType, pc : pc, epochs : epochs 
                                    `ifdef RV64               , word32:     word32     `endif
                                    `ifdef compressed         , compressed : decoded.compressed `endif 
                                    `ifdef branch_speculation , prediction : prediction `endif };

        let stage3opmeta = Stage3OpMeta{ op_addr : decoded.op_addr, op_type : decoded.op_type};
        let stage3op = RFOperands{op1 : op1, op2 : op2, op3 : op4};
        tx_meta.u.enq(stage3meta);
        tx_opmeta.u.enq(stage3opmeta);
        tx_op.u.enq(stage3op);
      `ifdef rtldump
        txinst.u.enq(inst);
      `endif

        if(instrType == TRAP)
          rg_stall <= True && !wr_flush_from_exe && !wr_flush_from_wb;

        `logLevel( stage2, 1, $format("STAGE2: ",fshow(stage3opmeta.op_addr)))
        `logLevel( stage2, 1, $format("STAGE2: ",fshow(stage3opmeta.op_type)))
        `logLevel( stage2, 1, $format("STAGE2: ",fshow(stage3op)))
        `logLevel( stage2, 1, $format("STAGE2: ",fshow(stage3meta)))

      end
      else begin
        `logLevel( stage2, 0, $format("STAGE2 : Dropping Instruction due to epoch mis - match"))
      end
      rx.u.deq; 
    endrule

    // interface to send decoded structs to the next stage.
    interface tx_meta_to_stage3   = tx_meta.e;
    interface tx_op_to_stage3     = tx_op.e;
    interface tx_opmeta_to_stage3 = tx_opmeta.e;

  `ifdef rtldump
    interface tx_inst = txinst.e;
  `endif
    
		method rx_from_stage1 = rx.e;

    method Action csrs (CSRtoDecode csr);
      wr_csrs <= csr;
    endmethod

		method Action commit_rd (Maybe#(CommitData) commit);
      registerfile.commit_rd(commit);
    endmethod

    // This method will get activated when there is a flush from the execute stage
		method Action update_eEpoch;
      wr_flush_from_exe <= True;
			eEpoch<=~eEpoch;
		endmethod

    // This method gets activated when there is a flush from the write - back stage.
		method Action update_wEpoch;
      wr_flush_from_wb <= True;
			wEpoch<=~wEpoch;
		endmethod

    method Action clear_stall (Bool upd) if(rg_stall);
      if(upd) begin
        rg_stall <= False;
        rg_rerun <= False;
      end
    endmethod

    method Action fwd_from_wb(CommitData commit);
      registerfile.fwd_from_wb(commit);
    endmethod

  `ifdef ras
    method train_ras = wr_train_ras;
  `endif

  endmodule
endpackage
