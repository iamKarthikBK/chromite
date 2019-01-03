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
	  
  (*noinline*)
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
          else
            return False;
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
    `ifdef cache_control
      'h8: begin
        if(csr_address[7:0]!=0)
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
	
  (*noinline*)
  function Bool hasCSRPermission(Bit#(12) address, Bool write,  Privilege_mode prv);
    Bit#(12) csr_index = pack(address);
    return ((pack(prv) >= csr_index[9:8]) && !(write && csr_index[11:10]==2'b11) );
  endfunction
   
  // if the operand is not 0 then the instruction will perform a write on the CSR.
  (*noinline*)
	function Bool valid_csr_access(Bit#(12) csr_addr, Bit#(5) operand, Bit#(2) operation,
                                                                              Privilege_mode prv);
		Bool ret = hasCSRPermission(unpack(csr_addr), (operand != 0 || operation=='b01) ? True:False,
                                                                                              prv);
		return ret;
	endfunction
 
  (*noinline*)
	function Tuple3#(Bit#(6), Bool, Bool) chk_interrupt(Privilege_mode prv, Bit#(12) mip, Bit#(12) csr_mie, 
                                                        Bit#(12) mideleg,  Bit#(1) mie);
		Bit#(12) pending_interrupts = (truncate(mip)) & truncate(csr_mie) ;
    Bool resume_wfi=unpack(|pending_interrupts);
		let pending_machine_interrupts = pending_interrupts & ~truncate(mideleg);
		let machine_interrupts_enabled = (mie == 1) || (prv != Machine);
		pending_interrupts =	(machine_interrupts_enabled ? pending_machine_interrupts : 0);
    
		// format pendingInterrupt value to return
		Bool taketrap=False;
		if (pending_interrupts != 0) begin
			taketrap=True;
		end
		return tuple3(unpack(zeroExtend(pack(countZerosLSB(pending_interrupts)))), taketrap, resume_wfi);
	endfunction
  
  (*noinline*)
  function Bit#(3) gen_funct3(Bit #(16) inst);
    Bit#(5) opcode={inst[1:0],inst[15:13]};
    Bit #(3) funct3 =3'b000;
    
    
    case (opcode)
    
    5'b00000:funct3=3'b000;
  `ifdef dpfpu
    5'b00001: funct3=3'b011; // C.FLD
    5'b00101: funct3=3'b011; // C.FSD
    5'b10001: funct3=3'b011; // C.FLDSP
    5'b10101: funct3=3'b011; // C.FSDSP
  `endif
    5'b01000:funct3=3'b000;
    5'b10000:funct3=3'b001;
    5'b01001:funct3=3'b000;
    5'b00010:funct3=3'b010;
    5'b01010:funct3=3'b000;
    5'b10010:funct3=3'b010;
  `ifdef RV64
    5'b00011:funct3=3'b011; // C.LD
    5'b00111:funct3=3'b011; // C.SD
    5'b10011:funct3=3'b011; // C.LDSP
    5'b10111:funct3=3'b011; // C.SDSP
  `elsif spfpu
    5'b00011:funct3=3'b010; // C.FLW
    5'b00111:funct3=3'b010; // C.FSW
    5'b10011:funct3=3'b010; // C.FLWSP
    5'b10111:funct3=3'b010; // C.FSWSP
  `endif
    5'b01011:funct3=3'b000;
    5'b01100:
            if((inst[11:10]==2'b00)||(inst[11:10]==2'b01))
                funct3=3'b101;//SRLI,SRAI
            else if(inst[11:10]==2'b10)
                funct3=3'b111;//ANDI
            else if(inst[11:10]==2'b11)
            case({inst[6:5]})
                2'b00:funct3=3'b000;
                2'b01:if(inst[12]==1'b1)
                          funct3=3'b000;
                      else
                          funct3=3'b100;
                2'b10:funct3=3'b110;
                2'b11:funct3=3'b111;
              endcase
    5'b10100:funct3=3'b000;
    5'b00110:funct3=3'b010;
    5'b01110:funct3=3'b000;
    5'b10110:funct3=3'b010;
    5'b01111:funct3=3'b001;
    default:funct3=3'b000;
    endcase
    
    return funct3;

 endfunction

  typedef enum {Q0='b00, Q1='b01, Q2='b10} Quadrant deriving(Bits,Eq,FShow);
  (*noinline*)
  function DecodeOut decoder_func_16(Bit#(16) inst, CSRtoDecode csrs);
    
    let {prv, mip, csr_mie, mideleg, misa, counteren, mie, fs}=csrs;
    Quadrant quad =unpack(inst[1:0]);
    Bit#(3) funct3 = inst[15:13];

    //----------------------------------- inferring rs1 and rs1type
    Bit#(5) rs1={2'b01,inst[9:7]};
    Op1type rs1type=IntegerRF;
    if (`ifdef RV32 (quad==Q1 && funct3=='b001) || `endif //C.JAL
        (quad==Q2 && funct3=='b100 && inst[6:2]==0) || // C.J
        (quad==Q0 && funct3!='b000 && funct3!='b100) || // C.Loads C.Store
        (quad==Q2 && (funct3=='b001 || funct3=='b010 || funct3=='b011 || funct3=='b101 ||
            funct3=='b110 || funct3=='b111))
      )
      rs1type=PC;


    if(quad==Q0)begin
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
    if(quad==Q2)begin
      case (funct3)
        'b000: rs1[4:3]=inst[11:10]; //C.SLLI
        'b001, 'b010, 'b011: rs1=2; // 
        'b100: if(inst[12]==0 && inst[6:2]!=0) rs1=0; else rs1[4:3]=inst[11:10]; //C.MV 
        default: rs1=2; // C.FSDSP, C.SWSP, C.FSWSP,C.SDSP
      endcase
    end

    //----------------------------------- inferring rs2 and rs2type
    Bit#(5) rs2=0;
    Op2type rs2type=IntegerRF;
    if (`ifdef RV32 (quad==Q1 && funct3=='b001) || `endif 
                    (quad==Q2 && funct3=='b100 && inst[6:2]==0))
      rs2type=Constant2;
    else if(funct3=='b00 || (quad==Q1 && inst[15]=='b0) || (quad==Q1 && funct3=='b100 &&
                                                              inst[11:10]!='b11) )
      rs2type=Immediate;
    `ifdef spfpu
      else if ( (quad==Q0 && funct3=='b001) 
           || ( (quad==Q0 || quad==Q2) && funct3=='b101 && misa[3]==1) 
          `ifdef RV32  || ( (quad==Q0 || quad==Q2) && funct3=='b111) `endif 
          )
        rs2type=FloatingRF;
    `endif
    if(quad==Q0)begin
      case (funct3)
        'b101,'b110,'b111: rs2=({2'b01,inst[4:2]}); // C.FSD, C.SW, C.FSW, C.SD
      endcase
    end
    if(quad==Q1)begin
      if(funct3=='b100 && inst[11:10]==2'b11) // C.SUB, C.XOR, C.OR, C.AND, C.SUBW, C.ADDW
        rs2=({2'b01,inst[4:2]});
    end
    if(quad==Q2)begin
      case(funct3[2])
      'b1:rs2=inst[6:2];
      endcase
    end

    //----------------------------------- inferring rd
    Bit#(5) rd=inst[11:7];

    if(quad==Q0)begin
      case(funct3[2]) 
        'b0: rd={2'b01,inst[4:2]};//C.ADDI4SPN,FLD,LW,FLW,LD
        'b1: rd=0;
      endcase
    end
    if(quad==Q1)begin
      case(funct3)
        `ifdef RV32 'b001: rd=1; `endif //C.JAL
        'b100: rd[4:3]=2'b01; //C.SRLI,SRAI,ANDI,SUB,XOR,OR,AND,SUBW,ADDW
        'b101,'b110,'b111: rd=0; //C.J,C.BEQZ,C.BNEZ
      endcase
    end
    if(quad==Q2)begin
      case(funct3)
        'b100: 
          if(inst[12]==0 && inst[6:2]==0)  // C.JR
            rd=0;
          else if(inst[12]==1 && inst[11:2]==0) // C.EBREAK
            rd=0;
          else if(inst[12]==1 && inst[11:7]!=0 && inst[6:2]==0) // C.JALR
            rd=1;
        'b101,'b110,'b111: rd=0;
      endcase
    end
	
    // --- capturing memory access type.Only valid are Load/Store
    Access_type mem_access=Load;
		if( ((quad==Q0 || quad==Q2) && (funct3=='b110 || funct3=='b101 || funct3=='b111)) )
			mem_access=Store;

    // --- deriving fn bits
    Bit#(4) fn=0;
		if(quad==Q1 && funct3[2:1]=='b11) begin // C.BEQZ C.BNEZ
		  fn={2'b0,funct3[1:0]};
		end
    // C.ADDI, C.ADDIW, C.LI, C.ADDI4SPN, C.ADDI16SPN, C.LUI - all require fn=0;
    else if(quad==Q1 && funct3=='b100 && inst[11:10]!=2'b11)begin // C.SRAI, C.SRLI, C.ANDI
      case(inst[11:10])
        'b00: fn= 'b0101 ;//C.SRLI
        'b01: fn= 'b1011 ;//C.SRAI
        'b10: fn= 'b0111 ;//C.ANDI
      endcase
    end  
    else if(quad==Q2 && funct3=='b000)
      fn='b0001; // C.SLLI
    else if(quad == Q1 && funct3=='b100 && inst[11:10]==2'b11) begin // Reg ARITH(W)
      case(inst[6:5])
        'b00: fn='b1010; // C.SUB C.SUBW
        'b01: if(inst[12]==0) fn='b0100; // C.XOR
        'b10: fn = 'b0110; // C.OR
        'b11: fn = 'b0111; // C.AND
      endcase
    end

    // -- deriving inst_type
    Instruction_type inst_type=ALU;
    if( (quad==Q0 && funct3!=0)|| (quad==Q2 && funct3!='b100 && funct3!='b000)) 
      inst_type=MEMORY;
    else if (quad==Q2 && funct3=='b100 && inst[11:7]!=0 && inst[6:2]==0) //C.JALR C.JR
      inst_type=JALR;
    else if (quad==Q1 && (funct3=='b101  `ifdef RV32 || funct3=='b001 `endif )) //C.J C.JAL
      inst_type=JAL;
    else if (quad==Q1 && (funct3=='b110 || funct3=='b111)) //C.BEQZ C.BNEZ
      inst_type=BRANCH;

    Bit#(18) imm_value=
    case (quad) matches
      Q0: case(funct3)
        'b000:zeroExtend({inst[10:7],inst[12:11],inst[5],inst[6],2'b0});
        'b001:(zeroExtend({inst[6:5],inst[12:10],3'b0}) & duplicate(misa[3]));
        'b010:zeroExtend({inst[5],inst[12:10],inst[6],2'b00});
        'b011:`ifdef RV32 
                zeroExtend({inst[5],inst[12:10],inst[6],2'b00}); 
              `else 
                zeroExtend({inst[6:5],inst[12:10],3'b0});   
              `endif
        'b101:(zeroExtend({inst[6:5],inst[12:10],3'b0}) & duplicate(misa[3]));
        'b110:zeroExtend({inst[5],inst[12:10],inst[6],2'b00}); 
        'b111: `ifdef RV32
                zeroExtend({inst[5],inst[12:10],inst[6],2'b00}); 
              `else 
                zeroExtend({inst[6:5],inst[12:10],3'b0});   
              `endif
        default:0;
      endcase
      Q1: case(funct3)
        'b000,'b010:signExtend({inst[12],inst[6:2]});
        'b001:`ifdef RV32 
          signExtend({inst[12],inst[8],inst[10:9],inst[6],inst[7],inst[2],inst[11],inst[5:3],1'b0});
              `else
          signExtend({inst[12],inst[6:2]});
              `endif
        'b011: if (inst[11:7]==2) 
                signExtend({inst[12],inst[4:3],inst[5],inst[2],inst[6],4'b0});
              else
                {inst[12],inst[6:2],12'b0};
        'b100:if(inst[11]==0) 
                zeroExtend({inst[12],inst[6:2]});
              else
                signExtend({inst[12],inst[6:2]});
        'b101:signExtend({inst[12],inst[8],inst[10:9],inst[6],inst[7],inst[2],inst[11],inst[5:3],1'b0});
        'b110,'b111:signExtend({inst[12],inst[6:5],inst[2],inst[11:10],inst[4:3],1'b0});
        default:0;
      endcase
      Q2:case(funct3)
        'b000:zeroExtend({inst[12],inst[6:2]});
        'b001:(zeroExtend({inst[4:2],inst[12],inst[6:5],3'b0}) & duplicate(misa[3]) ); 
        'b010:zeroExtend({inst[3:2],inst[12],inst[6:4],2'b0});
        'b011:`ifdef RV32 
          zeroExtend({inst[3:2],inst[12],inst[6:4],2'b0});
              `else
          zeroExtend({inst[4:2],inst[12],inst[6:5],3'b0});
              `endif
        'b101:(zeroExtend({inst[9:7],inst[12:10],3'b0}) & duplicate(misa[3])); 
        'b110:zeroExtend({inst[8:7],inst[12:9],2'b0});
        'b111:`ifdef RV32
          zeroExtend({inst[8:7],inst[12:9],2'b0});
              `else
          zeroExtend({inst[9:7],inst[12:10],3'b0});
              `endif
        default:0;
      endcase
      default:0;
    endcase;
    Bit#(32) immediate_value=signExtend(imm_value);
    Bit#(3) f3=gen_funct3(inst);

    Bit#(6) trapcause=`Illegal_inst;
    if(quad==Q2 && funct3=='b100 && inst[12]==1 && inst[11:2]==0)begin
      inst_type=TRAP;
      trapcause = `Breakpoint;
    end
    else if(inst==0 || (quad==Q0 && funct3=='b100) || 
          (quad==Q1 && inst[15:10]=='b100111 && inst[6]==1)) begin
      inst_type=TRAP;
    end
    else if(imm_value==0 && ((quad==Q0 && funct3=='b000) || //ADDI4SPN
            (quad==Q1 && ((funct3=='b000 && inst[11:7]!=0) || funct3=='b011)) || // NOP ADDI ADDI16SPN LUI
            (quad==Q1 && funct3=='b100 && inst[11:10]<2) || // SRLI SRAI
            (quad==Q2 && funct3=='b000)  )) begin // SLLI
      inst_type=TRAP;
    end
    
    Bit#(7) temp1 = {fn,f3};
    if(inst_type==TRAP)
      temp1={1'b0,trapcause};

    
    OpType_min t1 = tuple5(rs1, rs2, rd, rs1type, rs2type);
    DecodeMeta t2 = tuple4(temp1, inst_type, mem_access, immediate_value);
    return tuple4(t1, t2, False, False);


  endfunction


  (*noinline*)
  function DecodeOut decoder_func_32(Bit#(32) inst, CSRtoDecode csrs);
    let {prv, mip, csr_mie, mideleg, misa, counteren, mie, fs}=csrs;

    // ------- Default declarations of all local variables -----------//

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
    
    // ------------------------------------------------------------------

    //---------------- Decoding the immediate values-------------------------------------

    // Identify the type of intruction first
    Bool stype= (opcode=='b01000 || (opcode=='b01001 && misa[5]==1) );
    Bool btype= (opcode=='b11000);
    Bool utype= (opcode=='b01101 || opcode=='b00101);
    Bool jtype= (opcode=='b11011);
    Bool r4type= (opcode[4:2]=='b100);
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
    if(funct3[0]==0 && opcode=='b00011)
      mem_access=Fence;
    if(funct3[0]==1 && opcode=='b00011)
      mem_access=FenceI;
  `ifdef atomic
    if(opcode=='b01011)
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
  			  ||opcode[4:2] == 'b001 || opcode==`JAL_op || opcode==`JALR_op	|| // AUIPC or JAL or JALR
          (opcode[4:2]=='b101 && funct7[5]==1 && (misa[3]|misa[5])==1) )
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
// ------------------------------------------------------------------------------------------- //
  Bit#(6) trapcause=`Illegal_inst;
  Bool validload = `ifdef RV32 funct3!=3 && funct3!=7 `else funct3!=7 `endif ;
  Bool validFload = fs!=0 && ((misa[5]==1 &&  funct3==2) `ifdef dpfpu || (misa[3]==1 && funct3==3) `endif ) ;
`ifdef RV32
  Bool validImm = (funct3==1)?(funct7==0):(funct3==5)? (funct7 == 'b0000000 || funct7=='b0100000):True;
  Bool validImm32 = False;
`else
  Bool validImm = (funct3==1)?(funct7[6:1]==0):(funct3==5)? (funct7[6:1] == 'b000000 || funct7[6:1]=='b010000):True;
  Bool validImm32 = (funct3==0)?True:(funct3==1)? (funct7==0):(funct3==5)?(funct7=='b0000000 || funct7=='b0100000):False;
`endif
  Bool validStore = `ifdef RV32 funct3<3 `else funct3<4 `endif ;
  Bool validFStore = (misa[5]==1 && fs!=0 && funct3==2) `ifdef dpfpu || (misa[3]==1 && fs!=0 && funct3==3) `endif ;
  Bool validAtomicOp = case(inst[31:27])
      'd0, 'd1, 'd2, 'd3, 'd4, 'd8, 'd12, 'd16, 'd20, 'd24, 'd28: True;
      default: False;
    endcase;
  Bool validAtomic = (misa[0]==1 && (funct3==2 `ifdef RV64 || funct3==3 `endif ) && validAtomicOp);
  Bool validMul = (misa[12]==1 && funct7[0]==1)?True:False; 
  Bool validOp = (funct3==0 || funct3==5)?(funct7 == 'b0000000 || funct7=='b0100000):(funct7==0);
  Bool validMul32 = (misa[12]==1 && funct7[0]==1 && (funct3==0 || funct3>3));
  Bool validOp32  = (funct3==1)?(funct7==0):(funct3==0 || funct3==5)?(funct7=='b0000000||funct7=='b0100000):False;
  Bool validFloat = fs!=0 && ((funct7[0]==0 && misa[5]==1) `ifdef dpfpu || (funct7[0]==1 &&  misa[3]==1) `endif );
  Bool validFNM = inst[26]==0 && validFloat;
  Bool validFloatOpF = case(inst[31:27])
    'b00000, 'b00001, 'b00010, 'b00011: True; // FADD, FSUB, FMUL, FDIV
    'b01011: (inst[24:20]==0); // FSQRT.S
    'b00100: (funct3<3); // FSGNJ.S FSGNJN.S FSGNJX.S
    'b00101: (funct3<2); // FMIN.S FMAX.S
    'b11000: (inst[24:21]==0); // FCVT.W.S FCVT.WU.S
    'b11100: (inst[24:20]==0 && (funct3==0 || funct3==1)); // FMV.X.W, FCLASS.S
    'b10100: (funct3<3); //FEQ.S FLT.S FLE.S
    'b11010: (inst[24:21]==0); // FCVT.S.W FCVT.S.WU
    'b11110: (inst[24:20]==0 && funct3==0); //FMV.W.X
    default: False;
  endcase;
`ifdef dpfpu
  Bool validFloatOpD = case(inst[31:27])
    'b11000: (inst[24:21]=='b0001); // FCVT.L.D FCVT.LU.D
    'b11100: (inst[24:20]==0 && funct3==0); // FMV.X.D
    'b11010: (inst[24:21]=='b0001); // FCVT.D.L FCVT.D.LU
    'b11110: (inst[24:20]==0 && funct3==0); // FMV.D.X
    'b01000: (inst[24:21]=='b0); // FCVT.S.D
    default: False;
  endcase;
`else 
  Bool validFloatOpD=False;
`endif
	Bool address_is_valid=address_valid(inst[31:20]);
	Bool access_is_valid=valid_csr_access(inst[31:20],inst[19:15], inst[13:12], prv);
  Instruction_type inst_type = TRAP;
  case (opcode[4:3])
    'b00: case(opcode[2:0])
        'b000: if(validload) inst_type=MEMORY;      // Load
      `ifdef spfpu 
        'b001: if(validFload) inst_type=MEMORY;     // F-Load
      `endif
        'b011: if(funct3==0 || funct3==1) inst_type = MEMORY;    // Fence, FenceI
        'b100: if(validImm) inst_type = ALU;        // OP-Imm
        'b101: inst_type=ALU;                       // AUIPC
      `ifdef RV64
        'b110: if(validImm32) inst_type = ALU;      // Op-IMM32
      `endif
      endcase
    'b01: case(opcode[2:0])
        'b000: if(validStore) inst_type = MEMORY;     // Store
      `ifdef spfpu
        'b001: if(validFStore) inst_type = MEMORY;    // F-Store
      `endif
      `ifdef atomic
        'b011: if(validAtomic) inst_type = MEMORY;    // Atomic 
      `endif
        'b100: `ifdef muldiv  if(validMul) inst_type=MULDIV; else `endif  // MULDIV
                if(validOp) inst_type=ALU; // OP
        'b101: inst_type = ALU;
      `ifdef RV64
        'b110: `ifdef muldiv if(validMul32) inst_type=MULDIV; else `endif // MULDIV-32
              if(validOp32) inst_type=ALU; // OP
      `endif
      endcase
  `ifdef spfpu
    'b10: case(opcode[2:0])
      'b000, 'b001, 'b010, 'b011:if(validFNM) inst_type=FLOAT;
      'b100: if(validFNM && (validFloatOpF || validFloatOpD)) inst_type=FLOAT;
      endcase
  `endif
    'b11: case(opcode[2:0])
      'b000: if(funct3!=2 && funct3!=3) inst_type=BRANCH; // BRANCH
      'b001: if(funct3==0) inst_type=JALR; // JALR
      'b011: inst_type=JAL; // jal
      'b100: case(funct3)
          'b000: if(inst[31:7]==0) trapcause=(misa[20]==1 && prv==User)?`Ecall_from_user: 
                                             (misa[18]==1 && prv==Supervisor)?`Ecall_from_supervisor: 
                                              `Ecall_from_machine;
                 else if(inst[31:7]=='h2000) trapcause=`Breakpoint ;
                 else if(inst[31:20]=='h002 && inst[19:15]==0 && inst[11:7]==0 && misa[13]==1) inst_type=SYSTEM_INSTR;
                 else if(inst[31:20]=='h102 && inst[19:15]==0 && inst[11:7]==0 && misa[18]==1 &&
                        prv!=User) inst_type=SYSTEM_INSTR; // TODO check TSR==0
                 else if(inst[31:20]=='h302 && inst[19:15]==0 && inst[11:7]==0 && prv==Machine)
                        inst_type=SYSTEM_INSTR;
                 else if(inst[31:20]=='h105 && inst[19:15]==0 && inst[11:7]==0 && prv==Machine)
                        inst_type=WFI;
          default: if(funct3!=0 && funct3!=4 && access_is_valid && address_is_valid) 
                    inst_type=SYSTEM_INSTR;
      endcase
    endcase
  endcase
  if(inst[1:0]!='b11)begin
    inst_type=TRAP;
    trapcause=`Illegal_inst;
  end

  // checks: TVM=1 TW=1 TSR=0
// --------------------------------------------------------------------------------------------//

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
    else if(opcode[4:3]=='b10 && (misa[5]|misa[3])==1) // floating point instructions
	  		fn=opcode[3:0];
    // ---------------------------------------

    if(inst_type==SYSTEM_INSTR)
      immediate_value={'d0,inst[19:15],immediate_value[11:0]};// TODO fix this

    Bit#(7) temp1 = {fn,funct3};
    if(inst_type==TRAP)
      temp1={1'b0,trapcause};

    Bool rerun = mem_access==Fence || mem_access==FenceI || inst_type==SYSTEM_INSTR;


    OpType_min t1 = tuple5(rs1, rs2, rd, rs1type, rs2type);
    DecodeMeta t2 = tuple4(temp1, inst_type, mem_access, immediate_value);
    return tuple4(t1, t2, False, rerun);

  endfunction

  (*noinline*)
  function OpType_fpu decode_fpu_meta(Bit#(32) inst, Bit#(1) misa_c);
    Bit#(5) rs3=inst[31:27];
 		RFType rs3type=FRF;
    RFType rdtype=IRF;

		Bit#(5) opcode= inst[6:2];
    Bool r4type= (opcode[4:2]=='b100);
    Bit#(7) funct7 = inst[31:25]; 
    if(misa_c==1 && inst[1:0]!='b11)begin
      Quadrant quad =unpack(inst[1:0]);
      Bit#(3) funct3 = inst[15:13];
      rs3=0;
      rs3type=IRF;
      if( (quad==Q0||quad==Q2) && (funct3=='b001 `ifdef RV32 || funct3=='b011 `endif ))
        rdtype=FRF;
    end
    else begin
      if(opcode=='b00001 || (opcode[4:2]=='b101 &&  
         funct7[6:3]!='b1010 && funct7[6:3]!='b1100 && funct7[6:3]!='b1110 ) || opcode[4:2]=='b100) 
        rdtype=FRF; 
      if(!r4type)begin
        rs3=0;
        rs3type=IRF;
      end
    end

    return tuple3(rs3,rs3type,rdtype);
  endfunction

  (*noinline*)
  function Bool decode_word32 (Bit#(32) inst, Bit#(1) misa_c);
    Bool word32=False;
    `ifdef RV64
		  Bit#(5) opcode= inst[6:2];
      Bit#(7) funct7 = inst[31:25]; 
      if(misa_c==1 && inst[1:0]!='b11)begin
        Quadrant quad =unpack(inst[1:0]);
        Bit#(3) funct3 = inst[15:13];
        if( quad ==Q1 && (funct3=='b001 || (funct3=='b100 && inst[12:10]=='b111 && inst[6]=='b0)))
          word32=True;
      end
      else begin
		    Bit#(3) funct3= inst[14:12];
  		  if(opcode==`IMM_ARITHW_op || opcode==`MULDIVW_op ||  opcode==`ARITHW_op ||
            `ifdef spfpu (opcode[4:3]=='b10 && funct7[0]==0)|| `endif 
            (opcode[4:1]=='b0101 && funct3[0]==0)) 
      	word32=True;
      end
    `endif
    return word32;
  endfunction
  
  function ActionValue#(DecodeOut) decoder_func(Bit#(32) inst, Bit#(2) err, CSRtoDecode csrs, Bool
    curr_rerun, Bool rerun_fencei) =  actionvalue
      let {prv, mip, csr_mie, mideleg, misa, counteren, mie, fs}=csrs;
      DecodeOut result_decode = decoder_func_32(inst, csrs);
      if(inst[1:0]!='b11 && misa[2]==1)
        result_decode = decoder_func_16(truncate(inst),csrs);
      let {icause, takeinterrupt, resume_wfi} = chk_interrupt(prv, mip, csr_mie, mideleg, mie);
      let {t1, t2, t3, t4} = result_decode;
      let {rs1addr,rs2addr,rd,rs1type,rs2type} = t1;
      let {func_cause, inst_type,  mem_access,  immediate_value}=t2;
      Instruction_type x_inst_type = inst_type;
      Op1type x_rs1type = rs1type;
      Op2type x_rs2type = rs2type;
      Bit#(5) x_rs1addr = rs1addr;
      Bit#(5) x_rs2addr = rs2addr;

      if(curr_rerun)begin
        x_inst_type=TRAP;
        func_cause=rerun_fencei?`IcacheFence : `Rerun ;
        t4=False;
      end
      else if(takeinterrupt)begin
        func_cause={1'b1, icause};
        x_inst_type=TRAP;
      end
      else if(err[0]==1) begin
        x_inst_type=TRAP;
        func_cause = `Inst_access_fault ;
      end
      else if(err[1]==1 && misa[18]==1) begin
        x_inst_type=TRAP;
        func_cause= `Inst_pagefault;
      end

      if(x_inst_type == TRAP)begin
        x_rs2addr=0;
        x_rs2type=IntegerRF;
        x_rs1addr=0;
        if(func_cause == `Inst_access_fault || func_cause==`Inst_pagefault )
          x_rs1type=PC;
        else
          x_rs1type=IntegerRF;
      end

      DecodeMeta tupl2 = tuple4(func_cause, x_inst_type, mem_access, immediate_value);
      return tuple4(tuple5(x_rs1addr, x_rs2addr, rd, x_rs1type,x_rs2type), tupl2, resume_wfi, t4);

  endactionvalue;
endpackage
