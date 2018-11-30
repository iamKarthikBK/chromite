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
This module primarily holds the combo functions to decode the instructions and provide
various meta data to fetch operands and execute on them.

The module also contains functions to check if a particular csr access is valid or illegal

Interrupt checks are also performed in this package.

The decoder outputs minimal data required to peform operand fetch and executions in the later stage.

--------------------------------------------------------------------------------------------------
*/
package decoder;
  
  // pacakge imports from project
  import common_types::*;
  import BUtils::*;
  `include "common_params.bsv"
	  
  function Bool address_valid(Bit#(12) csr_address);
		case(csr_address[11:8])
      `ifdef user
        'h0: begin
          if(csr_address[7:0]>'h00 && csr_address[7:0]<'h4)begin 
            `ifndef spfpu 
              return False;
            `else
              return True;
            `endif
          end
          else if (csr_address[7:0]=='h00 || csr_address[7:0]=='h4 || csr_address[7:0]=='h5 ||
          (csr_address[7:0]>='h40 && csr_address[7:0]<= 'h44)) begin
            `ifndef usertraps  
              return False;
            `else
              return True;
            `endif
          end
          else if(csr_address[7:0]>'h5 && csr_address[7:0]<'h40)
            return False;
          else
            return True;
        end
      `endif
      `ifdef supervisor
        'h1: begin
          if((csr_address[7:0]>'h6 && csr_address[7:0]<'h40) ||
             (csr_address[7:0]>'h44 && csr_address[7:0]<'h80) ||
             (csr_address[7:0]>'h80))
            return False;
          else
            return True;
        end
      `endif
			'h3: begin // machine read-write registers
				if((csr_address[7:0]>'h6 && csr_address[7:0]<=('h22+ `Counters)) || 
				  (csr_address[7:0]>('h23+ `Counters) && csr_address[7:0]<'h40) ||
				  (csr_address[7:0]>'h44 && csr_address[7:0]<='hA0) ||
				  (csr_address[7:0]>'hA3 && csr_address[7:0]<'hB8) ||
				  (csr_address[7:0]>'hbf))
					return False;
				else
					return True;
			end
      `ifdef Debug
        'h7:begin
          if(csr_address[7:0]<'hA0 || (csr_address[7:0]>'hA3 && csr_address[7:0]<'hb0) ||
              csr_address[7:0]>'hB2)
            return False;
          else
            return True;
        end
      `endif
			'hB:begin
				if( (csr_address[7:0]>('h2+ `Counters) `ifndef RV64 && csr_address[7:0]<'h80) ||
             csr_address[7:0]>('h82+ `Counters)) `else )) `endif 
					return False; 
				else
					return True;
			end
			'hC:begin
				if( (csr_address[7:0]>('h2+ `Counters) `ifndef RV64 && csr_address[7:0]<'h80) ||
             csr_address[7:0]>('h82+ `Counters)) `else )) `endif 
					return False; 
				else
					return True;
			end
			'hF:begin // MAchine MRO registers
				if(csr_address[7:0]<'h11 || csr_address[7:0]>'h14)
					return False;
				else
					return True;
			end
			default:return False;
		endcase
	endfunction
	
  function Bool hasCSRPermission(Bit#(12) address, Bool write,  Privilege_mode prv);
    Bit#(12) csr_index = pack(address);
    return ((pack(prv) >= csr_index[9:8]) && !(write && csr_index[11:10]==2'b11) );
  endfunction
   
  // if the operand is not 0 then the instruction will perform a write on the CSR.
	function Bool valid_csr_access(Bit#(12) csr_addr, Bit#(5) operand, Bit#(2) operation,
                                                                              Privilege_mode prv);
		Bool ret = hasCSRPermission(unpack(csr_addr), (operand != 0 || operation=='b01) ? True:False,
                                                                                              prv);
		return ret;
	endfunction
  
	function Tuple2#(Trap_type, Bool) chk_interrupt(Privilege_mode prv, Bit#(12) mip, Bit#(12) csr_mie, 
                                                        Bit#(12) mideleg,  Bit#(1) mie);
		Bit#(12) pending_interrupts = (truncate(mip)) & truncate(csr_mie) ;
    Bool resume_wfi=unpack(|pending_interrupts);
		let pending_machine_interrupts = pending_interrupts & ~truncate(mideleg);
		let machine_interrupts_enabled = (mie == 1) || (prv != Machine);
		pending_interrupts =	(machine_interrupts_enabled ? pending_machine_interrupts : 0);
    
		// format pendingInterrupt value to return
		Trap_type ret = tagged None;
		if (pending_interrupts != 0) begin
			ret = tagged Interrupt unpack(zeroExtend(pack(countZerosLSB(pending_interrupts))));
		end
		return tuple2(ret, resume_wfi);
	endfunction

  typedef enum {Q0='b00, Q1='b01, Q2='b10} Quadrant deriving(Bits,Eq,FShow);

  function ActionValue#(DecodeOut) decoder_func(Bit#(16) inst, Bit#(2) err, CSRtoDecode csrs)=
    actionvalue
    
    let {prv, mip, csr_mie, mideleg, misa, counteren, mie, fs}=csrs;
    Quadrant quad =unpack(inst[1:0]);
    Bit#(3) funt3 = inst(15:13];

    //----------------------------------- inferring rs1 and rs1type
    Bit#(5) rs1={2'b01,inst[9:7]};
    Op1type rs1type=IntegerRF;
    if (`ifdef RV32 (quad==Q1 && funct3=='b001) || `endif //C.JAL
        (quad==Q2 && funct3=='b100 && inst[6:2]==0) || // C.J
        (quad==Q0 && funct3!='b000 && funct3!='b100) || // C.Loads C.Store
        (quad==Q2 && (funct3=='b001 || funct3=='b010 || funct3=='b011 || funct3='b101 ||
            funct3=='b110 || funct3=='b111))
      )
      rs1type=PC;


    if(quad=Q0)begin
      if(funct3==0 && inst[12:5]!=0 ) // ADDI4SPN
        rs1=2;
      // for 'b100 rs1 doesn't matter since it will be an illegal instruction
    end
    if(quad==Q1)begin
      case (funct3)
        'b000: rs1[4:3]=inst[11:10]; // C.NOP, C.ADDI
        'b001: `ifdef RV32 rs1=0; `else rs1[4:3]=inst[11:10]; `endif //C.JAL, C.ADDIW
        'b010: rs1=0; // C.LI
        'b011: if (inst[11:7]!=0 && inst[11:7]!=2) rs1=0; else rs1[4:3]=inst[11:10]; // C.ADDI16SP, C.LUI
        'b101: rs1=0; // C.J
      endcase
    end
    if(quad=Q2)begin
      case (funct3)
        'b000: rs1[4:3]=inst[11:10]; //C.SLLI
        'b001, 'b010, 'b011: rs1=2; // 
        'b100: if(inst[12]==0 && inst[6:2]==0) rs1=0; else rs1[4:3]=inst[11:10]; //C.MV 
        default: rs1=2; // C.FSDSP, C.SWSP, C.FSWSP,C.SDSP
      endcase
    end

    //----------------------------------- inferring rs2 and rs2type
    Bit#(5) rs2=0;
    Op2type rs2=IntegerRF;
    if (`ifdef RV32 (quad==Q1 && funct3=='b001) || `endif (quad==Q2 && funct3==100 && inst[6:2]==0))
      rs2type=Constant2;
    else if(funct3=='b00 || (quad==Q1 && inst[15]=='b0) || (quad==Q1 && funct3=='b100 &&
                                                              inst[11:10]!='b11) )
      rs2type=Immediate;
    `ifdef spfpu
      else if ( (quad==Q0 && funct3=='b110) 
          `ifdef dpfpu || (quad==Q0 && funct3=='b101) `endif
          `ifdef RV32  || (quad==Q0 || funct3=='b111) `endif 
          )
        rs2type=FloatingRF;
    `endif
    if(quad=Q0)begin
      case (funct3)
        'b101,'b110,'b111: rs2=(2'b01,inst[4:2]); // C.FSD, C.SW, C.FSW, C.SD
      endcase
    end
    if(quad==Q1)begin
      if(funct3=='b100 && inst[11:10]==2'b11) // C.SUB, C.XOR, C.OR, C.AND, C.SUBW, C.ADDW
        rs2=(2'b01,inst[4:2]);
    end
    if(quad==Q2)begin
      if(funct3=='b100)
        rs2=inst[6:2];
    end

    //----------------------------------- inferring rd
    Bit#(5) rd=inst[11:7];
  	Op3type rdtype=IRF;
    if( (quad==Q0 && (funct3=='b001 `ifdef RV32 || funct3=='b011 `endif ))
        
      )
      rdtype==FRF;

    if(quad==Q0)begin
      case(funct3) 
        'b000,'b001,'b010,'b011: rd={2'b0,inst[4:2]};//C.ADDI4SPN,FLD,LW,FLW,LD
      endcase
    end
    if(quad==Q1)begin
      case(funct3)
        `ifdef RV32 'b001: rd=0; `endif //C.JAL
        'b100: rd[4:3]=2'b01; //C.SRLI,SRAI,ANDI,SUB,XOR,OR,AND,SUBW,ADDW
        'b101,'b110,'b111: rd=0; //C.J,C.BEQZ,C.BNEZ
      endcase
    end
    if(quad==Q2)begin
      case(funct3)
        'b100: if(inst[12]==0 && inst[6:2]==0) rd=0;
        'b101,'b110,'b111: rd=0;
      endcase
    end
    Bit#(5) rs3=0;
    Op3type rs3type=IRF;


  endactionvalue;


  //(*noinline*)
  function ActionValue#(DecodeOut) decoder_func(Bit#(32) inst, Bit#(2) err, CSRtoDecode csrs) = 
    actionvalue
    let {prv, mip, csr_mie, mideleg, misa, counteren, mie, fs}=csrs;

    // ------- Default declarations of all local variables -----------//
    Trap_type exception = tagged None;
    let {interrupt, resume_wfi} = chk_interrupt(prv, mip, csr_mie, mideleg, mie);

		Bit#(5) rs1=inst[19:15];
		Bit#(5) rs2=inst[24:20];
		Bit#(5) rd =inst[11:7] ;
		Bit#(5) opcode= inst[6:2];
		Bit#(3) funct3= inst[14:12];
    Bit#(7) funct7 = inst[31:25]; 
		Bool word32 =False;
    
		//operand types
		Op1type rs1type=IntegerRF;
		Op2type rs2type=IntegerRF;
    
    `ifdef spfpu
      Bit#(5) rs3=inst[31:27];
  		Op3type rs3type=FRF;
  		Op3type rdtype=IRF;
    `endif
    // ------------------------------------------------------------------

    //---------------- Decoding the immediate values-------------------------------------

    // Identify the type of intruction first
    Bool stype= (opcode=='b01000 `ifdef spfpu || opcode=='b01001 `endif );
    Bool btype= (opcode=='b11000);
    Bool utype= (opcode=='b01101 || opcode=='b00101);
    Bool jtype= (opcode=='b11011);
    Bool r4type= (opcode[4:2]=='b100);
    Bool fencetype=(opcode=='b00011);
    Bool atomictype=(opcode=='b01011);

    // refer to section 2.3 (Immediate Encoding Variants) of the risc-v iser spec for more details
    // on the following logic.
    // The default values are chosen such that in case of FPU,  the immediate encoding will hold the
    // upper 7-bit for further decoding.
    // The default values also enable capturing the encoding for atomic operations as well.
    Bit#(1) bit0 = inst[20]; // because of I-type instructions
    `ifdef atomic
      if(atomictype)
        bit0=0;
      else
    `endif
    if(stype)
      bit0=inst[7];
    else if(btype || utype || jtype) 
      bit0=0;

    Bit#(4) bit1_4=inst[24:21]; // I/J-type instructions
    `ifdef atomic
      if(atomictype)
        bit1_4=0;
      else
    `endif
    if(stype || btype) // S/B-Type
      bit1_4=inst[11:8];
    else if(utype) // U type
      bit1_4=0;

    Bit#(6) bit5_10=inst[30:25];
    `ifdef atomic
      if(atomictype)
        bit5_10=0;
      else
    `endif
    if(utype)
      bit5_10=0;
    
    Bit#(1) bit11 = inst[31]; // I/S type
    `ifdef atomic
      if(atomictype)
        bit11=0;
      else
    `endif
    if(btype)
      bit11=inst[7];
    else if(utype)
      bit11=0;
    else if(jtype)
      bit11=inst[20];

    Bit#(8) bit12_19=duplicate(inst[31]); // I/S/B type
    `ifdef atomic
      if(atomictype)
        bit12_19=0;
      else
    `endif
    if(utype || jtype)
      bit12_19=inst[19:12];

    Bit#(11) bit20_30=duplicate(inst[31]); // I/B/S/J type
    `ifdef atomic
      if(atomictype)
        bit20_30=0;
      else
    `endif
    if(utype)
      bit20_30=inst[30:20];
    Bit#(1) bit31= `ifdef atomic (atomictype)?0: `endif inst[31];
    Bit#(32) immediate_value={bit31, bit20_30, bit12_19, bit11, bit5_10, bit1_4, bit0};
    // ----------------------------------------------------------------------------------
		
    //memory access type
		Access_type mem_access=Load;
		if(stype)
			mem_access=Store;
    if(fencetype)begin
      if(funct3[0]==0)
        mem_access=Fence;
      else
        mem_access=FenceI;
    end
    `ifdef atomic
      else if(opcode=='b01011)
        mem_access=Atomic;
    `endif
    

    // Following table describes what the ALU will need for some critical operations. Based on this
    // the next set of logic is implemented. rs1+ rs2 is a XLEN bit adder. rs3+ rs4 is PADDR bit
    // adder.
    // Now PC can be present either in rs1 or rs3. This has been done to reduce the mux to the ALU
    // in the next stage. There will only be a mux in the next stage to identify the PC and send it
    // to the next stage.
    //
    //          rs1   rs2   rs3   rs4
    // Branch   OP1   OP2   PC    Imm
    // JAL      PC    'd4   PC    Imm   (rs1=0, rs2=0 since neither required)
    // JALR     PC    'd4   op1   Imm   (rs2=0 since not required)
    // LOAD     PC    op2   op1   Imm   (rs2=0 since not required) // PC needs to be sent as well
    // STORE    PC    op2   op1   Imm   (both required. op2 is the data)
    // AUIPC    PC    Imm   PC    Imm   (rs1=0, rs2=0 since neither required)
    // Atomic   PC    op1   op1    0
    /////////////////////////////////////////////////////////////////////////////////

		//instruction following U OR UJ TYPE INSTRUCTION FORMAT	
		//funct3[2]==1 might not be required as division is not included till now
		if (opcode==`JAL_op  || opcode==`LUI_op || opcode==`AUIPC_op || 
        (opcode==`SYSTEM_INSTR_op && funct3[2]==1))	
			rs1=0;
		if ( (opcode==`SYSTEM_INSTR_op `ifdef supervisor && funct3!=0 && funct7!='b0001001 `endif ) 
          || opcode[4:2]=='b000 || opcode==`LUI_op // CSR ( and not SFENCE) or (Load) or LUI 
  			  ||opcode[4:2] == 'b001 || opcode==`JAL_op || opcode==`JALR_op	// AUIPC or JAL or JALR
         `ifdef spfpu || (opcode[4:2]=='b101 && funct7[5]==1) `endif )
			rs2=0;
		if (opcode==`BRANCH_op || opcode[4:1]=='b0100)	
			rd=0;

		if(opcode==`JAL_op || opcode==`JALR_op|| opcode==`AUIPC_op || opcode=='b01000 
        || opcode=='b00011  ||  opcode=='b000000 `ifdef atomic || opcode=='b01011 `endif 
        `ifdef spfpu || opcode=='b01001 || opcode=='b00001 `endif )	 // Store, Load, Atomic
			rs1type=PC;
    `ifdef spfpu
	    else if(opcode[4:2]=='b100 || (opcode[4:2]=='b101 && // (F(N)MADD or F(N)SUB)  
		    (funct7[6:3]!='b1101 && funct7[6:3]!='b1111)))     // some of the conversion operations 
			rs1type=FloatingRF; 
    `endif

		if(opcode==`JALR_op || opcode==`JAL_op || opcode=='b00011)
      rs2type=Constant4;
    else if(opcode[4:2] == 'b001 || opcode==`LUI_op )
			rs2type=Immediate;
    `ifdef spfpu // All convert + FSQRToperations do not need rs2 
      else if((opcode[4:2]=='b101 && funct7[5]!='b1) || opcode==`FSTORE_op || opcode[4:2]=='b100)                  
	      rs2type=FloatingRF; 
	  `endif

    `ifdef spfpu
      // if the instruction does not require rs3 then set it to point to integer register 0. This
      // will avoid any stalls on instructions not using rs3.
      if(!r4type)begin
        rs3=0;
        rs3type=IRF;
      end
      if(opcode=='b00001 || (opcode[4:2]=='b101 &&  
         funct7[6:3]!='b1010 && funct7[6:3]!='b1100 && funct7[6:3]!='b1110 ) || opcode[4:2]=='b100) 
        rdtype=FRF; 
    `endif

		//instructions which support word lenght operation in RV64 are to be added in Alu
		//need to be edited according to the supported instruction
    `ifdef RV64
  		if(opcode==`IMM_ARITHW_op || opcode==`MULDIVW_op ||  opcode==`ARITHW_op ||
          `ifdef spfpu (opcode[4:3]=='b10 && funct7[0]==0)|| `endif 
          (opcode[4:1]=='b0101 && funct3[0]==0)) 
      	word32=True;
    `endif
    			
    
    // The following instructions define the type of execution to be performed by the following
    // stages.
    Instruction_type inst_type=ALU;
    if(opcode[4:3]=='b11)begin // Jumps,  Branch and CSRs
    	case(opcode[2:0])
    		'b001:inst_type=JALR; 
        'b011:inst_type=JAL;
    		'b000:inst_type=BRANCH;
    		'b100:inst_type=SYSTEM_INSTR;
        default:exception = tagged Exception Illegal_inst;
    	endcase
    end
    else if(opcode[4:3]=='b01)begin // Stores,  LUIs,  MulDiv,  Register Arithmetic
      case (opcode[2:0])  
        'b000 `ifdef atomic ,'b011 `endif : `ifdef RV32 if(funct3!='b011) `endif 
            inst_type=MEMORY; // STORE + Atomic
        `ifdef spfpu
          'b001: if(funct3==2 `ifdef dpfpu || funct3==3 `endif ) inst_type=MEMORY; // FStore
        `endif
        'b101:inst_type=ALU;      // LUI 
        'b100,'b110: begin 
          if(funct7[0]==0)
            inst_type=ALU;
            `ifdef muldiv 
              else
                inst_type=MULDIV; 
            `endif
          end
        default:exception = tagged Exception Illegal_inst;
      endcase 
    end 
    else if(opcode[4:3]=='b00)begin // Immediate,  Loads,  Fence,  Fence.i
    	case(opcode[2:0])
    		'b000, 'b011: `ifdef RV32 if(funct3!='b011) `endif inst_type=MEMORY;
        `ifdef spfpu
          'b001: if(funct3==2 `ifdef dpfpu || funct3==3 `endif ) inst_type=MEMORY; // FLoad
        `endif
    		'b101,'b100,'b110:inst_type=ALU;
//        'b011:inst_type=FENCE; 
        default:exception = tagged Exception Illegal_inst;
    	endcase
    end
    `ifdef spfpu
      else if(opcode[4:3]=='b10)begin
        inst_type=FLOAT;
      end
    `endif
    // if the none of the supported instructions match then it is an illegal operation
    else
      exception = tagged Exception Illegal_inst;
    Bool wfi=False;
    if(inst_type==SYSTEM_INSTR && funct7=='b0001000 && inst[24:20]=='b00101 && funct3==0)
      wfi=True;

    // --------- Function for ALU -------------
    // In case of Atomic operations as well,  the immediate portion will ensure the right opcode is
    // sent to the cache for operations.
		Bit#(4) fn=0;
    `ifdef atomic
    if( opcode==`ATOMIC_op )begin
      if((inst[27]|inst[28]) == 1)
        fn={inst[29:27],1'b1};
      else
        fn={inst[31:29],inst[27]};
    end
    `endif
		if(opcode==`BRANCH_op )begin
			if(funct3[2]==0)
				fn={2'b0,1,funct3[0]};
			else
				fn={1'b1,funct3};
		end
		else if(`ifdef RV64 opcode==`IMM_ARITHW_op || `endif opcode==`IMM_ARITH_op )begin
			fn=case(funct3)
				'b010: 'b1100;
				'b011: 'b1110;
				'b101: if(funct7[5]==1) 'b1011; else 'b0101;
				default:{1'b0,funct3};
			endcase;
		end
		else if(`ifdef RV64 opcode==`ARITHW_op || `endif opcode==`ARITH_op )begin
			fn=case(funct3)
				'b000:if(funct7[5]==1) 'b1010; else 'b0000;
				'b010:'b1100;
				'b011:'b1110;
				'b101:if (funct7[5]==1) 'b1011;else 'b0101;
				default:{1'b0,funct3};
			endcase;
		end
    `ifdef spfpu
  		else if(opcode[4:3]=='b10) // floating point instructions
	  		fn=opcode[3:0];
    `endif
    // ---------------------------------------

		Bool address_is_valid=address_valid(inst[31:20]);
		Bool access_is_valid=valid_csr_access(inst[31:20],inst[19:15], inst[13:12], prv);
    if(err[0]==1)
      exception = tagged Exception Inst_access_fault;
    `ifdef supervisor
      else if(err[1]==1)
        exception = tagged Exception Inst_pagefault;
    `endif
    else if( `ifdef spfpu (inst_type==FLOAT && funct7[0]==0 && (misa[5]==0 || fs==0)) || `endif
             `ifdef dpfpu (inst_type==FLOAT && funct7[0]==1 && (misa[3]==0 || fs==0)) || `endif
             `ifdef atomic (inst_type==MEMORY && mem_access==Atomic && misa[0]==0) || `endif 
             `ifdef muldiv (inst_type==MULDIV && misa[12]==0) || `endif
             `ifdef spfpu (inst_type==MEMORY && (rdtype==FRF||rs1type==FloatingRF ||
                                            rs2type==FloatingRF ) && fs==0) || `endif
             (inst_type==ALU && misa[8]==0) ||
              inst[1:0]!='b11 )
      exception=tagged Exception Illegal_inst; 
    else if(inst_type == SYSTEM_INSTR)begin
      if(funct3 == 0)
        case(inst[31:20])
          'h000: exception = tagged Exception ((prv==User)?Ecall_from_user: 
              `ifdef supervisor (prv==Supervisor)?Ecall_from_supervisor: `endif Ecall_from_machine);
          'h001: exception = tagged Exception Breakpoint;
          'h302: exception = (prv!=Machine)?tagged Exception Illegal_inst:tagged None;
          default: exception = tagged None;
        endcase
      else begin // CSR read write operation
  		  if(!(address_is_valid && access_is_valid))
          exception = tagged Exception Illegal_inst;
      end
    end

    if(inst_type==SYSTEM_INSTR)
      immediate_value={'d0,inst[19:15],immediate_value[11:0]};// TODO fix this

    if(interrupt matches tagged None)
      interrupt =  exception;

    `ifdef spfpu
      OpDecode t1 = tuple7(rs1, rs2, rd, rs3, rs1type, rs2type, rs3type);
    `else
      OpDecode t1 = tuple5(rs1, rs2, rd, rs1type, rs2type);
    `endif

    `ifdef RV64
      DecodeMeta t2 = tuple7(fn, inst_type, mem_access, immediate_value, funct3, wfi, word32);
    `else
      DecodeMeta t2 = tuple6(fn, inst_type, mem_access, immediate_value, funct3, wfi);
    `endif

    `ifdef spfpu
      return tuple5(t1, t2, interrupt, resume_wfi, rdtype);
    `else
      return tuple4(t1, t2, interrupt, resume_wfi);
    `endif
  endactionvalue;
endpackage
