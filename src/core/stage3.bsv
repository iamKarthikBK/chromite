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
  
  import common_types::*;
  `include "common_params.bsv"
	import TxRx:: *;
  import DReg::*;

  import alu::*;
  import fwding1 ::*;
  import GetPut::*;
  import FIFOF::*;
  import SpecialFIFOs::*;

  `define DEQRX \
    rxmin.u.deq; \
    `ifdef rtldump \
      rxinst.u.deq; \
    `endif          \
    `ifdef bpu      \
      rxbpu.u.deq;  \
    `endif          \
    `ifdef spfpu    \
      rxfpu.u.deq;  \
    `endif      
    

  interface Ifc_stage3;
		interface RXe#(PIPE2_min#(ELEN,FLEN)) rx_min;
  `ifdef rtldump
    interface RXe#(Bit#(32)) rx_inst;
  `endif
  `ifdef bpu
    interface RXe#(Bit#(2)) rx_bpu;
  `endif
  `ifdef spfpu
    interface RXe#(OpFpu) rx_fpu;
  `endif
		interface TXe#(PIPE3) tx_out;
  `ifdef rtldump
    interface TXe#(Tuple2#(Bit#(VADDR),Bit#(32))) tx_inst;  
  `endif
    method Action update_wEpoch;
    method Tuple2#(Flush_type, Bit#(VADDR)) flush_from_exe;
    interface Put#(Tuple2#(Bit#(ELEN), Bit#(TLog#(PRFDEPTH)))) fwd_from_mem;
    method Action invalidate_index(Bit#(TLog#(PRFDEPTH)) ind);
    `ifdef bpu
  		method Maybe#(Training_data#(VADDR)) training_data;
		  method Maybe#(Bit#(VADDR)) ras_push;
    `endif
    `ifdef spfpu
      method Action roundingmode(Bit#(3) rm);
    `endif
    `ifdef supervisor
      method Tuple2#(Bit#(XLEN), Bit#(XLEN)) sfence_operands;
    `endif
		interface Get#(MemoryReadReq#(PADDR,1)) memory_read_request;
    method Action csr_misa_c (Bit#(1) m);
    method Action storebuffer_empty(Bool e);
  endinterface

  (*synthesize*)
  module mkstage3(Ifc_stage3);

    let verbosity = `VERBOSITY ;

		RX#(PIPE2_min#(ELEN,FLEN)) rxmin <-mkRX;								// receive from the decode stage
    `ifdef rtldump
      RX#(Bit#(32)) rxinst <- mkRX;
    `endif
    `ifdef spfpu
      RX#(OpFpu) rxfpu <- mkRX;
    `endif
    `ifdef bpu
      RX#(Bit#(2)) rxbpu <-mkRX;
    `endif
		TX#(PIPE3) tx <-mkTX;							// send to the memory stage;
    `ifdef rtldump
      TX#(Tuple2#(Bit#(VADDR),Bit#(32))) txinst<-mkTX;
    `endif
    `ifdef bpu
      Reg#(Tuple3#(Flush_type, Bit#(VADDR), Bit#(VADDR))) check_rpc <- mkReg(tuple3(None, 0, 0));
		  Reg#(Maybe#(Training_data#(VADDR))) wr_training_data <-mkDReg(tagged Invalid);
		  Wire#(Maybe#(Bit#(VADDR))) wr_ras_push<-mkDWire(tagged Invalid);
    `else
      Reg#(Tuple2#(Flush_type, Bit#(VADDR))) check_rpc <- mkReg(tuple2(None, 0));
    `endif
    `ifdef spfpu
      Wire#(Bit#(3)) wr_roundingmode <- mkWire();
    `endif
    `ifdef multicycle
      Ifc_alu alu <- mkalu();
      Reg#(Bool) rg_stall <- mkReg(False);
    `endif
    `ifdef supervisor
      Reg#(Bit#(XLEN)) sfence_rs1 <- mkReg(0);
      Reg#(Bit#(XLEN)) sfence_rs2 <- mkReg(0);
    `endif
    Ifc_fwding fwding <- mkfwding();
		Reg#(Bit#(1)) eEpoch <-mkReg(0);
		Reg#(Bit#(1)) wEpoch <-mkReg(0);
    Reg#(Flush_type) wr_flush_from_exe <- mkDReg(None);
    Wire#(Bool) wr_flush_from_wb <- mkDWire(False);
    Reg#(Bit#(VADDR)) wr_redirect_pc <- mkDReg(0);
		FIFOF#(MemoryReadReq#(PADDR,1)) ff_memory_read_request <-mkBypassFIFOF;
    Wire#(Bit#(1)) wr_misa_c<-mkWire();
    Wire#(Bool) wr_storebuffer_empty<-mkWire();

    rule flush_mapping(wr_flush_from_exe!=None||wr_flush_from_wb);
      fwding.flush_mapping;
    endrule

    rule execute_operation `ifdef multicycle (!rg_stall) `endif ;
      let {opmeta, opdata, metadata} = rxmin.u.first;
      let {rs1addr, rs2addr, rd_index, op3, instrtype} = opmeta;
      let {op1, op2, op4}=opdata;
      let {rd, func_cause, memaccess, word32, epochs}=metadata;
      Bit#(3) funct3=truncate(func_cause);
      Bit#(4) fn=truncateLSB(func_cause);
    `ifdef rtldump
      let instruction = rxinst.u.first;
    `endif
    `ifdef bpu
      let pred = rxbpu.u.first;
    `endif
    `ifdef spfpu
      let {rs3addr, rdtype} = rxfpu.u.first;
    `else
      Op3type rdtype = IRF;
    `endif
  
      Bit#(VADDR) pc = op3;
      if(instrtype!=TRAP)begin
        pc=(instrtype==MEMORY || instrtype==JALR)?truncate(op1):truncate(op3);
      end
      
      Bool execute_instruction = ({eEpoch, wEpoch}==epochs);
      let rs1<- fwding.read_rs1((instrtype==MEMORY || instrtype==JALR)?zeroExtend(op3):op1, 
        truncate(rs1addr) );
      let rs2<- fwding.read_rs2(op2, truncate(rs2addr) );
    `ifdef spfpu
      let rs3_imm<- fwding.read_rs3(zeroExtend(op4), rs3addr);
    `else
      let x4=op4;
    `endif

      if(verbosity>0)begin
        $display($time, "\tEXECUTE: PC: %h epochs: %b currEpochs: %b ", pc, epochs, {eEpoch, 
                                                                                          wEpoch});
        $display($time, "\tEXECUTE: pc: %h, rs1: ", pc, fshow(rs1), " rs2 ", fshow(rs2), 
                                                                " check_rpc: ", fshow(check_rpc));
      end
      let {redirect_result, redirect_pc `ifdef bpu , npc `endif }=check_rpc;
    `ifdef bpu
      Bit#(VADDR) nextpc=pc+ 4; // TODO this should +2 in case of compressed
    `endif
      Bool execute = True;
      if(instrtype==MEMORY && (memaccess == FenceI || memaccess==Fence || memaccess==Atomic) 
                                                    && !wr_storebuffer_empty)
        execute=False; // TODO instead of just store-buffer for loads will need to check if pipe is empty
      // We first check Epochs only then process the instruction
      if(!execute_instruction)begin
        `DEQRX
      `ifdef bpu
        check_rpc<= tuple3(None, ?, ?);
      `else
        check_rpc<= tuple2(None,?);
      `endif
        if(verbosity>1)
          $display($time,"\tEXECUTE: Dropping Instruction");
      end
      // here the trap could be because the misprediction from the previous jump.branch might
      // have caused the cpu to fetch an illegal instruction. So trap check should happen after the
      // redirection has been checked.
      else if(redirect_result==CheckRPC && pc!=redirect_pc `ifdef bpu || 
                                               redirect_result==CheckNPC && pc!=npc `endif )begin
        // generate flush here
        wr_flush_from_exe<=CheckRPC;
        if(redirect_result==CheckRPC)begin
          if(verbosity>0)
            $display($time, "\tEXECUTE: Raising a flush due to pc mismatch. New PC: %h", 
                                                                                    redirect_pc);
          wr_redirect_pc<= redirect_pc;
        end
        `ifdef bpu
          // incase a branch predictor is involved we need to check if the next pc is redirected
          // or is pc+ 4?
          else begin
            wr_redirect_pc<= npc;
            if(verbosity>0)
              $display($time, "\tEXECUTE: Raising a flush due to pc mismatch. New1 PC: %h", npc);
          end
        `endif
        eEpoch<= ~eEpoch;
        `DEQRX
      end
      else if(instrtype!=TRAP && execute)begin

        if(rs1 matches tagged Present .x1 &&& rs2 matches tagged Present .x2 
                                `ifdef spfpu &&& rs3_imm matches tagged Present .x4 `endif )begin
          Bit#(ELEN) new_op1=x1;
          Bit#(VADDR) t3=op3;
          // TODO: here we need to exchange op1 (which has been fetched from the prf) and op3 in
          // case of JALR. See if this can be avoided.
          if(instrtype==JALR || instrtype==MEMORY)begin 
            new_op1=op1;
            t3=truncate(x1);
          end
          `ifdef supervisor
            sfence_rs1<=x1;
            sfence_rs2<=x2;
          `endif
          `ifdef multicycle
            let {done, cmtype, out, addr, cause, redirect} <- alu.get_inputs(fn, new_op1, x2, t3, 
                truncate(x4), instrtype, funct3, memaccess, word32 `ifdef bpu ,pred `endif ,
                wr_misa_c, truncate(pc));
          `else
            let {cmtype, out, addr, cause, redirect} = fn_alu(fn, new_op1, x2, t3, truncate(x4), 
                      instrtype, funct3, memaccess, word32 `ifdef bpu ,pred `endif , wr_misa_c,
                    truncate(pc));
            Bool done=True;
          `endif
          if(verbosity>1)begin
            $display($time, "\tEXECUTE: cmtype: ", fshow(cmtype), " out: %h addr: %h trap:", out,
                 addr, cause, " redirect ", fshow(redirect));
            $display($time, "\tEXECUTE: x1: %h,  x2: %h,  op3: %h, x4: %h", new_op1, x2, t3, x4);
            $display($time, "\tEXECUTE: wr_storebuffer_empty: %b",wr_storebuffer_empty);
          end

          if(done)begin
            if(execute) begin
            `DEQRX

          `ifdef bpu
            // in case of bimodal branch predictor we need to train the bpu and write new status
            // bits. The following logic calculates the next set of status bits depending on
            // whether the branch was actually taken or not.
            if(instrtype==JAL || instrtype==JALR)
              pred=3;
		        else if(out[0]==1 &&& instrtype==BRANCH && cmtype!=TRAP)begin
		        	if(pred<3)
		        		pred=pred+1;
		        end
		        else begin
		        	if(pred>0)
		        		pred=pred-1;
		        end

            // if previous instruction was a branch or jump. Need to capture the next pc value to
            // ensure prediction was correct or not.
            check_rpc<= tuple3(redirect, addr, nextpc);
            Bool perform_training=(instrtype==BRANCH)|| (instrtype==JAL) || ((rd != 'b00101 ||
                                                              rd!='b00001) && instrtype==JALR);
            if(perform_training && cmtype!=None)
              wr_training_data<= tagged Valid Training_data{pc:pc, branch_address:addr, state:pred};

            // the following logic pushes the new return address on top of the RAS stack. 
            if((instrtype==JALR || instrtype==JAL)  &&& rd matches 'b00?01 && cmtype!=TRAP)
              wr_ras_push<=tagged Valid nextpc; 
          `else
            check_rpc<= tuple2(redirect, addr);
          `endif
            Bit#(1) nanboxing=pack(cmtype==MEMORY && funct3[1:0]==2 && rdtype==FRF);
            if(cmtype==REGULAR)
              fwding.fwd_from_exe(out, rd_index);
            if(cmtype==MEMORY && (memaccess==Load `ifdef atomic || memaccess==Atomic `endif ))begin
              ff_memory_read_request.enq(tuple3(truncate(addr), epochs[0], funct3));
            end
            Bit#(9) smeta1 = {pack(rdtype),rd,rd_index};
            Bit#(20) mmeta = {fn,nanboxing,funct3,pack(memaccess),smeta1};
            Tbad_Maddr_Rmeta2_Smeta2 tple1 = 
              case(cmtype)
                REGULAR: 0;
                default: zeroExtend(addr); 
              endcase;

            Mdata_Rrdvalue_Srs1 tple2 =
              case(cmtype)
                  MEMORY: x2;
                  REGULAR: out;
                  SYSTEM_INSTR: if(funct3[2]==1) zeroExtend(x4[16:12]); else out;
                  default:0;
              endcase;
    
            Tpc_Mpc tple3 = pc;
            Tcause_Mmeta_Rmeta1_Smeta1_epoch tple4 = 
              case(cmtype)
                TRAP: zeroExtend({cause,epochs[0]});
                MEMORY: zeroExtend({mmeta,epochs[0]});
                default: zeroExtend({smeta1,epochs[0]});
              endcase;
            PIPE3 pipedata= tuple5(cmtype, tple1,tple2,tple3,tple4);

	        `ifdef simulate
	      	  if(instrtype==BRANCH && cmtype!=TRAP)
	      		  out=0;
  	      `endif

            tx.u.enq(pipedata);
          `ifdef rtldump
            txinst.u.enq(tuple2(pc,instruction));
          `endif
            // if the operation is a multicycle one,  then go to stall state.
          end
        end
          else begin
          `ifdef bpu
            check_rpc<= tuple3(None, addr, nextpc);
          `else
            check_rpc<= tuple2(None, 0);
          `endif
            rg_stall<= True;
          end
        end
      end
      else if(instrtype==TRAP) begin
        `DEQRX
        Bit#(XLEN) res=signExtend(pc); // badaddress
      `ifdef bpu
        check_rpc<= tuple3(None, 0, nextpc);
      `else
        check_rpc<= tuple2(None, 0);
      `endif
        PIPE3 pipedata = tuple5(TRAP, truncate(op1), ?, pc, zeroExtend({func_cause,epochs[0]})); 
        tx.u.enq(pipedata);
      `ifdef rtldump
        txinst.u.enq(tuple2(pc,instruction));
      `endif
        // else you need to simply drop the execution since epochs have changed.
      end
    endrule
  `ifdef multicycle
    rule capture_stalled_output(rg_stall);
      let {opmeta, opdata, metadata} = rxmin.u.first;
      let {rs1addr, rs2addr, rd_index, op3, instrtype} = opmeta;
      let {op1, op2, op4}=opdata;
      let {rd, func_cause, memaccess, word32, epochs}=metadata;
    `ifdef rtldump
      let instruction = rxinst.u.first;
    `endif
    `ifdef bpu
      let pred = rxbpu.u.first;
    `endif
    `ifdef spfpu
      let {rs3addr, rdtype} = rxfpu.u.first;
    `else
      Op3type rdtype = IRF;
    `endif
      Bit#(VADDR) pc = (instrtype==MEMORY || instrtype==JALR)?truncate(op1):truncate(op3);
      let {cmtype, out, addr, cause, redirect} <- alu.delayed_output;
      Bit#(5) fflags=truncate(addr);
      if(verbosity>0)begin
        $display($time,"\tEXECUTE: Got delayed output from ALU: cmtype:",fshow(cmtype)," out: ", 
            fshow(out)," trap: ", cause);
      end
        
      PIPE3 pipedata = tuple5(REGULAR, zeroExtend(fflags), out, pc, 
                              zeroExtend({pack(rdtype),rd,rd_index,epochs[0]}) ); 
      Bool execute_instruction = ({eEpoch, wEpoch}==epochs);

      if(execute_instruction)begin
      `ifdef rtldump
        txinst.u.enq(tuple2(pc,instruction));
      `endif
        tx.u.enq(pipedata);
        fwding.fwd_from_exe(out, rd_index);
      end
      rg_stall<= False;
      `DEQRX
    endrule
  `endif
		interface rx_min = rxmin.e;
  `ifdef rtldump
    interface rx_inst=rxinst.e;
  `endif
  `ifdef spfpu
    interface rx_fpu=rxfpu.e;
  `endif
  `ifdef bpu
    interface rx_bpu=rxbpu.e;
  `endif
		interface tx_out = tx.e;
  `ifdef rtldump
    interface tx_inst=txinst.e;
  `endif
    method Action update_wEpoch;
      wEpoch<= ~wEpoch;
      wr_flush_from_wb<= True;
    endmethod
    method flush_from_exe=tuple2(wr_flush_from_exe, wr_redirect_pc);
    interface fwd_from_mem= interface Put
      method Action put (Tuple2#(Bit#(ELEN), Bit#(TLog#(PRFDEPTH))) inputs);
        let {d, index}=inputs;
        fwding.fwd_from_mem(d, index);
      endmethod
    endinterface;
    method Action invalidate_index(Bit#(TLog#(PRFDEPTH)) ind)=fwding.invalidate_index(ind);
  `ifdef bpu
  	method training_data=wr_training_data;
	  method ras_push=wr_ras_push;
  `endif
  `ifdef spfpu
    method Action roundingmode(Bit#(3) rm);
      wr_roundingmode<= rm;
    endmethod
  `endif
		interface memory_read_request = interface Get 
			method ActionValue#(MemoryReadReq#(PADDR,1)) get ;
				ff_memory_read_request.deq;
				return ff_memory_read_request.first;
			endmethod
		endinterface;
  `ifdef supervisor
    method sfence_operands= tuple2(sfence_rs1,sfence_rs2);
  `endif
    method Action csr_misa_c (Bit#(1) m);
      wr_misa_c <= m;
    endmethod
    method Action storebuffer_empty(Bool e);
      wr_storebuffer_empty<=e;
    endmethod
  endmodule
endpackage
