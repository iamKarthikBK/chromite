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
Details : This stage implements the execute stage of the pipe.

NOTE1 : We are not passing the next pc through the pipe. Instead, if there is a branch or jal(r)
operation we store the next expected PC in a register. When the next instruction reaches the execute
stage we simply check if the this instruction's PC is what the previous branch / jalr expected. If not
we generate a flush. 
This mechanism will work in case a branch predictor is also present. However,  in this case we need
to know whether the next expected PC is PC + 4 or a a different target address. 
Currently we store both the redirected pc and the pc + 4 in a register and another variable which 
indicates which one of these 2 shuold the next instruction pc be compared to.

CATCH : In case we have a sequence:

beq, x0, x0, NEWLOC
wfi

Here once the branch is passes the execute stage,  the pipe will basically stall since the WFI will
not proceed ahead of the decode stage untill an interrupt has occurred. But since the branch is
taken the WFI should never be executed. This leads the pipe in a "hung" state.

There twooptions to solve this issue:
  
  1. in the decode stage as soon as you get a WFI encode and send a nop in the pipe. This will reach
  the execute stage and flush since the wfi pc != NEWLOC. Now suppose the branch was not taken, the 
  WFI needs to executed, but I have sent in a nop instruction from the decode. This instruction 
  needs to be dropped in the execute stage else it will corrupt my commit - trace. If might be 
  difficult to identify whether a "nop" is because of a WFI or is actually a required nop.

  2. Do not stall the WFI in the decode,  instead stall it in the writeback stage. Thus the wfi will
  propagate through the execute stage and get flushed. However,  the complexity here is to shift
  interrupt handling to the write - back stage. This is a huge overhead since the we capture all
  inetrrupts and majority of the exceptions in the decode stage. This logic will have to be
  replicated in the write - back stage as well. 

--------------------------------------------------------------------------------------------------
*/
package stage3;

  `ifdef muldiv
    `define multicycle True
  `endif
  `ifdef spfpu
    `define multicycle True
  `endif
  
  // -- package imports --//
  import GetPut::*;
  import FIFOF::*;
  import SpecialFIFOs::*;
  import DReg::*;
	import TxRx:: *;

  // -- project imports --//
  import alu::*;                // implements the ALU function
  import fwding1 ::*;           // provides the operand bypassing logic
  import common_types::*;       // for pipe - line types
  `include "common_params.bsv"  // for core parameters
  `include "Logger.bsv"         // for logging display statements.
  import globals :: *;          // for dmem request types


  interface Ifc_stage3;

    // the follwing set of interfaces receive the decoded info from stage2;
    interface RXe#(Stage3Meta)    rx_meta_from_stage2;
    interface RXe#(RFOperands)    rx_op_from_stage2;
    interface RXe#(Stage3OpMeta)  rx_opmeta_from_stage2;

    // interface to send the alu result to the next stage.
		interface TXe#(Stage4Common) tx_common_to_stage4;
		interface TXe#(Stage4Type)   tx_type_to_stage4;

  `ifdef rtldump
    // interface to receive the instruction sequence for the rtl dump feature
    interface TXe#(Tuple2#(Bit#(`vaddr), Bit#(32))) tx_inst;  
    interface RXe#(Bit#(32)) rx_inst;
  `endif

    // method to update epochs on redirection from write - back stage
    method Action update_wEpoch;

    // this method will send out the redirection caused by branches / jumps to all previous stages.
    method Tuple2#(Bool, Bit#(`vaddr)) flush_from_exe;

    // interface to send memory requests to the dmem subsystem
    interface Get#(DMem_request#(`vaddr, ELEN, 1)) memory_request;
    (*always_enabled*)
    method Action cache_is_available(Bool avail);
   `ifdef arith_trap
      method Action rd_arith_excep_en(Bit#(1) arith_en);
   `endif

    // method to receive the current status of the misa_c bit
    method Action csr_misa_c (Bit#(1) m);

    // method to identify if the store - buffer in the memory stage is empty or not.
    (*always_enabled*)
    method Action storebuffer_empty(Bool e);

    // methods to receive the operands from the proceeding stages. A max of three instructions can
    // exist in the pipe that will require to be looked up for bypass.
    method Action fwd_from_pipe3 (FwdType fwd);
    method Action fwd_from_pipe4_first (FwdType fwd);
  `ifdef PIPE2
    method Action fwd_from_pipe4_second (FwdType fwd);
  `endif

    // method to capture the latest commit being done. 
    // This method is required since the execute stage will stall for non - speculative
    // loads / stores / atomics
    // until the pipe is free. It is possible that the instruction currently in the execute stage
    // depends on the one of three instructions in the pipe. And the instruction in the execute
    // stage can only commit once the pipe is free. Thus we need to store the last three commits for
    // correct bypassing behavior.
    method Action latest_commit(CommitData c);

    // this method receives the pc of the next instruction present in the pipe. This is driven by
    // the decode stage.
    method Action next_pc (Bit#(`vaddr) npc);

  `ifdef bpu
    // This method sends out the training information to the BTB for conditional branches.
    method Training_data train_bpu;
    // This method sends out the return - address to be pushed on top of the stack.
    method Bit#(`vaddr) ras_push;
  `endif
  endinterface

  (*synthesize*)
`ifdef multicycle
  `ifdef simulate
    (*preempts="capture_stalled_output,count_stalls"*)
  `endif
`endif
  module mkstage3(Ifc_stage3);

    String stage3=""; // defined for logger

    // --------------------- Start instantiations ------------------------//

    // rx fifos to receive the decoded information and the operands from the RF.
    RX#(Stage3Meta)   rx_meta   <- mkRX;
    RX#(Stage3OpMeta) rx_opmeta <- mkRX;
    RX#(RFOperands)   rx_op     <- mkRX;

  `ifdef rtldump
    // rx fifo to receive the instruction sequence for rtl.dump feature.
    RX#(Bit#(32)) rxinst <- mkRX;
  `endif

  `ifdef bpu
    // Wire to send the training for the BTB on conditional branches.
	  Wire#(Training_data) wr_training_data <- mkWire();
    // Wire to send the return - address on the stack.
    Wire#(Bit#(`vaddr)) wr_push_ras <- mkWire();
  `endif
  
    TX#(Stage4Common)   tx_common <- mkTX;
    TX#(Stage4Type)     tx_type   <- mkTX;
  `ifdef rtldump
    TX#(Tuple2#(Bit#(`vaddr), Bit#(32))) txinst <- mkTX;
  `endif

    Ifc_alu alu <- mkalu();
  `ifdef multicycle
    Reg#(Bool) rg_stall <- mkReg(False);
  `endif

    // module implementing the operand bypass behavior
    Ifc_fwding fwding <- mkfwding();

    // The following registers are use to the maintain epochs from various pipeline stages:
    // writeback and execute stage.
		Reg#(Bit#(1)) rg_eEpoch <- mkReg(0);
		Reg#(Bit#(1)) rg_wEpoch <- mkReg(0);

    //Enable/disable arith_excep at run time
    `ifdef arith_trap
    Wire#(Bit#(1)) wr_arith_en <-mkDWire(0);
    `endif

    // Wire sending redirection indication to the previous stages.
    Reg#(Bool) wr_flush_from_exe <- mkDWire(False);

    // Wire holding the new pc to be redirected to due to branches / jumps
    Reg#(Bit#(`vaddr)) wr_redirect_pc <- mkDWire(0);

    Wire#(DMem_request#(`vaddr, ELEN, 1)) wr_memory_request <- mkWire;
    Wire#(Bool) wr_cache_avail <- mkWire;

    // wire holding the compressed bit of the misa csr
    Wire#(Bit#(1)) wr_misa_c <- mkWire();

    // Wire indicating if the store buffer in the memory stage or dcache is empty or not?
    Wire#(Bool) wr_storebuffer_empty <- mkWire();

  `ifdef atomic
    // address which holds the reservation address for LR / SC instructions
    Reg#(Maybe#(Bit#(`vaddr))) rg_loadreserved_addr <- mkReg(tagged Invalid);
  `endif
    // wire holding the PC value of the next instruction fetched into the pipe
    Wire#(Maybe#(Bit#(`vaddr))) wr_next_pc <- mkDWire(tagged Invalid);

    // This variable holds the current epoch values of the pipe
    let curr_epochs = {rg_eEpoch, rg_wEpoch};

    // ---------------------- End Instatiations --------------------------//

    // ---------------------- Start local function definitions ----------------//

    // this function will deque the response received from the previous stage
    function Action deq_rx = action
      rx_meta.u.deq;
      rx_opmeta.u.deq;
      rx_op.u.deq;
    `ifdef rtldump  
      rxinst.u.deq; 
    `endif          
    endaction;

    // function to send the memory request to the data memory subsystem
    function Action send_memory_request(Bit#(`vaddr) address, Bit#(1) epochs, Bit#(3) funct3, 
                                        Access_type memaccess, Bit#(4) fn, Bit#(ELEN) data) = action
        let req = DMem_request{address      : address,
                               epochs       : epochs,
                               size         : funct3
                               ,fence       : memaccess == FenceI || memaccess == Fence
                               ,access      : truncate(pack(memaccess))
                               ,writedata   : data
                            `ifdef atomic
                               ,atomic_op   : {funct3[0], fn}
                            `endif
                            `ifdef supervisor
                               ,sfence      : memaccess == SFence
                               ,ptwalk_req  : False
                               ,ptwalk_trap : False
                            `endif } ;
        wr_memory_request <= req;
    endaction;
    // ---------------------- End local function definitions ------------------//
    Bool rule_condition = wr_cache_avail
                               `ifdef multicycle && !rg_stall  `endif ;

    // RuleName : execute_operation
    // Implicit Conditions : all rx fifo should not be empty. All tx fifos should not be full. next
    //                     pc from the previous stage should be made available.
    // Explicit Conditions : dcache should be available and all previous multicycle operations should
    //                      be over (variable rule_condition captures this condition)
    // Description : This rule performs the alu operation of the core - pipe. This rule calls the
    // fwding logic to check if any of the following stages in the pipe hold an updated value of
    // the operands fetched from the RF in the previous stage. Only when the latest value of all
    // operands is available can the instruction execute. All arigthmetic, branch - compare,
    // logical operations are performed by the "alu" module. This module will also generate the
    // effective address required for load / stores. This module will also generate the redirection
    // Pc in case of branches / JUMPs. Misaligned traps are also detected in the alu module itself.
    // In case of multicycle operations like MULDIV / FPU the inputs are latched in the first cycle
    // and the execute stage is stalled untill the operation is over.
    // An instruction tagged as a TRAP in the previous stage will simply bypass the execute
    // stage.
    
    `ifdef arith_trap
    rule get_arith_en; 
      alu.rd_arith_excep_en(wr_arith_en);
    endrule
    `endif

    rule execute_operation ( rule_condition );
    //---------------------- capturing the inputs from the previous stage. -------------------- //
      let rf_ops  = rx_op.u.first;
      let opmeta  = rx_opmeta.u.first;
      let meta    = rx_meta.u.first;
      Bit#(3) funct3  = truncate(meta.funct);
      Bit#(4) fn      = truncateLSB(meta.funct);
    `ifdef bpu
      Bit#(2) prediction = meta.prediction;
      Bool    btbhit     = meta.btbhit;
    `endif
    `ifdef rtldump
      let instruction = rxinst.u.first;
    `endif 
      Bit#(`vaddr) pc = meta.pc;

      `logLevel( stage3, 0, $format("STAGE3: PC:%h", meta.pc))
      `logLevel( stage3, 0, $format("STAGE3: ", fshow(meta)))
      let s4common = Stage4Common{pc    : meta.pc, 
                                  rd    : opmeta.op_addr.rd,
                                  epochs : meta.epochs[0]
                                `ifdef spfpu
                                  ,rdtype : opmeta.op_type.rdtype
                                `endif } ;
      // ---------------------------------------------------------------------------------------- //

      Bool execute_instruction = (curr_epochs == meta.epochs);

      // ------------------ check if operands are available for execution -----------------------//
    `ifdef spfpu
      RFType rf1type = `ifdef spfpu opmeta.op_type.rs1type == FloatingRF ? FRF : `endif IRF;
      RFType rf2type = `ifdef spfpu opmeta.op_type.rs2type == FloatingRF ? FRF : `endif IRF;
    `endif
      let {rs1avail, rs1}     <- fwding.read_rs1(rf_ops.op1, opmeta.op_addr.rs1addr 
                                            `ifdef spfpu, rf1type `endif );

      let {rs2avail, rs2}     <- fwding.read_rs2(rf_ops.op2, opmeta.op_addr.rs2addr 
                                            `ifdef spfpu, rf2type `endif );
    `ifdef spfpu
      let {rs3avail, rs3_imm} <- fwding.read_rs3(signExtend(rf_ops.op3), opmeta.op_addr.rs3addr, 
                                             opmeta.op_type.rs3type);
    `else
      let rs3_imm = rf_ops.op3;
    `endif
      `logLevel( stage3, 1, $format("STAGE3: rs1avail:%b rs1:%h", rs1avail, rs1))
      `logLevel( stage3, 1, $format("STAGE3: rs2avail:%b rs1:%h", rs2avail, rs2))
    `ifdef spfpu
      `logLevel( stage3, 1, $format("STAGE3: rs3avail:%b rs1:%h", rs3avail, rs3_imm))
    `endif
      // ---------------------------------------------------------------------------------------- //

      // --------------------- Mux the operands according to the ALU arguments  ----------------- //
      Bit#(ELEN)    arg1 = opmeta.op_type.rs1type == PC ? zeroExtend(meta.pc) : rs1;
      Bit#(ELEN)    arg2 = rs2;
      Bit#(`vaddr)  arg3 = (meta.inst_type == JALR || meta.inst_type == MEMORY) ? truncate(rs1) : meta.pc;
      Bit#(TMax#(`vaddr,FLEN))  arg4 = rs3_imm;
      // ---------------------------------------------------------------------------------------- //

      // TODO instead of just store - buffer for loads will need to check if pipe is empty
      // TODO add more comments here
      Bool execute = True;
      if(meta.inst_type == MEMORY && !wr_storebuffer_empty 
                                && (meta.memaccess == FenceI || meta.memaccess == Fence
                              `ifdef atomic     || meta.memaccess == Atomic `endif 
                              `ifdef supervisor || meta.memaccess == SFence `endif ) )
        execute = False; 
      if((meta.inst_type == BRANCH || meta.inst_type == JALR || meta.inst_type == JAL) &&&
          wr_next_pc matches tagged Invalid)
        execute = False;

      if(!execute_instruction)begin
        `logLevel( stage3, 0, $format("STAGE3: Dropping Instructions"))
        deq_rx;
      end
      // here the trap could be because the misprediction from the previous jump.branch might
      // have caused the cpu to fetch an illegal instruction. So trap check should happen after the
      // redirection has been checked.
      else if(meta.inst_type != TRAP && execute)begin
        if ( rs1avail && rs2avail `ifdef spfpu && rs3avail `endif ) begin
          let aluout <- alu.inputs(fn, arg1, arg2, arg3, arg4, meta.inst_type, funct3, 
                         meta.memaccess, `ifdef RV64 meta.word32, `elsif dpfpu meta.word32, `endif 
                         wr_misa_c, truncate(meta.pc) `ifdef bpu,
                         fromMaybe(?,wr_next_pc) `ifdef compressed ,meta.compressed `endif `endif ); 
        `ifdef bpu
          let td = Training_data{pc : meta.pc,
                                 target : aluout.effective_addr,
                                 state  : ?
                              `ifdef compressed
                                 ,edgecase : !meta.compressed && meta.pc[1] == 1
                              `endif
                                 ,mispredict : aluout.redirect
                                 ,ci         : ?
                                 ,btbhit     : btbhit
                              };
          if((meta.inst_type == JAL || meta.inst_type == JALR) && opmeta.op_addr.rd[0]==1)
            td.ci = Call;
          else if(meta.inst_type == JALR && opmeta.op_addr.rs1addr == 'b00001) // TODO add x5 check
            td.ci = Ret;
          else if(meta.inst_type == JAL || meta.inst_type == JALR)
            td.ci = JAL;
          else
            td.ci = Branch;
        `endif

          if(aluout.done)begin
            if(execute) begin
              deq_rx;

            // sending training updates to predictors
            `ifdef bpu
              if(meta.inst_type == BRANCH && aluout.cmtype != TRAP)begin
                if(aluout.branch_taken)begin
                  if(prediction < 3)begin
                    prediction = prediction + 1;
                  end
                end
                else begin
                  if(prediction > 0) begin
                    prediction = prediction - 1;
                  end
                end
                td.state = prediction;
                wr_training_data <= td;
              end
              else if(meta.inst_type == JAL || meta.inst_type == JALR) begin
                td.state = 3;
                wr_training_data <= td;
              end
              if( (meta.inst_type == JALR || meta.inst_type == JAL) && 
                  (opmeta.op_addr.rd == 'b00001 || opmeta.op_addr.rd == 'b00101) &&
                  aluout.cmtype != TRAP)
                wr_push_ras <= truncate(aluout.aluresult);
            `endif

              rg_eEpoch         <= pack(aluout.redirect && aluout.cmtype != TRAP)^rg_eEpoch;
            `ifdef bpu
              wr_redirect_pc    <= aluout.redirect_pc;
            `else
              wr_redirect_pc <= aluout.effective_addr;
            `endif
              wr_flush_from_exe <= aluout.redirect && aluout.cmtype != TRAP;
            `ifdef bpu
              if(aluout.redirect && aluout.cmtype != TRAP)
                `logLevel( stage3, 0, $format("STAGE3: Misprediction. Inst: ",fshow(meta.inst_type),
                                              " PC:%h Target:%h NextPC:%h", meta.pc, 
                                              aluout.redirect_pc, fromMaybe(?,wr_next_pc)))
            `endif
            `ifdef dpfpu
              Bit#(1) nanboxing = pack(aluout.cmtype == MEMORY 
                                       && funct3[1 : 0] == 2 
                                       && opmeta.op_type.rdtype == FRF);
            `endif
            `ifdef atomic
              if(aluout.cmtype == MEMORY)begin 
                if(meta.memaccess == Atomic && fn == 'b0101) begin // LR
                  rg_loadreserved_addr <= tagged Valid aluout.effective_addr;
                  meta.memaccess = Load;
                end
              end
              if(aluout.cmtype == MEMORY && meta.memaccess == Atomic && fn == 'b0111) begin // SC
                  rg_loadreserved_addr <= tagged Invalid;
                if(rg_loadreserved_addr matches tagged Valid .scaddr &&& scaddr ==
                                                                          aluout.effective_addr)begin
                  meta.memaccess = Store;
                end
                else begin
                  aluout.aluresult = 1;
                  aluout.cmtype = REGULAR;
                end
              end
            `endif
            `logLevel( stage3, 0, $format("STAGE3: Result: ",fshow(aluout)))

            // --------------- In case of Memory operation send request to Dmem ----------------//
              if(aluout.cmtype == MEMORY)
                send_memory_request(aluout.effective_addr, meta.epochs[0], funct3, 
                                    meta.memaccess, fn, rs2);
            // ---------------------------------------------------------------------------------- //

            `ifdef supervisor
              if( aluout.cmtype == MEMORY && meta.memaccess == SFence ) begin
                aluout.cmtype = REGULAR;
              end
            `endif
            // -------------------------- Derive types for Next stage --------------------------- //
              let s4memory = Stage4Memory{  address     : aluout.effective_addr,
                                            memaccess   : meta.memaccess
                                        `ifdef dpfpu
                                            ,nanboxing   : nanboxing
                                        `endif } ;
              let s4trap = Stage4Trap { cause   : aluout.cause,
                                        badaddr : aluout.effective_addr };

              let s4regular = Stage4Regular { rdvalue   : aluout.aluresult
                                        `ifdef spfpu
                                              ,fflags    :0 
                                        `endif };
              let s4system = Stage4System {funct3     : funct3,
                                           lpc        : truncate(meta.pc),
                                           rs1_imm    : funct3[2] == 1?zeroExtend(arg4[16 : 12]):
                                                                       truncate(aluout.aluresult),
                                           csr_address : truncate(arg4) };

              Stage4Type s4type = case(aluout.cmtype) matches 
                                    REGULAR       : tagged Regular s4regular;
                                    SYSTEM_INSTR  : tagged System s4system;
                                    TRAP          : tagged Trap s4trap;
                                    MEMORY        : tagged Memory s4memory;
                                  endcase;
            // ---------------------------------------------------------------------------------- //

              `logLevel( stage3, 1, $format("STAGE3: Enquing: ",fshow(s4type)))
              tx_common.u.enq(s4common);
              tx_type.u.enq(s4type);
            `ifdef rtldump
              txinst.u.enq(tuple2(pc, instruction));
            `endif
            end
          end
          else begin // aluout.done is false
          `ifdef multicycle
            rg_stall <= True;
          `endif
          end
        end
        else begin // operands not available
          `logLevel( stage3, 0, $format("STAGE3: Waiting for operands. PC:%h",meta.pc))
        end
      end
      // in case we receive an instruction which was tagged as a TRAP in the previous stage, simply
      // bypass it in this stage without performing any execution.
      else if(meta.inst_type == TRAP) begin
        deq_rx;
        let s4type = tagged Trap Stage4Trap{ cause : truncate(meta.funct), 
                                             badaddr : truncate(rf_ops.op1)};
        tx_type.u.enq(s4type);
        tx_common.u.enq(s4common);
        `logLevel( stage3, 1, $format("STAGE3: Forwarding ",fshow(s4type)))
      `ifdef rtldump
        txinst.u.enq(tuple2(pc, instruction));
      `endif
        // else you need to simply drop the execution since epochs have changed.
      end
      if(!execute)
        `logLevel( stage3, 0, $format("STAGE3: Stall"))
    endrule

  `ifdef multicycle
    // RuleName : capture_stalled_output
    // Implicit Conditions : all rx fifos are not empty. all tx fifos are not full. Alu is ready to
    //                      provide delayed output
    // Explicit Conditions : rg_stall == True
    // Description : This rule is fired when an multicycle instruction is execute whose output takes
    // atleast 2 cycles to be generated.
    `ifdef simulate
      rule count_stalls(!rule_condition);
        if(!wr_cache_avail)
          `logLevel( stage3, 0, $format("STAGE3: Stalled for MulDiv/FPU"))
      endrule
    `endif
    rule capture_stalled_output(rg_stall);
      let opmeta  = rx_opmeta.u.first;
      let meta    = rx_meta.u.first;
      let aluout <- alu.delayed_output;
      `logLevel( stage3, 0, $format("STAGE3: PC:%h", meta.pc))
      `logLevel( stage3, 0, $format("STAGE3: Stalled Output: ",fshow(aluout)))
        
      Bool execute_instruction = (curr_epochs == meta.epochs);

      let s4common = Stage4Common{pc    : meta.pc, 
                                  rd    : opmeta.op_addr.rd,
                                  epochs : meta.epochs[0]
                                `ifdef spfpu
                                  ,rdtype : opmeta.op_type.rdtype
                                `endif } ;

      let s4trap = Stage4Trap {cause   : aluout.cause,
                               badaddr : aluout.effective_addr};
      
      let s4regular = Stage4Regular  {rdvalue   : aluout.aluresult
                                `ifdef spfpu
                                      ,fflags    : truncate(aluout.effective_addr)
                                `endif };
      Stage4Type s4type = case(aluout.cmtype) matches 
                                    REGULAR       : tagged Regular s4regular;
                                    TRAP          : tagged Trap s4trap;
                          endcase;
      if(execute_instruction)begin
      `ifdef rtldump
        txinst.u.enq(tuple2(meta.pc, rxinst.u.first));
      `endif
        tx_common.u.enq(s4common);
        tx_type.u.enq(s4type);
      end
      else
        `logLevel( stage3, 0, $format("STAGE3: Dropping Instruction"))
      rg_stall <= False;
      deq_rx;
    endrule
  `endif
    //--------------- interfaces to receive the decoded info from the previous stage. ------------//
    interface rx_meta_from_stage2   = rx_meta.e;
    interface rx_op_from_stage2     = rx_op.e;
    interface rx_opmeta_from_stage2 = rx_opmeta.e;
  `ifdef rtldump
    interface rx_inst = rxinst.e;
  `endif
    // -------------------------------------------------------------------------------------------//

    // ------------------ interfaces to send the executed result to the next stage --------------//
		interface tx_common_to_stage4 = tx_common.e;
		interface tx_type_to_stage4   = tx_type.e;
  `ifdef rtldump
    interface tx_inst = txinst.e;
  `endif
    // -------------------------------------------------------------------------------------------//
    
    // MethodName : update_wEpoch
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : This method fires when there is a flush from the write - back stage.
    method Action update_wEpoch;
      rg_wEpoch<= ~rg_wEpoch;
    endmethod

    // MethodName : flush_from_exe 
    // Implicit Conditions : when a redirection occurs. both wires should be written
    // Explicit Conditions : None
    // Thhis is method is fired when a branch / jump redicrection is detected from this stage.
    method flush_from_exe = tuple2(wr_flush_from_exe, wr_redirect_pc);

    // MethodName : cache_is_available
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : captures if the dmem subsystem is available for sending requests
    method Action cache_is_available(Bool avail);
      wr_cache_avail <= avail;
    endmethod

    // MethodName : memory_request
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : interface to send memory requests.
    interface memory_request = interface Get
      method ActionValue#(DMem_request#(`vaddr, ELEN, 1)) get;
        return wr_memory_request;
      endmethod
    endinterface;

    // MethodName : csr_misa_c
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : captures the current setting of the "C" bit in the misa csr.
    method Action csr_misa_c (Bit#(1) m);
      wr_misa_c <= m;
    endmethod

    // MethodName : storebuffer_empty
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : captures if the storebuffer in the dmem or stage4 is empty. This used for
    // blocking speculative loads
    method Action storebuffer_empty(Bool e);
      wr_storebuffer_empty <= e;
    endmethod
    
    // MethodName : fwd_from_pipe3
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : receives the bypass values from the pipe3
    method Action fwd_from_pipe3 (FwdType fwd);
      fwding.fwd_from_pipe3(fwd);
    endmethod

    // MethodName : fwd_from_pipe4_first
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : receives the bypass values from the first element of pipe4
    method Action fwd_from_pipe4_first (FwdType fwd);
      fwding.fwd_from_pipe4_first(fwd);
    endmethod

  `ifdef PIPE2
    // MethodName : fwd_from_pipe4_first
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : receives the bypass values from the second element of pipe4
    method Action fwd_from_pipe4_second (FwdType fwd);
      fwding.fwd_from_pipe4_second(fwd);
    endmethod
  `endif

    // MethodName : latest_commit
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : captures the latest commit performed in the write - back stage
    method Action latest_commit(CommitData c);
      fwding.latest_commit(c);
    endmethod
    
    // MethodName : next_pc
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : captures the next_pc in the pipe
    method Action next_pc (Bit#(`vaddr) npc);
      wr_next_pc <= tagged Valid npc;
    endmethod
   `ifdef arith_trap
      method  Action rd_arith_excep_en(Bit#(1) arith_en);
      wr_arith_en<=arith_en;
      endmethod
   `endif
  `ifdef bpu
    // MethodName : train_bpu
    // Implicit Conditions : None
    // Explicit Conditions : None
    // Description : method to train the branch predictor BTB
    method train_bpu = wr_training_data;
    method ras_push = wr_push_ras;
  `endif
  endmodule
endpackage
