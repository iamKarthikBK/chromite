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
Details: This stage implements the execute stage of the pipe.

NOTE1: We are not passing the next pc through the pipe. Instead, if there is a branch or jal(r)
operation we store the next expected PC in a register. When the next instruction reaches the execute
stage we simply check if the this instruction's PC is what the previous branch/jalr expected. If not
we generate a flush. 
This mechanism will work in case a branch predictor is also present. However,  in this case we need
to know whether the next expected PC is PC+4 or a a different target address. 
Currently we store both the redirected pc and the pc+4 in a register and another variable which 
indicates which one of these 2 shuold the next instruction pc be compared to.

CATCH: In case we have a sequence:

beq, x0, x0, NEWLOC
wfi

Here once the branch is passes the execute stage,  the pipe will basically stall since the WFI will
not proceed ahead of the decode stage untill an interrupt has occurred. But since the branch is
taken the WFI should never be executed. This leads the pipe in a "hung" state.

There twooptions to solve this issue:
  
  1. in the decode stage as soon as you get a WFI encode and send a nop in the pipe. This will reach
  the execute stage and flush since the wfi pc != NEWLOC. Now suppose the branch was not taken, the 
  WFI needs to executed, but I have sent in a nop instruction from the decode. This instruction 
  needs to be dropped in the execute stage else it will corrupt my commit-trace. If might be 
  difficult to identify whether a "nop" is because of a WFI or is actually a required nop.

  2. Do not stall the WFI in the decode,  instead stall it in the writeback stage. Thus the wfi will
  propagate through the execute stage and get flushed. However,  the complexity here is to shift
  interrupt handling to the write-back stage. This is a huge overhead since the we capture all
  inetrrupts and majority of the exceptions in the decode stage. This logic will have to be
  replicated in the write-back stage as well. 

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
  import common_types::*;       // for pipe-line types
  `include "common_params.bsv"  // for core parameters
  `include "Logger.bsv"         // for logging display statements.


  interface Ifc_stage3;

  `ifdef rtldump
    // this interface is like a parallel for dumping the trace.
    interface RXe#(Bit#(32)) rx_inst;
  `endif

    // the follwing set of interfaces receive the decoded info from stage2;
    interface RXe#(Stage3Meta)    rx_meta_from_stage2;
    interface RXe#(RFOperands)    rx_op_from_stage2;
    interface RXe#(Stage3OpMeta)  rx_opmeta_from_stage2;

    // interface to send the alu result to the next stage.
		interface TXe#(PIPE3) tx_out;

  `ifdef rtldump
    // interface to receive the instruction sequence for the rtl dump feature
    interface TXe#(Tuple2#(Bit#(`vaddr),Bit#(32))) tx_inst;  
  `endif

    // method to update epochs on redirection from write-back stage
    method Action update_wEpoch;

    // this method will send out the redirection caused by branches/jumps to all previous stages.
    method Tuple2#(Bool, Bit#(`vaddr)) flush_from_exe;

    // interface to send memory requests to the dmem subsystem
  `ifdef dcache
		interface Get#(Tuple2#(DMem_request#(`vaddr , `vaddr, 1),Bool)) memory_request;
    (*always_enabled*)
    method Action cache_is_available(Bool avail);
  `else 
		interface Get#(MemoryReadReq#(`vaddr,1)) memory_read_request;
  `endif

    // method to receive the current status of the misa_c bit
    method Action csr_misa_c (Bit#(1) m);

    // method to identify if the store-buffer in the memory stage is empty or not.
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
    // This method is required since the execute stage will stall for non-speculative
    // loads/stores/atomics
    // until the pipe is free. It is possible that the instruction currently in the execute stage
    // depends on the one of three instructions in the pipe. And the instruction in the execute
    // stage can only commit once the pipe is free. Thus we need to store the last three commits for
    // correct bypassing behavior.
    method Action latest_commit(CommitData c);

    // this method receives the pc of the next instruction present in the pipe. This is driven by
    // the decode stage.
    method Action next_pc (Bit#(`vaddr) npc);

  `ifdef branch_speculation
    // This method sends out the training information to the BTB for conditional branches.
    method Training_data train_bpu;
    `ifdef ras
      // This method sends out the return-address to be pushed on top of the stack.
      method Bit#(`vaddr) ras_push;
    `endif
  `endif
  endinterface

  (*synthesize*)
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

  `ifdef branch_speculation
    // Wire to send the training for the BTB on conditional branches.
	  Wire#(Training_data) wr_training_data <-mkWire();
    `ifdef ras
      // Wire to send the return-address on the stack.
      Wire#(Bit#(`vaddr)) wr_push_ras <- mkWire();
    `endif
  `endif

  // TODO
	TX#(PIPE3) tx <-mkTX;							// send to the memory stage;
  `ifdef rtldump
    TX#(Tuple2#(Bit#(`vaddr),Bit#(32))) txinst<-mkTX;
  `endif

  `ifdef multicycle
    // TODO can we have a single module for both function and module type ALU?
    Ifc_alu alu <- mkalu();
    Reg#(Bool) rg_stall <- mkReg(False);
  `endif

    // module implementing the operand bypass behavior
    Ifc_fwding fwding <- mkfwding();

    // The following registers are use to the maintain epochs from various pipeline stages:
    // writeback and execute stage.
		Reg#(Bit#(1)) rg_eEpoch <-mkReg(0);
		Reg#(Bit#(1)) rg_wEpoch <-mkReg(0);

    // Wire sending redirection indication to the previous stages.
    Reg#(Bool) wr_flush_from_exe <- mkDWire(False);

    // Wire holding the new pc to be redirected to due to branches/jumps
    Reg#(Bit#(`vaddr)) wr_redirect_pc <- mkDWire(0);

  `ifdef dcache
    // TODO have a unified interface for cache enable and disable
    Wire#(Tuple2#(DMem_request#(`vaddr, `vaddr, 1),Bool)) wr_memory_request <- mkWire;
    Wire#(Bool) wr_cache_avail <- mkWire;
  `else 
		FIFOF#(MemoryReadReq#(`vaddr,1)) ff_memory_read_request <-mkBypassFIFOF;
  `endif

    // wire holding the compressed bit of the misa csr
    Wire#(Bit#(1)) wr_misa_c<-mkWire();

    // Wire indicating if the store buffer in the memory stage or dcache is empty or not?
    Wire#(Bool) wr_storebuffer_empty<-mkWire();

  `ifdef atomic
    // address which holds the reservation address for LR/SC instructions
    Reg#(Maybe#(Bit#(`vaddr))) rg_loadreserved_addr <- mkReg(tagged Invalid);
  `endif
    // wire holding the PC value of the next instruction fetched into the pipe
    Wire#(Bit#(`vaddr)) wr_next_pc <- mkWire();

    // This variable holds the current epoch values of the pipe
    let curr_epochs = {rg_eEpoch, rg_wEpoch};

    // ---------------------- End Instatiations --------------------------//

    // ---------------------- Start local function definitions ----------------//

    // this function will deque the response from i-mem fifo and the branch prediction fifo
    function Action deq_rx = action
      rx_meta.u.deq;
      rx_opmeta.u.deq;
      rx_op.u.deq;
    `ifdef rtldump  
      rxinst.u.deq; 
    `endif          
    `ifdef spfpu    
      rxfpu.u.deq;  
    `endif      
    endaction;
    // ---------------------- End local function definitions ------------------//

    Bool rule_condition = True `ifdef dcache && wr_cache_avail `endif `ifdef multicycle && !rg_stall  `endif ;

    rule execute_operation ( rule_condition );
      // capturing the inputs from the previous stage.
      let rf_ops  = rx_op.u.first;
      let opmeta  = rx_opmeta.u.first;
      let meta    = rx_meta.u.first;
      Bit#(3) funct3  = truncate(meta.funct);
      Bit#(4) fn      = truncateLSB(meta.funct);
    `ifdef branch_speculation
      Bit#(2) prediction = meta.prediction;
    `endif

    `ifdef rtldump
      let instruction = rxinst.u.first;
    `endif
//    `ifdef spfpu
//      let {rs3addr, rs1type, rs2type, rs3type, rdtype} = rxfpu.u.first;
//    `else
//      RFType rdtype = IRF;
//    `endif
  
      Bit#(`vaddr) pc = meta.pc;
      Bool execute_instruction = (curr_epochs == meta.epochs);

      // ------------------ check if operands are available for execution -----------------------//
      let {rs1avail, rs1} <- fwding.read_rs1(rf_ops.op1, opmeta.op_addr.rs1addr 
                                            `ifdef spfpu ,opmeta.op_type.rs1type `endif );

      let {rs2avail, rs2} <- fwding.read_rs2(rf_ops.op2, opmeta.op_addr.rs2addr 
                                             `ifdef spfpu , opmeta.op_type.rs2type `endif );
    `ifdef spfpu
      let {rs3avail, rs3_imm} <- fwding.read_rs3(zeroExtend(rf_ops.op3), opmeta.op_addr.rs3addr, 
                                                 opmeta.op_type.rs3type);
    `else
      let rs3_imm=rf_ops.op3;
    `endif
      // ---------------------------------------------------------------------------------------- //

      // TODO instead of just store-buffer for loads will need to check if pipe is empty
      // TODO add more comments here
      Bool execute = True;
      if(meta.inst_type == MEMORY && !wr_storebuffer_empty 
                                && (meta.memaccess == FenceI || meta.memaccess == Fence
                              `ifdef atomic     || meta.memaccess == Atomic `endif 
                              `ifdef supervisor || meta.memaccess == SFence `endif ) )
        execute=False; 

      if(!execute_instruction)begin
        deq_rx;
      end
      // here the trap could be because the misprediction from the previous jump.branch might
      // have caused the cpu to fetch an illegal instruction. So trap check should happen after the
      // redirection has been checked.
      else if(meta.inst_type!=TRAP && execute)begin
        Bit#(XLEN)    arg1 = opmeta.op_type.rs1type==PC?meta.pc:rs1;
        Bit#(XLEN)    arg2 = rs2;
        Bit#(`vaddr)  arg3 = (meta.inst_type==JALR || meta.inst_type==MEMORY)?rs1:meta.pc;
        Bit#(`vaddr)  arg4 = rf_ops.op3;

        if ( rs1avail && rs2avail `ifdef spfpu && rs3avail `endif ) begin
          `ifdef multicycle
            let {done, cmtype, out, addr, cause, redirect, taken} <- alu.get_inputs(fn, arg1, arg2, 
                arg3, arg4, meta.inst_type, funct3, memaccess, word32, wr_misa_c, truncate(meta.pc)
                `ifdef branch_speculation , wr_next_pc `endif );                 
          `else
            let {cmtype, out, addr, cause, redirect, taken} = fn_alu(fn, arg1, arg2, arg3, arg4,
                meta.inst_type, funct3, meta.memaccess, meta.word32, wr_misa_c, truncate(meta.pc)
                `ifdef branch_speculation , wr_next_pc `endif ); 
            Bool done=True;
          `endif

          if(done)begin
            if(execute) begin
            deq_rx;


            // sending training updates to predictors
            `ifdef branch_speculation
              if(meta.inst_type == BRANCH && cmtype != TRAP)begin
                if(taken)begin
                  if(prediction<3)
                    prediction=prediction+1;
                end
                else begin
                  if(prediction>0)
                    prediction=prediction-1;
                end
                wr_training_data<=tuple3(pc, addr, prediction);
              end
              `ifdef ras
                if( (meta.inst_type == JALR || meta.inst_type == JAL) && 
                    (rd == 'b00001 || rd == 'b00101) && cmtype != TRAP)
                  wr_push_ras<=out;
              `endif
            `endif

            if(redirect && cmtype!=TRAP)begin
              rg_eEpoch<= ~rg_eEpoch;
              wr_redirect_pc<=meta.inst_type == BRANCH?out:addr;
              wr_flush_from_exe<=True;
            end
          `ifdef spfpu
            Bit#(1) nanboxing=pack(cmtype == MEMORY 
                                  && funct3[1:0] == 2 
                                  && opmeta.op_type.rdtype == FRF);
          `endif
          `ifdef atomic
            if(cmtype==MEMORY)begin
              if(memaccess==Atomic && fn=='b0101) begin // LR
                rg_loadreserved_addr<= tagged Valid addr;
                meta.memaccess=Load;
              end
            end
            if(cmtype==MEMORY && meta.memaccess== Atomic && fn=='b0111) begin // SC
                rg_loadreserved_addr<= tagged Invalid;
              if(rg_loadreserved_addr matches tagged Valid .scaddr &&& scaddr == addr)begin
                meta.memaccess=Store;
              end
              else begin
                out = 1;
                cmtype = REGULAR;
              end
            end
          `endif
          `ifdef dcache
            if(cmtype==MEMORY)begin
          `ifdef supervisor
            `ifdef atomic
              wr_memory_request<=tuple2((tuple8(addr,meta.memaccess==FenceI||meta.memaccess==Fence,meta.memaccess==SFence,
                    meta.epochs[0],truncate(pack(meta.memaccess)),funct3,rs2,{funct3[0],fn})),False);
            `else
              wr_memory_request<=tuple2((tuple7(addr,meta.memaccess==FenceI||meta.memaccess==Fence,meta.memaccess==SFence,
                                      meta.epochs[0],truncate(pack(meta.memaccess)),funct3,rs2)),False);
            `endif
          `else
            `ifdef atomic
              wr_memory_request<= tuple2((tuple7(addr,meta.memaccess==FenceI || meta.memaccess==Fence,
                            meta.epochs[0],truncate(pack(meta.memaccess)),funct3,rs2,{funct3[0],fn})),False);
            `else
              wr_memory_request<= tuple2((tuple6(addr,meta.memaccess==FenceI || meta.memaccess==Fence,
                                       meta.epochs[0],truncate(pack(meta.memaccess)),funct3,rs2)),False);
            `endif
          `endif
            end
          `else
            if(cmtype==MEMORY && (meta.memaccess==Load `ifdef atomic || meta.memaccess==Atomic `endif ))begin
              ff_memory_read_request.enq(tuple3(addr, meta.epochs[0], funct3));
            end
          `endif
//            Bit#(6) smeta1 = {pack(opmeta.op_type.rdtype),opmeta.op_addr.rd};
            Bit#(6) smeta1 = {1'b0,opmeta.op_addr.rd};
            Bit#(17) mmeta = {fn,1'b0,funct3,pack(meta.memaccess),smeta1};
//            Bit#(17) mmeta = {fn,nanboxing,funct3,pack(meta.memaccess),smeta1};
            Tbad_Maddr_Rmeta2_Smeta2 tple1 = 
              case(cmtype)
                REGULAR: 0;
                default: zeroExtend(addr); 
              endcase;

            Mdata_Rrdvalue_Srs1 tple2 =
              case(cmtype)
                  MEMORY: rs2;
                  REGULAR: out;
                  SYSTEM_INSTR: if(funct3[2] == 1) zeroExtend(rs3_imm[16:12]); else out;
                  default:0;
              endcase;
    
            Tpc_Mpc tple3 = pc;
            Tcause_Mmeta_Rmeta1_Smeta1_epoch tple4 = 
              case(cmtype)
                TRAP: zeroExtend({cause,meta.epochs[0]});
                MEMORY: zeroExtend({mmeta,meta.epochs[0]});
                default: zeroExtend({smeta1,meta.epochs[0]});
              endcase;
            PIPE3 pipedata= tuple5(cmtype, tple1,tple2,tple3,tple4);

	        `ifdef simulate
	      	  if( meta.inst_type == BRANCH && cmtype != TRAP)
	      		  out=0;
  	      `endif

            tx.u.enq(pipedata);
          `ifdef rtldump
            txinst.u.enq(tuple2(pc,instruction));
          `endif
          end
        end
          else begin
          `ifdef multicycle
            rg_stall<= True;
          `endif
          end
        end
      end
      else if(meta.inst_type==TRAP) begin
        deq_rx;
        Bit#(XLEN) res=signExtend(pc); // badaddress
        // TODO
        PIPE3 pipedata = tuple5(TRAP, truncate(rf_ops.op1), ?, pc, zeroExtend({meta.funct,meta.epochs[0]})); 
        tx.u.enq(pipedata);
      `ifdef rtldump
        txinst.u.enq(tuple2(pc,instruction));
      `endif
        // else you need to simply drop the execution since epochs have changed.
      end
    endrule
  `ifdef multicycle
    rule capture_stalled_output(rg_stall);
      let {opmeta, opdata, metadata, prediction} = rxmin.u.first;
      let {rs1addr, rs2addr, op3, instrtype} = opmeta;
      let {op1, op2, op4}=opdata;
      let {rd, func_cause, memaccess, word32, epochs}=metadata;
    `ifdef rtldump
      let instruction = rxinst.u.first;
    `endif
    `ifdef spfpu
      let {rs3addr, rdtype} = rxfpu.u.first;
    `else
      RFType rdtype = IRF;
    `endif
      Bit#(`vaddr) pc = (instrtype==MEMORY || instrtype==JALR)?truncate(op1):truncate(op3);
      let {cmtype, out, addr, cause, redirect} <- alu.delayed_output;
      Bit#(5) fflags=truncate(addr);
        $display($time,"\tEXECUTE: Got delayed output from ALU: cmtype:",fshow(cmtype)," out: ", 
            fshow(out)," trap: ", cause);
        
      PIPE3 pipedata = tuple5(REGULAR, zeroExtend(fflags), out, pc, 
                              zeroExtend({pack(rdtype),rd,meta.epochs[0]}) ); 
      Bool execute_instruction = (curr_epochs == meta.epochs);

      if(execute_instruction)begin
      `ifdef rtldump
        txinst.u.enq(tuple2(pc,instruction));
      `endif
        tx.u.enq(pipedata);
      end
      rg_stall<= False;
      deq_rx;
    endrule
  `endif
    interface rx_meta_from_stage2   = rx_meta.e;
    interface rx_op_from_stage2     = rx_op.e;
    interface rx_opmeta_from_stage2 = rx_opmeta.e;
  `ifdef rtldump
    interface rx_inst=rxinst.e;
  `endif
		interface tx_out = tx.e;
  `ifdef rtldump
    interface tx_inst=txinst.e;
  `endif
    method Action update_wEpoch;
      rg_wEpoch<= ~rg_wEpoch;
    endmethod
    method flush_from_exe=tuple2(wr_flush_from_exe, wr_redirect_pc);
  `ifdef dcache
    method Action cache_is_available(Bool avail);
      wr_cache_avail<= avail;
    endmethod
    interface memory_request = interface Get
      method ActionValue#(Tuple2#(DMem_request#(`vaddr, `vaddr, 1),Bool)) get;
        return wr_memory_request;
      endmethod
    endinterface;
  `else 
		interface memory_read_request = interface Get 
			method ActionValue#(MemoryReadReq#(`vaddr,1)) get ;
				ff_memory_read_request.deq;
				return ff_memory_read_request.first;
			endmethod
		endinterface;
  `endif
    method Action csr_misa_c (Bit#(1) m);
      wr_misa_c <= m;
    endmethod
    method Action storebuffer_empty(Bool e);
      wr_storebuffer_empty<=e;
    endmethod
    method Action fwd_from_pipe3 (FwdType fwd);
      fwding.fwd_from_pipe3(fwd);
    endmethod
    method Action fwd_from_pipe4_first (FwdType fwd);
      fwding.fwd_from_pipe4_first(fwd);
    endmethod
  `ifdef PIPE2
    method Action fwd_from_pipe4_second (FwdType fwd);
      fwding.fwd_from_pipe4_second(fwd);
    endmethod
  `endif
    method Action latest_commit(CommitData c);
      fwding.latest_commit(c);
    endmethod
    method Action next_pc (Bit#(`vaddr) npc);
      wr_next_pc<=npc;
    endmethod
  `ifdef branch_speculation
    method train_bpu = wr_training_data;
    `ifdef ras
      method ras_push = wr_push_ras;
    `endif
  `endif
  endmodule
endpackage
