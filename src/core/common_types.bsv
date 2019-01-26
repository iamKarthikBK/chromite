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

  // ---------------- following types are used to define the memory interfaces from the core ---//
`ifdef icache
  `ifdef supervisor
    typedef Tuple4#(Bit#(addr), Bool, Bool, Bit#(esize)) ICore_request#(numeric type addr, 
                                                                            numeric type esize);
  `else                                                                          
                    // addr, Fence, epoch
    typedef Tuple3#(Bit#(addr), Bool, Bit#(esize)) ICore_request#(numeric type addr, 
                                                                            numeric type esize);
  `endif
`else
                    // addr,epoch
    typedef Tuple2#(Bit#(addr), Bit#(esize)) ICore_request#(numeric type addr, numeric type esize);
`endif
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
	typedef enum {Load=0, Store=1,  Fence=3 , FenceI=4 `ifdef atomic ,Atomic=2 `endif } Access_type 
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
//  typedef union tagged{
//    Bit#(width) Present;
//  	void Absent;
//  } FwdType#(numeric type width) deriving(Bits,Eq,FShow);
  `ifdef spfpu
    typedef Tuple5#(Bool, Bool, Bit#(5), Bit#(ELEN), RFType) FwdType;
  `else
    typedef Tuple4#(Bool, Bool, Bit#(5), Bit#(ELEN)) FwdType;
  `endif
  
  //                  rs1,   rs2,      rd      op1 type , op2 type
    typedef Tuple5#(Bit#(5), Bit#(5), Bit#(5), Op1type, Op2type) OpType_min;
  //                {fn,f3}   instr-Type       mem-type     Imm
    typedef Tuple4#(Bit#(7), Instruction_type, Access_type, Bit#(32)) DecodeMeta; 
                                          // resume_wfi , rerun
    typedef Tuple4#(OpType_min,DecodeMeta, Bool, Bool) DecodeOut;
    
    typedef Tuple3#(Bit#(5), RFType, RFType) OpType_fpu;
  // ------------------------------------------------------------------------------------------

  `ifdef spfpu
    typedef Tuple6#(Bit#(ELEN), Bit#(ELEN), Bit#(3), Bit#(3), 
                    Bit#(FLEN), Bit#(3)) Operands ;
  `else
    typedef Tuple4#(Bit#(XLEN), Bit#(XLEN), Bit#(3), Bit#(3)) Operands ;
  `endif

  // define all tuples here
  typedef Tuple5#(PreCommit_type, Bit#(ELEN), Bit#(`vaddr), Bit#(6), Flush_type) ALU_OUT;
  
  typedef Tuple5#(Bit#(`paddr), Bit#(XLEN), Access_type, Bit#(2), Bit#(1)) MemoryRequest;
  typedef Tuple4#(Bit#(`paddr), Access_type, Bit#(2), Bit#(1)) CoreRequest;

  typedef Tuple3#(Bit#(5), Bool, Bit#(XLEN)) OpFwding;
  // rg_prv,  csr_mip, csr_mie, csr_mideleg, csr_misa, csr_counteren, rg_mie, {fs,frm}
  typedef Tuple8#(Privilege_mode, Bit#(12), Bit#(12), Bit#(12), Bit#(26), Bit#(3), 
                   Bit#(1), Bit#(4)) CSRtoDecode;

  typedef Tuple6#(Privilege_mode, Bit#(XLEN), Bit#(32), Bit#(5), Bit#(ELEN), RFType) DumpType;
  
  typedef struct {
  	Bit#(addr_width) pc;
  	Bit#(addr_width) branch_address;
  	Bit#(2) state;
    } Training_data#(numeric type addr_width) deriving (Bits, Eq);
  
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
  typedef Bit#(2) MemoryWriteResp;

  // -- structure of the first pipeline stage -----------------//
  typedef struct{
  	Bit#(`vaddr) program_counter;
  	Bit#(32) instruction;
  	Bit#(2) epochs;
    Bool trap ;
  `ifdef supervisor
    Bit#(1) cause;
  `endif
  }PIPE1_min deriving (Bits,Eq);

  typedef struct{Bit#(2) prediction;} PIPE1_opt1 deriving(Bits,Eq,FShow);
  typedef struct{Bit#(1) pagefault;} PIPE1_opt2 deriving(Bits,Eq,FShow);

  
  // ---------- Tuples for the second Pipeline Stage -----------//

  typedef Tuple4#(Bit#(5), // rs1addr
                 Bit#(5), // rs2addr
                 Bit#(`vaddr), // pc_rs1,
                 Instruction_type)  OpMeta;
  typedef Tuple3#(
                 Bit#(msize), // rs1_pc
                 Bit#(msize), // rs2_instruction(for badaddr)
                 Bit#(t))     // rs3_imm. Incase fpu is on then t = FLEN else `vaddr
                 OpData#(numeric type msize, numeric type t);
  typedef Tuple5#(Bit#(5), // rd
                 Bit#(7), // {fn,f3} or cause
                 Access_type, // memory access type
                 Bool, //Word32
                 Bit#(2) // epochs
                ) MetaData;
  typedef Tuple3#(OpMeta, OpData#(msize,t), MetaData) PIPE2_min#(numeric type msize, numeric type t);
  typedef Tuple5#(Bit#(5), // rs3addr
                 RFType, // rs1type
                 RFType, // rs2type
                 RFType, // rs3type
                 RFType // rdtype
                ) OpFpu;

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

/*======= AXI4 master/slave numbers ======*/
typedef 0 Sdram_slave_num;
typedef  TAdd#(Sdram_slave_num	 ,`ifdef SDRAM		1 `else 0 `endif )		Sdram_cfg_slave_num;
typedef	TAdd#(Sdram_cfg_slave_num,`ifdef BOOTROM	1 `else 0 `endif )		BootRom_slave_num	;
typedef	TAdd#(BootRom_slave_num  ,`ifdef Debug		1 `else 0 `endif )		Debug_slave_num	;
typedef  TAdd#(Debug_slave_num	 , `ifdef TCMemory	1 `else 0 `endif )		TCM_slave_num;
typedef  TAdd#(TCM_slave_num	 ,`ifdef DMA			1 `else 0 `endif )	Dma_slave_num;
typedef  TAdd#(Dma_slave_num	  ,1 )		SlowPeripheral_slave_num;
typedef  TAdd#(SlowPeripheral_slave_num,`ifdef VME	1 `else 0 `endif )       VME_slave_num;
typedef  TAdd#(VME_slave_num,`ifdef FlexBus	1 `else 0 `endif )              FlexBus_slave_num;
typedef	TAdd#(FlexBus_slave_num,1)						 Num_Slaves;
typedef 0 Dmem_master_num;
typedef 1 Imem_master_num;
typedef TAdd#(Imem_master_num , `ifdef Debug 1 `else 0 `endif ) Debug_master_num;
typedef TAdd#(Debug_master_num, `ifdef DMA 1 `else 0 `endif ) DMA_master_num;
typedef TAdd#(DMA_master_num,1) Num_Masters;

/*=============================================================================== */
endpackage
