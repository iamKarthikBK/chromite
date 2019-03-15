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
package common_types;
  `include "common_params.bsv"

  `ifdef RV64
  	typedef 64 XLEN;
  `else
    typedef 32 XLEN;
  `endif
  `ifdef dpfpu
    typedef 64 FLEN;
  `elsif spfpu
    typedef 32 FLEN;
  `else
    typedef `vaddr FLEN;
  `endif
	typedef Bit #(3)  Funct3;
  typedef 7 PRFDEPTH;
  typedef 8 RAS_DEPTH;
  typedef 0 USERSPACE ;
  typedef TMax#(XLEN, FLEN) ELEN;

  typedef struct{
    Bit#(`vaddr) pc;
  `ifdef icache
    Bool  fence;
  `endif
  `ifdef supervisor
    Bool  sfence;
  `endif
  } Stage0Flush deriving(Bits, Eq, FShow);

  // ---------------- following types are used to define the memory interfaces from the core ---//
`ifdef dcache
  `ifdef supervisor
    `ifdef atomic
                    // addr, Fence, sFence, epoch, access_type, access_size data,  atomic_op
      typedef Tuple8#(Bit#(addr), Bool, Bool, Bit#(esize), Bit#(2), Bit#(3), Bit#(data),  Bit#(5)) 
                      DMem_request#(numeric type addr, numeric type data, numeric type esize);
    `else
                    // addr, Fence, sFence epoch, access_type, access_size data,  atomic_op
      typedef Tuple7#(Bit#(addr), Bool, Bool, Bit#(esize), Bit#(1), Bit#(3), Bit#(data)) 
                      DMem_request#(numeric type addr, numeric type data, numeric type esize);
    `endif
  `else                                                                          
    `ifdef atomic
                      // addr, Fence, epoch, access_type, access_size data,  atomic_op
      typedef Tuple7#(Bit#(addr), Bool, Bit#(esize), Bit#(2), Bit#(3), Bit#(data),  Bit#(5)) 
                        DMem_request#(numeric type addr, numeric type data, numeric type esize);
    `else
                      // addr, Fence, epoch, access_type, access_size data,  atomic_op
      typedef Tuple6#(Bit#(addr), Bool, Bit#(esize), Bit#(1), Bit#(3), Bit#(data)) 
                        DMem_request#(numeric type addr, numeric type data, numeric type esize);
    `endif
  `endif
  typedef Tuple4#(Bit#(data), Bool, Bit#(6), Bit#(esize)) DMem_response#(numeric type data, 
                                                                          numeric type esize);
`endif
  // ------------------------------------------------------------------------------------- //

  //------ The follwing contain common tuples across the stages ------------- 
	typedef enum {ALU, MEMORY, BRANCH, JAL, JALR, SYSTEM_INSTR, TRAP, WFI
      `ifdef spfpu ,FLOAT `endif `ifdef muldiv ,MULDIV `endif } Instruction_type 
      deriving(Bits, Eq, FShow); // the type of the decoded instruction.
	typedef enum {Load=0, Store=1, Fence=3 , FenceI=4 
                `ifdef atomic ,Atomic=2 `endif 
                `ifdef supervisor ,SFence=5 `endif } Access_type 
                                                                        deriving (Bits, Eq, FShow);
  `ifdef bpu                                                                     
  	typedef enum {CheckNPC, CheckRPC, None} Flush_type deriving (Bits, Eq, FShow);
  `else
  	typedef enum {CheckRPC, None} Flush_type deriving (Bits, Eq, FShow);
  `endif
  typedef enum {Regular, None} Flush_type2 deriving (Bits, Eq, FShow);
	typedef enum {`ifdef spfpu FloatingRF=2, `endif IntegerRF=0, PC=1} Op1type deriving(Bits, Eq, FShow);
	typedef enum {`ifdef spfpu FloatingRF=4, `endif IntegerRF=0, Immediate=1, Constant4=2, Constant2=3} 
                                                                  Op2type deriving(Bits, Eq, FShow);
  typedef enum {FRF=1, IRF=0} RFType deriving(Bits, Eq, FShow);
//  typedef enum {SYSTEM_INSTR, REGULAR, TRAP} Commit_type deriving(Eq, Bits, FShow);
  typedef enum {MEMORY, SYSTEM_INSTR, REGULAR, TRAP} PreCommit_type deriving(Eq, Bits, FShow);
  typedef enum {Machine=3, Supervisor=1, User=0} Privilege_mode 
                                                                          deriving(Eq, Bits, FShow);
  // -------------------------------------------------------------------------------------

  // ------- The following typdefs are used to define the output from the decode stage -----
  // data structure of the fwding data structure
  `ifdef spfpu
    typedef Tuple5#(Bool, Bool, Bit#(5), Bit#(ELEN), RFType) FwdType;
  `else
    typedef Tuple4#(Bool, Bool, Bit#(5), Bit#(ELEN)) FwdType;
  `endif
  
  // This struct captures the decoded addresses of the operands and destination registers.
  // Max width : 20 bits
  typedef struct{
    Bit#(5) rs1addr;
    Bit#(5) rs2addr;
    Bit#(5) rd;
  `ifdef spfpu
    Bit#(5) rs3addr;
  `endif
  } OpAddr deriving(Bits, Eq, FShow);

  // this struct captures the type of the operands based on the instruction being decoded.
  // Max width: 2+3+1+1= 7 bits
  typedef struct{
    Op1type rs1type;
    Op2type rs2type;
  `ifdef spfpu
    RFType  rs3type;
    RFType  rdtype;
  `endif
  } OpType deriving(Bits, Eq, FShow);

  // this struct holds the meta decoded information of an instruction
  typedef struct{
    Instruction_type inst_type; // instruction type
    Access_type memaccess;      // memory access type
    Bit#(32) immediate;         // immediate fields
    Bit#(7) funct;              // concatenation of f3 and fn fields
    Bool    resume_wfi;         // indicates if core should resume from wfi
    Bool    rerun;              // indicates if the current instruction needs to be rerun
  } InstrMeta deriving(Bits, Eq, FShow); 

  // the final structure of the response from the decoder
  typedef struct{
    OpAddr    op_addr;
    OpType    op_type;
    InstrMeta meta;
  `ifdef compressed
    Bool compressed;
  `endif
  } DecodeOut deriving(Bits, Eq, FShow);
  /*
  //                  rs1,   rs2,      rd      op1 type , op2 type
    typedef Tuple5#(Bit#(5), Bit#(5), Bit#(5), Op1type, Op2type) OpType_min;
  //                {fn,f3}   instr-Type       mem-type     Imm
    typedef Tuple4#(Bit#(7), Instruction_type, Access_type, Bit#(32)) DecodeMeta; 
                                          // resume_wfi , rerun
    typedef Tuple4#(OpType_min,DecodeMeta, Bool, Bool) DecodeOut;
    
    typedef Tuple3#(Bit#(5), RFType, RFType) OpType_fpu;
  */
  // ------------------------------------------------------------------------------------------

  `ifdef spfpu
    typedef Tuple6#(Bit#(ELEN), Bit#(ELEN), Bit#(3), Bit#(3), 
                    Bit#(FLEN), Bit#(3)) Operands ;
  `else
    typedef Tuple4#(Bit#(XLEN), Bit#(XLEN), Bit#(3), Bit#(3)) Operands ;
  `endif

  // define all tuples here
  typedef struct{
    Bool done; 
    PreCommit_type cmtype;
    Bit#(ELEN) aluresult ;
    Bit#(`vaddr) effective_addr;
    Bit#(`causesize) cause;
    Bool redirect;
  `ifdef branch_speculation
    Bool branch_taken;
    Bit#(`vaddr) redirect_pc;
  `endif
  } ALU_OUT deriving (Bits,  Eq,  FShow);
  
  typedef Tuple5#(Bit#(`paddr), Bit#(XLEN), Access_type, Bit#(2), Bit#(1)) MemoryRequest;
  typedef Tuple4#(Bit#(`paddr), Access_type, Bit#(2), Bit#(1)) CoreRequest;

  typedef Tuple3#(Bit#(5), Bool, Bit#(XLEN)) OpFwding;
  // rg_prv,  csr_mip, csr_mie, csr_mideleg, csr_misa, csr_counteren, rg_mie, {fs,frm}
//  typedef Tuple8#(Privilege_mode, Bit#(12), Bit#(12), Bit#(12), Bit#(26), Bit#(3), 
//                   Bit#(1), Bit#(4)) CSRtoDecode;
  typedef struct{
    Privilege_mode prv;
    Bit#(12) csr_mip;
    Bit#(12) csr_mie;
  `ifdef non_m_traps
    Bit#(12) csr_mideleg;
  `endif
  `ifdef supervisor
    Bit#(12) csr_sip;
    Bit#(12) csr_sie;
    Bit#(12) csr_sideleg;
  `endif
  `ifdef usertraps
    Bit#(12) csr_uip;
    Bit#(12) csr_uie;
  `endif
    Bit#(26) csr_misa;
    Bit#(XLEN) csr_mstatus;
    Bit#(3) frm;} CSRtoDecode deriving(Bits,Eq,FShow);

  typedef Tuple6#(Privilege_mode, Bit#(XLEN), Bit#(32), Bit#(5), Bit#(ELEN), RFType) DumpType;
 
  typedef Tuple3#(Bit#(`vaddr), Bit#(`vaddr), Bit#(2)) Training_data;
`ifdef compressed
  typedef Tuple4#(Bit#(2), Bit#(2), Bit#( `vaddr ), Bool) PredictionResponse;
`else
  typedef Tuple2#(Bit#(2), Bit#(`vaddr )) PredictionResponse;
`endif

  typedef Tuple3#(
    Bit#(addr), // ADDR
    Bit#(esize),// epoch
    Bit#(3))    // access_size
    MemoryReadReq#(numeric type addr, numeric type esize);
                    // data , trap, cause, eopch size
  typedef Tuple4#(Bit#(ELEN), Bool, Bit#(6), Bit#(esize)) MemoryReadResp#(numeric type esize);
  
  typedef Tuple3#(
    Bit#(addr), // ADDR
    Bit#(data), // DATA
    Bit#(2))    // access_size
    MemoryWriteReq#(numeric type addr, numeric type esize, numeric type data);
                    // err , eopch size
  typedef Bit#(1) MemoryWriteResp;

  typedef struct{
    Bit#(`vaddr ) pc;
  `ifdef branch_speculation
    Bit#(2) prediction;
  `endif
    Bit#(2) epoch;
  } PIPE0 deriving(Bits,Eq,FShow);

  // -- structure of the first pipeline stage -----------------//
  typedef struct{
  	Bit#(`vaddr) program_counter;
  	Bit#(32) instruction;
  	Bit#(`iesize) epochs;
    Bool trap ;
  `ifdef supervisor
    Bit#(6) cause;
  `endif
  `ifdef compressed
    Bool upper_err;
  `endif
  `ifdef branch_speculation
    Bit#(2) prediction;
  `endif
  }PIPE1 deriving (Bits,Eq,FShow);
  
  // ---------- Tuples for the second Pipeline Stage -----------//
  // type holding the meta information for stage3.
  // Max Width: 7+3+4+64+1+2 = 81 bits
  typedef struct{
    Bit#(7) funct;
    Access_type memaccess;
    Instruction_type inst_type;
    Bit#(`vaddr) pc;
  `ifdef RV64
    Bool  word32;
  `endif
    Bit#(2) epochs;
  `ifdef compressed
    Bool compressed;
  `endif
  `ifdef branch_speculation
    Bit#(2) prediction;
  `endif
  } Stage3Meta deriving(Bits, Eq, FShow);

  // struct holding the operands read from the RF in decode stage.
  // Max width = 64*3 = 192 bits
  typedef struct{
    Bit#(ELEN) op1;
    Bit#(ELEN) op2;
    Bit#(FLEN) op3;
  } RFOperands deriving(Bits, Eq, FShow);

  typedef struct{
    OpAddr op_addr;
    OpType op_type;
  } Stage3OpMeta deriving(Bits, Eq, FShow);

  
  // -------------------------------------------------------------
  // ---------- Tuples for the third Pipeline Stage -----------//

  //for TRAP type commit: total : 85
  // cause                7 bits            
  // badaddr              `vaddr             -done
  // pc                   `vaddr             -done

  // for MEMORY type      total: 156
  // address              `vaddr             -done
  // data                 ELEN              -done
  // pc                   `vaddr             -done required to generate TRAP
  // atomic op            4-bits      
  // accesstype           3-bits            
  // access_size          3-bits
  // rdtype               1.bit
  // rd                   5-bits            
  // meta_arrangement:    {atomic_op, nanboxing,access_size,accesstype,rdtype,rd} = 17

  // for REGULAR          total: 78
  // rdvalue              ELEN              -done
  // fpu-flags            5 bits            -done
  // rdtype               1 bits            -done
  // rd                   5 bits            -done
  // meta1_arrangement:    {rdtype,rd} = 6
  // meta2_arrangement:    {fpu-flags} = 5

  // for SYSTEM_INSTR     total: 90 bits
  // csr_imm or rs1       XLEN              -done
  // lpc                  2 bits            -done
  // csr_address          12 bits           -done
  // funct3               3 bits            -done
  // rdtype               1-bit             -done
  // rd                   5-bits            -done
  // meta2_arrangement:    {lpc,csraddress,funct3} = 17
  // meta1_arrangement:    {rdtype,rd} = 6

  // Common: epoch 1-bit

  typedef Bit#(`vaddr)     Tbad_Maddr_Rmeta2_Smeta2;
  typedef Bit#(ELEN)      Mdata_Rrdvalue_Srs1;
  typedef Bit#(`vaddr)     Tpc_Mpc;
  typedef Bit#(18)        Tcause_Mmeta_Rmeta1_Smeta1_epoch;

  typedef Tuple5#(PreCommit_type, Tbad_Maddr_Rmeta2_Smeta2, Mdata_Rrdvalue_Srs1,
                                                Tpc_Mpc,Tcause_Mmeta_Rmeta1_Smeta1_epoch) PIPE3;
                
  // ----------------------------------------------------------//
  // ---------- Tuples for the third Pipeline Stage -----------//

  //for TRAP type commit: total : 85
  // cause                7 bits            
  // badaddr              `vaddr             -done
  // pc                   `vaddr             -done

  // for STORE type      total: 42
  // pc                   `vaddr           
  // rdindex              3-bits

  // for REGULAR          total: 78
  // rdvalue              ELEN              -done
  // fpu-flags            5 bits            -done
  // rdtype               1 bits            -done
  // rd                   5 bits            -done
  // rdindex              3 bits            -done
  // meta1_arrangement:    {rdtype,rd,rdindex} = 9
  // meta2_arrangement:    {fpu-flags} = 5

  // for SYSTEM_INSTR     total: 90 bits
  // csr_imm or rs1       XLEN              -done
  // lpc                  2 bits            -done
  // csr_address          12 bits           -done
  // funct3               3 bits            -done
  // rdtype               1-bit             -done
  // rd                   5-bits            -done
  // rdindex              3 bits            -done
  // meta2_arrangement:    {lpc,csraddress,funct3} = 17
  // meta1_arrangement:    {rdtype,rd,rdindex} = 9

  // Common: epoch 1-bit
  typedef struct{
    Bit#(6) cause;
    Bit#(`vaddr) badaddr;
    Bit#(`vaddr) pc;}CommitTrap deriving(Bits,Eq,FShow);

  typedef struct{
    Bit#(`vaddr) pc;
  `ifdef atomic
    Bit#(ELEN) commitvalue;
    Bit#(5) rd;
  `endif }CommitStore deriving (Bits,Eq,FShow);

  typedef struct{
    Bit#(ELEN) commitvalue;
    Bit#(5) fflags;
    RFType rdtype;
    Bit#(5) rd;
    }CommitRegular deriving(Bits,Eq,FShow);

  typedef struct{
    Bit#(XLEN) rs1;
    Bit#(2) lpc;
    Bit#(12) csraddr;
    Bit#(3) func3;
    RFType rdtype;
    Bit#(5) rd;
    }CommitSystem deriving(Bits,Eq,FShow);

  typedef union tagged{
    CommitTrap TRAP;
    CommitStore STORE;
    CommitRegular REG;
    CommitSystem SYSTEM;} CommitType deriving(Bits,Eq,FShow);

  typedef Tuple2#(CommitType,Bit#(1)) PIPE4;

  // ----------------------------------------------------------//

  

  typedef struct {
  	Bit#(1)			mprv;
  	Bit#(1)			sum;
  	Bit#(1)			mxr;
  	Privilege_mode mpp;
  	Privilege_mode prv;
  } Chmod deriving(Bits, Eq);

  `ifdef spfpu
    typedef Tuple3#(Bit#(5), Bit#(ELEN), RFType) CommitData;
    typedef Tuple3#(Bit#(5), Bit#(TLog#(PRFDEPTH)), RFType) CommitRename;
  `else
    typedef Tuple2#(Bit#(5), Bit#(XLEN)) CommitData;
    typedef Tuple2#(Bit#(5), Bit#(TLog#(PRFDEPTH))) CommitRename;
  `endif

  typedef struct{
		Bit#(width) final_result;					// the final result for the operation
		Bit#(5) fflags; 					// indicates if any exception is generated.
	}Floating_output#(numeric type width) deriving(Bits,Eq);				// data structure of the output FIFO.

endpackage
