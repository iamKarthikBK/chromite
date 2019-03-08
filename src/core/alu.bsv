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

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------------------------

Module name: Riscv_arithmetic_unit.  
author name: Neel Gala, Aditya Mathur 
Email id: neelgala@gmail.com

This module is the arithmetic execution unit for the RISCV ISA. 
It is a 64 bit implementation which is named as RV64.  The instruction with a "W" are RV64 
instructions which ignore the upper 32 bits and operate on the lower 32 bits.  
The arithmetic unit is implemented as a single case statement where the instruction bits define 
the various operations to be executed.

This module contains single cycle MUL instruction execution.

*/

package alu;

  `ifdef muldiv
    `define multicycle True
  `endif
  `ifdef spfpu
    `define multicycle True
  `endif
  
  `ifdef muldiv
    `ifdef spfpu
      `define muldivfpu_both True
    `endif
  `endif
  
  `ifdef muldiv
    `ifndef spfpu
      `define only_muldiv True
    `endif
  `endif

  `ifndef muldiv
    `ifdef spfpu
      `define only_spfpu True
    `endif
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

	(*noinline*)
	function ALU_OUT fn_alu (Bit#(4) fn, Bit#(XLEN) op1, Bit#(XLEN) op2, Bit#(`vaddr) op3, 
      Bit#(`vaddr) imm_value, Instruction_type inst_type, Funct3 funct3, Access_type memaccess, 
      Bool word32 , Bit#(1) misa_c, Bit#(2) lpc `ifdef branch_speculation 
        , Bit#(`vaddr) nextpc `endif );

	  /*========= Perform all the arithmetic ===== */
	  // ADD* ADDI* SUB* 
    Bit#(XLEN) inv = signExtend(fn[3]);
	  let inv_op2=op2^inv;
	  let op1_xor_op2=op1^inv_op2;
    let op1_add=op1;
    let op2_add=inv_op2;
    let adder_output=op1+ inv_op2+ zeroExtend(fn[3]);
	  // SLT SLTU
	  Bit#(1) compare_out=fn[0]^(
						(fn[3]==0)?pack(op1_xor_op2==0):
						(op1[valueOf(XLEN)-1]==op2[valueOf(XLEN)-1])?adder_output[valueOf(XLEN)-1]:
						(fn[1]==1)?op2[valueOf(XLEN)-1]:op1[valueOf(XLEN)-1]);
	  // SLL SRL SRA
    //word32 is bool, shift_amt is used to describe the amount of shift
  `ifdef RV64
	  Bit#(6) shift_amt={((!word32)?op2[5]:0), op2[4:0]};
  `else
	  Bit#(5) shift_amt=op2[4:0];
  `endif

	  `ifdef RV64
	  	Bit#(TDiv#(XLEN, 2)) upper_bits=word32?signExtend(fn[3]&op1[31]):op1[63:32];
	  	Bit#(XLEN) shift_inright={upper_bits, op1[31:0]};//size of 64 bit
	  `else
	  	Bit#(XLEN) shift_inright=zeroExtend(op1[31:0]);//size of 32bit
	  `endif

	  let shin = (fn==`FNSR || fn==`FNSRA)?shift_inright:reverseBits(shift_inright);
	  Int#(TAdd#(XLEN, 1)) t=unpack({(fn[3]&shin[valueOf(XLEN)-1]), shin});
	  Int#(XLEN) shift_r=unpack(pack(t>>shift_amt)[valueOf(XLEN)-1:0]);//shift right by shift_amt
	  let shift_l=reverseBits(pack(shift_r));//shift left
	  Bit#(XLEN) shift_output=((fn==`FNSR || fn==`FNSRA)?pack(shift_r):0) | 
                            ((fn==`FNSL)?pack(shift_l):0); 

	  // AND OR XOR
	  let logic_output=	((fn==`FNXOR || fn==`FNOR)?op1_xor_op2:0) |
	  						((fn==`FNOR || fn==`FNAND)?op1&op2:0);
	  let shift_logic=zeroExtend(pack(fn==`FNSEQ || fn==`FNSNE || fn >= `FNSLT)&compare_out) |
	  					 logic_output|shift_output;

		Bit#(XLEN) final_output=(fn==`FNADD || fn==`FNSUB)?adder_output:shift_logic;
    `ifdef RV64
  		if(word32)
	  		 final_output=signExtend(final_output[31:0]);
    `endif

  `ifdef branch_speculation
    if(inst_type==BRANCH && final_output[0]==0)
      imm_value=4;
  `endif

		Bit#(`vaddr) effective_address=op3+ truncate(imm_value);

    if(inst_type==JALR)
      effective_address[0]=0;

    Bit#(6) cause=0;
    Bool exception=False;
	  if( (inst_type==JALR || inst_type==JAL || (inst_type==BRANCH && final_output[0]==1)) && 
        effective_address[1]!=0 && misa_c==0 ) begin
	  	exception=True;
      cause=`Inst_addr_misaligned ;
    end
    if((memaccess!=Fence && memaccess!=FenceI) && inst_type==MEMORY && ((funct3[1:0]==1 && effective_address[0]!=0) || 
                            (funct3[1:0]==2 && effective_address[1:0]!=0)
             `ifdef RV64 || (funct3[1:0]==3 && effective_address[2:0]!=0) `endif ))begin
      cause = memaccess==Load? `Load_addr_misaligned: `Store_addr_misaligned;
      exception=True;
    end

    Bool flush=False;
  `ifndef branch_speculation
    if((inst_type==BRANCH && final_output[0]==1) || inst_type==JALR || inst_type==JAL )
	  	flush=True;
  `else
    if((inst_type==BRANCH  || inst_type==JALR || inst_type==JAL) && nextpc!=effective_address)
	    flush=True;
  `endif
    PreCommit_type committype = REGULAR;
    if(exception)
      committype=TRAP;
    else if(inst_type==MEMORY)
      committype = MEMORY;
    else if(inst_type == SYSTEM_INSTR)
      committype = SYSTEM_INSTR;
	
	  Bit#(`vaddr) effaddr_csrdata = (inst_type==SYSTEM_INSTR)? 
                                                          zeroExtend({lpc,imm_value[11:0],funct3}): 
                                                          effective_address;

	  return tuple5(committype, zeroExtend(final_output), effaddr_csrdata, cause, flush);
	endfunction


`ifdef multicycle
  interface Ifc_alu;
	method ActionValue#(Tuple2#(Bool, ALU_OUT)) get_inputs ( Bit#(4) fn, Bit#(ELEN) op1, Bit#(ELEN) op2, Bit#(`vaddr) op3, 
        `ifdef spfpu Bit#(ELEN) imm_value `else Bit#(`vaddr) imm_value `endif , 
        Instruction_type inst_type, Funct3 funct3, Access_type memaccess, Bool word32, 
        Bit#(1) misa_c, Bit#(2) lpc `ifdef branch_speculation ,Bit#(`vaddr) nextpc `endif );
		method ActionValue#(ALU_OUT) delayed_output;
  endinterface:Ifc_alu

  `ifdef muldiv
    `ifdef spfpu
      typedef enum {None, WaitMulDiv, WaitFPU} WaitState deriving (Bits,Eq,FShow);
    `endif
  `endif

  (*synthesize*)
  module mkalu(Ifc_alu);
    let verbosity = `VERBOSITY ;
    `ifdef muldiv
      Ifc_muldiv muldiv <- mkmuldiv;
    `endif
    `ifdef spfpu
      Ifc_fpu fpu <- mkfpu();
    `endif
    `ifdef muldiv
      `ifdef spfpu
        Reg#(WaitState) rg_wait <- mkReg(None);
        Wire#(ALU_OUT) wr_delayed_output <- mkWire();
        rule capture_delayed_fpuoutput(rg_wait==WaitFPU);
          if(verbosity>1)
            $display($time,"\tALU: Sending delayed output from FPU");
          let fpu_result<-fpu.get_result;
          wr_delayed_output<= tuple5(REGULAR, fpu_result.final_result, zeroExtend(fpu_result.fflags), 
              0, False);
          rg_wait<=None;
        endrule
        rule capture_delayed_muldivputput(rg_wait==WaitMulDiv);
          if(verbosity>1)
            $display($time,"\tALU: Sending delayed output from MULDIV");
          let res<-muldiv.delayed_output;
          wr_delayed_output<=res;
          rg_wait<=None;
        endrule
      `endif
    `endif

	method ActionValue#(Tuple2#(Bool, ALU_OUT)) get_inputs ( Bit#(4) fn, Bit#(ELEN) op1, Bit#(ELEN) op2, Bit#(`vaddr) op3, 
        `ifdef spfpu Bit#(ELEN) imm_value `else Bit#(`vaddr) imm_value `endif , 
        Instruction_type inst_type, Funct3 funct3, Access_type memaccess, Bool word32, 
        Bit#(1) misa_c, Bit#(2) lpc `ifdef branch_speculation , Bit#(`vaddr) nextpc `endif );
      `ifdef muldiv
        if(inst_type==MULDIV)begin
          let product <- muldiv.get_inputs(truncate(op1), truncate(op2), funct3 `ifdef RV64 , word32 `endif );
          `ifdef muldiv
            `ifdef spfpu
              if(!tpl_1(product))
                rg_wait<=WaitMulDiv;
            `endif
          `endif
          return product;
        end
        else
      `endif
      `ifdef spfpu
        if(inst_type==FLOAT)begin
          `ifndef dpfpu
            word32=True;
          `endif
          fpu._start(op1, op2, imm_value, fn, imm_value[11:5], funct3, imm_value[1:0],word32);
          `ifdef muldiv
            `ifdef spfpu
                rg_wait<=WaitFPU;
            `endif
          `endif
          return tuple2(False, tuple5(REGULAR, '1, 0, 0, False));
        end
        else
      `endif
          return tuple2(True, fn_alu(fn, truncate(op1), truncate(op2), truncate(op3), truncate(imm_value), inst_type, funct3, 
                        memaccess, word32, misa_c, lpc `ifdef branch_speculation , nextpc `endif ));
    endmethod
    `ifdef muldiv
      `ifndef spfpu
      	method delayed_output=muldiv.delayed_output;
      `endif
    `endif
    `ifdef only_spfpu
      `ifndef muldiv
        method ActionValue#(ALU_OUT) delayed_output;
          let fpu_result<-fpu.get_result;
          return tuple5(REGULAR, fpu_result.final_result, zeroExtend(fpu_result.fflags), 
              tagged None, False);
        endmethod
      `endif
    `endif
    `ifdef muldiv
      `ifdef spfpu
        method ActionValue#(ALU_OUT) delayed_output;
          return wr_delayed_output;
        endmethod
      `endif
    `endif
  endmodule
`endif
endpackage:alu
