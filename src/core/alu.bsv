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

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Module name : Riscv_arithmetic_unit.  
author name : Neel Gala, Aditya Mathur 
Email id : neelgala@gmail.com

This module is the arithmetic execution unit for the RISCV ISA. 
It is a 64 bit implementation which is named as RV64.  The instruction with a "W" are RV64 
instructions which ignore the upper 32 bits and operate on the lower 32 bits.  
The arithmetic unit is implemented as a single case statement where the instruction bits define 
the various operations to be executed.


*/

package alu;

  import Vector :: *;

  `ifdef muldiv
    `define multicycle True
  `endif
  `ifdef spfpu
    `define multicycle True
  `endif

  `ifdef muldiv
    `ifdef muldiv_fpga 
      import muldiv_fpga::*; 
    `elsif RV64
      import muldiv_asic::*;
    `else
      import muldiv_asic_32bit::*;
    `endif
  `endif

  `ifdef spfpu
    import fpu::*;
  `endif
  
  import common_types::*;
  `include "common_params.bsv"

`ifdef triggers
  function Tuple2#(Bool, Bit#(`causesize)) check_for_triggers(
                                                        Vector#(`trigger_num, TriggerData) tdata1, 
                                                        Vector#(`trigger_num, Bit#(XLEN)) tdata2,
                                                        Vector#(`trigger_num, Bool) tenable, 
                                                        Bit#(`vaddr) address, Bit#(XLEN) data, 
                                                        Access_type  memaccess, 
                                                        Privilege_mode prv);

    Bool trap = False;
    Bool chain = False;
    Bit#(`causesize) cause = `Breakpoint;
    Bit#(XLEN) compare_value ;
    for(Integer i=0; i<`trigger_num; i=i+1)begin
      if(tenable[i] &&& ((!trap && !chain) || (chain && trap)) 
                    &&& tdata1[i] matches tagged MCONTROL .mc 
                    &&& ((mc.load == 1 && memaccess == Load && mc.select == 0) || 
                         (mc.store == 1 && memaccess == Store)) ) begin
        Bit#(XLEN) trigger_compare = tdata2[i];
        if(mc.select == 0)
          compare_value = address;
        else
          compare_value = data;
        if(mc.matched == 0)begin
          if(trigger_compare == compare_value)
            trap = True;
          else if(chain)
            trap = False;
        end
        if(mc.matched == 2)begin
          if(compare_value >= trigger_compare)
            trap = True;
          else if(chain)
            trap = False;
        end
        if(mc.matched == 3)begin
          if(compare_value < trigger_compare)
            trap = True;
          else if(chain)
            trap = False;
        end
      `ifdef debug
        if(trap && mc.action_ == 1)begin
          cause = `HaltTrigger;
          cause[`causesize - 1] = 1;
        end
      `endif
        chain = unpack(mc.chain);
      end
    end

    return tuple2(trap, cause);
  endfunction
`endif

	(*noinline*)
	function ALU_OUT fn_alu (Bit#(4) fn, Bit#(XLEN) op1, Bit#(XLEN) op2, Bit#(`vaddr) op3, 
                           Bit#(`vaddr) imm_value, Instruction_type inst_type, Funct3 funct3, 
                           Access_type memaccess `ifdef RV64 , Bool word32 `endif 
                           ,Bit#(1) misa_c, Bit#(2) lpc
                         `ifdef triggers
                           ,Vector#(`trigger_num, TriggerData) tdata1
                           ,Vector#(`trigger_num, Bit#(XLEN))  tdata2
                           ,Vector#(`trigger_num, Bool)        tenable
                           ,Privilege_mode prv
                         `endif
                         `ifdef bpu , Bit#(`vaddr) nextpc
                            `ifdef compressed ,Bool comp `endif 
                         `endif );

	  /* ---------------------------- Perform all the arithmetic -------------------------------- */
	  // ADD * ADDI * SUB* 
    Bit#(XLEN) inv = signExtend(fn[3]);
	  let inv_op2 = op2^inv;
	  let op1_xor_op2 = op1^inv_op2;
    let op1_add = op1;
    let op2_add = inv_op2;
    let adder_output = op1 + inv_op2 + zeroExtend(fn[3]);
    // ---------------------------------------------------------------------------------------- //

    // ------------------------------- comparison based operations ---------------------------- //
	  // SLT SLTU
	  Bit#(1) compare_out = fn[0]^(
						(fn[3] == 0) ? pack(op1_xor_op2 == 0):
						(op1[valueOf(XLEN) - 1] == op2[valueOf(XLEN) - 1]) ? adder_output[valueOf(XLEN) - 1]:
						(fn[1] == 1) ? op2[valueOf(XLEN) - 1] : op1[valueOf(XLEN) - 1]);
    // ---------------------------------------------------------------------------------------- //

    // ----------------------------- Shift based operations ----------------------------------- //
	  // SLL SRL SRA
    //word32 is bool, shift_amt is used to describe the amount of shift
  `ifdef RV64
	  Bit#(6) shift_amt={((!word32) ? op2[5] : 0), op2[4 : 0]};
		Bit#(TDiv#(XLEN, 2)) upper_bits = word32 ? signExtend(fn[3] & op1[31]) : op1[63 : 32];
		Bit#(XLEN) shift_inright={upper_bits, op1[31 : 0]};//size of 64 bit
  `else
	  Bit#(5) shift_amt = op2[4 : 0];
		Bit#(XLEN) shift_inright = zeroExtend(op1[31 : 0]);//size of 32bit
  `endif
	  let shin = (fn==`FNSR || fn==`FNSRA) ? shift_inright : reverseBits(shift_inright);
	  Int#(TAdd#(XLEN, 1)) t = unpack({(fn[3] & shin[valueOf(XLEN) - 1]), shin});
	  Int#(XLEN) shift_r = unpack(pack(t>>shift_amt)[valueOf(XLEN) - 1 : 0]);//shift right by shift_amt
	  let shift_l = reverseBits(pack(shift_r));//shift left
	  Bit#(XLEN) shift_output=((fn==`FNSR || fn==`FNSRA) ? pack(shift_r) : 0) | 
                            ((fn==`FNSL) ? pack(shift_l) : 0); 
    // ---------------------------------------------------------------------------------------- //

    // ----------------------------- Logical operations --------------------------------------- //
	  // AND OR XOR
	  let logic_output=	((fn==`FNXOR || fn==`FNOR) ? op1_xor_op2 : 0) |
	  						((fn==`FNOR || fn==`FNAND) ? op1 & op2 : 0);
	  let shift_logic = zeroExtend(pack(fn==`FNSEQ || fn==`FNSNE || fn >= `FNSLT) & compare_out) |
	  					 logic_output|shift_output;
    // ---------------------------------------------------------------------------------------- //

    // ----------------------------- Mux for final output ------------------------------------ //
		Bit#(XLEN) final_output = (fn == `FNADD || fn == `FNSUB) ? adder_output : shift_logic;
    `ifdef RV64
  		if(word32)
	  		 final_output = signExtend(final_output[31 : 0]);
    `endif
    // ---------------------------------------------------------------------------------------- //

  `ifdef bpu
		Bool taken=(final_output[0] == 1);
  `endif
    
    // calculate the effective address for Load / Store / Atomics / Branches / Jumps
    Bit#(`vaddr) effective_address = op3 + truncate(imm_value);

    // JALR expects the lower address bit to be always zero
    if(inst_type == JALR)
      effective_address[0] = 0;

    // ------------------------- Exception detection ------------------------------------------- //
    Bit#(`causesize) cause=`Load_addr_misaligned;
    Bool exception = False;
	  if( (inst_type == JALR || inst_type == JAL || (inst_type == BRANCH && compare_out == 1))
        &&  effective_address[1] != 0 && misa_c == 0 ) begin
	  	exception = True;
      cause=`Inst_addr_misaligned ;
    end
    if((memaccess != Fence && memaccess != FenceI) && 
        inst_type == MEMORY && (   (funct3[1 : 0] == 1 && effective_address[0] != 0)
                              || (funct3[1 : 0] == 2 && effective_address[1 : 0] != 0)
                  `ifdef RV64 || (funct3[1 : 0] == 3 && effective_address[2 : 0] != 0) `endif ) )begin
      cause = memaccess == Load ? cause: `Store_addr_misaligned;
      exception = True;
    end
    // ----------------------------------------------------------------------------------------- //
 
    // --------------------------- Check for redirection -------------------------------------- //
    Bool flush = False;

  `ifndef bpu
    if((inst_type == BRANCH && final_output[0] == 1) || inst_type == JALR || inst_type == JAL )
	  	flush = True;
  `else
    Bit#(`vaddr) incr_value =`ifdef compressed comp ? 2: `endif 4;
    Bit#(`vaddr) compare_nextpc = effective_address;
    if(inst_type == BRANCH && compare_out == 0)begin
      compare_nextpc = op3 + incr_value;
    end
    if( (inst_type == BRANCH  || inst_type == JALR || inst_type == JAL ) 
        && nextpc != compare_nextpc )begin
	    flush = True;
    end
  `endif
    // --------------------------------------------------------------------------------------- //

    // ------------------------ check for load/store triggers ---------------------------------//
  `ifdef triggers
    let {trig_trap, trig_cause} = check_for_triggers(tdata1, tdata2, tenable, 
                                                      effective_address, op2, memaccess, prv);
    if(inst_type == MEMORY && trig_trap)begin
      exception = True;
      cause = trig_cause;
    end
  `endif
   
    PreCommit_type committype = REGULAR;
    if(exception)
      committype = TRAP;
    else if(inst_type == MEMORY)
      committype = MEMORY;
    else if(inst_type == SYSTEM_INSTR)
      committype = SYSTEM_INSTR;

    return ALU_OUT{done           : True,  
                   cmtype         : committype,  
                   aluresult      : zeroExtend(final_output),  
                   effective_addr : effective_address, 
                   cause          : cause, 
                   redirect       : flush
                `ifdef bpu
                   ,branch_taken  : taken
                   ,redirect_pc   : compare_nextpc
                `endif };
	endfunction


  interface Ifc_alu;
    // method to receive inputs from the execute stage once the operands are available
	  method ActionValue#(ALU_OUT) inputs (Bit#(4) fn, Bit#(ELEN) op1, Bit#(ELEN) op2, 
         Bit#(`vaddr) op3, Bit#(TMax#(`vaddr,FLEN)) imm_value, Instruction_type inst_type, Funct3 funct3, 
         Access_type memaccess `ifdef RV64 , Bool word32 `elsif dpfpu , Bool word32 `endif ,
         Bit#(1) misa_c, Bit#(2) lpc  
       `ifdef triggers
         ,Vector#(`trigger_num, TriggerData) tdata1
         ,Vector#(`trigger_num, Bit#(XLEN))  tdata2
         ,Vector#(`trigger_num, Bool)        tenable
         ,Privilege_mode prv
       `endif
       `ifdef bpu 
         , Bit#(`vaddr) nextpc `ifdef compressed ,Bool comp `endif 
       `endif );
  `ifdef multicycle
    // method to send the output from the muldiv or fpu when outputs are ready
		method ActionValue#(ALU_OUT) delayed_output;
  `endif

  //Read csr_reg to check if arith_exception is enabled
   `ifdef arith_trap
      method Action rd_arith_excep_en(Bit#(1) arith_en);
   `endif
  endinterface : Ifc_alu

  `ifdef multicycle
    typedef enum {None `ifdef muldiv , WaitMulDiv `endif
                       `ifdef spfpu  , WaitFPU    `endif } WaitState deriving (Bits,Eq,FShow);
  `endif

  (*synthesize*)
`ifdef spfpu
  (*conflict_free="capture_delayed_fpuoutput, inputs"*)
`endif
`ifdef muldiv
  (*conflict_free="capture_delayed_muldivputput, inputs"*)
`endif
  module mkalu(Ifc_alu);
    // ------------------------ Start Instantiations ------------------------------------------- //

      let output_unavail = ALU_OUT{done : False, cmtype : ?, aluresult : ?, effective_addr : ?,
                                 cause : ?, redirect : ?
                              `ifdef bpu
                                 ,branch_taken : ?, redirect_pc : ? `endif };

    // instantiate mul - div module if M extension enabled.
    `ifdef muldiv
      Ifc_muldiv muldiv <- mkmuldiv;
    `endif

    // instantiate fpu if F / D extension enabled
    `ifdef spfpu
      Ifc_fpu fpu <- mkfpu();
    `endif
    `ifdef multicycle
      Reg#(WaitState) rg_wait <- mkReg(None);
      Wire#(ALU_OUT) wr_delayed_output <- mkWire();
    `endif


      // ---------------------------------------------------------------------------------------- //
    
      // ------------------------------------------ rules --------------------------------------- //
    `ifdef spfpu
      // RuleName : capture_delayed_fpuoutput
      // Explicit Conditions : rg_wait == WaitFPU
      // Implicit Conditions : FPU output is available;
      // Descriptions : This rule will collect the outputs from floating point unit
      rule capture_delayed_fpuoutput(rg_wait == WaitFPU);
        let fpu_result <- fpu.get_result;
        wr_delayed_output<=  ALU_OUT{done           : True,  
                                     cmtype         : fpu_result.commit_type,   
                                     aluresult      : fpu_result.final_result,  
                                     effective_addr : zeroExtend(fpu_result.fflags), 
                                     cause          : fpu_result.cause,
                                     redirect       : False
                                  `ifdef bpu
                                     ,branch_taken  : False
                                     ,redirect_pc   : ?
                                  `endif };
        rg_wait <= None;
      endrule
    `endif

    `ifdef muldiv
      // RuleName : capture_delayed_muldivputput
      // Explicit Conditions : rg_wait == WaitMulDiv
      // Implicit Conditions : Multiplier output is available;
      // Descriptions : This rule will collect the outputs from the muldiv unit
      rule capture_delayed_muldivputput(rg_wait == WaitMulDiv);
        let res <- muldiv.delayed_output;
        wr_delayed_output <= res;
        rg_wait <= None;
      endrule
    `endif

    // MethodName : inputs
    // Explicit Conditions : None 
    // Implicit Conditions : FPU and Muldiv units both available
    // Descriptions : This rule will send the inputs either to muldiv unit, fpu unit or the alu unit
    // depending on the instruction type. In case M, F, D extensions are all disabled then this
    // method acts as a single cycle ALU
	  method ActionValue#(ALU_OUT) inputs (Bit#(4) fn, Bit#(ELEN) op1, Bit#(ELEN) op2, 
         Bit#(`vaddr) op3, Bit#(TMax#(`vaddr,FLEN)) imm_value, Instruction_type inst_type, Funct3 funct3, 
         Access_type memaccess `ifdef RV64 , Bool word32 `elsif dpfpu , Bool word32 `endif ,
         Bit#(1) misa_c, Bit#(2) lpc  
       `ifdef triggers
         ,Vector#(`trigger_num, TriggerData) tdata1
         ,Vector#(`trigger_num, Bit#(XLEN))  tdata2
         ,Vector#(`trigger_num, Bool)        tenable
         ,Privilege_mode prv
       `endif
       `ifdef bpu 
         , Bit#(`vaddr) nextpc `ifdef compressed ,Bool comp `endif 
       `endif );
      
      // send inputs to the muldiv unit and send a stall signal to the execute stage.
      `ifdef muldiv
        if(inst_type == MULDIV)begin
          let product <- muldiv.get_inputs(truncate(op1), truncate(op2), funct3 
                                            `ifdef RV64 , word32 `endif );
          if(!product.done)
            rg_wait <= WaitMulDiv; 

          return product;// TODO in case of single cycle mul return output here itself
        end
        else
      `endif

      // send inputs to the float unit and send a stall signal to the execute stage.
      `ifdef spfpu
        if(inst_type == FLOAT)begin
          `ifndef dpfpu
            Bool word32 = True;
          `endif
          fpu._start(op1, op2, imm_value, fn, imm_value[11 : 5], funct3, imm_value[1 : 0],word32);
          rg_wait <= WaitFPU;
          return output_unavail;
        end
        else
      `endif
        // send inputs to the alu function and return the output of the same function
          return fn_alu(fn, truncate(op1), truncate(op2), truncate(op3), truncate(imm_value), 
                        inst_type, funct3, memaccess, `ifdef RV64 word32, `endif misa_c, lpc 
                     `ifdef triggers
                       ,tdata1 ,tdata2 ,tenable ,prv
                     `endif
                     `ifdef bpu , nextpc `ifdef compressed ,comp `endif `endif );
    endmethod

  `ifdef multicycle
    // MethodName : delayed_outputs
    // Explicit Conditions : None 
    // Implicit Conditions : wr_delayed_output is written
    // Descriptions : This method will respond to the execute stage with the output either from the
    // muldiv unit or the floating point unit.
    method ActionValue#(ALU_OUT) delayed_output;
      return wr_delayed_output;
    endmethod
  `endif


 `ifdef arith_trap
    method  Action rd_arith_excep_en(Bit#(1) arith_en);
    `ifdef muldiv
      muldiv.rd_arith_excep_en(arith_en);
    `endif
    `ifdef spfpu
      fpu.rd_arith_excep_en(arith_en);
    `endif
    endmethod
 `endif


  endmodule
endpackage : alu
