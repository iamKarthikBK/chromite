// ------------ NEEDS TO BE REVISED ------------------
`define SDRAMMemBase	'h80000000	
`define SDRAMMemEnd  'h8FFFFFFF // 1GB

`ifdef spfpu
	`define FLEN 32
`endif
`ifdef dpfpu
	`define FLEN 64
`endif

`ifdef verilog
	`define Addr_space 22	//since we are leaving off the lower 2 bits of address(byte addressable memory), we have to 
`else
	`define Addr_space 30
`endif
`define ICACHE_MISS							0
`define ICACHE_CACHEABLE	 				`ICACHE_MISS+1	
`define ICACHE_LINEREPLACE 				`ICACHE_CACHEABLE+1
`define ICACHE_TLBMISS						`ICACHE_LINEREPLACE+1
`define ICACHE_MISALIGNED					`ICACHE_TLBMISS+1
`define ICACHE_PREFETCHMISS				`ICACHE_MISALIGNED+1
`define COND_BRANCH							`ICACHE_PREFETCHMISS+1
`define COND_BRANCH_TAKEN					`COND_BRANCH+1
`define COND_BRANCH_MISPREDICTED			`COND_BRANCH_TAKEN+1
`define TAKEN_BRANCH_MISPREDICTED		`COND_BRANCH_MISPREDICTED+1
`define UNCOND_JUMPS							`TAKEN_BRANCH_MISPREDICTED+1
`define SPFPU_INST							`UNCOND_JUMPS+1
`define DPFPU_INST							`SPFPU_INST+1
`define DCACHE_TLBMISS						`DPFPU_INST+1
`define TOTAL_LOADS							`DCACHE_TLBMISS+1
`define TOTAL_STORES							`TOTAL_LOADS+1
`define TOTAL_ATOMIC							`TOTAL_STORES+1
`define DCACHE_LOAD_MISS					`TOTAL_ATOMIC+1
`define DCACHE_STORE_MISS					`DCACHE_LOAD_MISS+1
`define DCACHE_ATOMIC_MISS					`DCACHE_STORE_MISS+1
`define DCACHE_CACHEABLE_LOAD				`DCACHE_ATOMIC_MISS+1
`define DCACHE_CACHEABLE_STORE			`DCACHE_CACHEABLE_LOAD+1
`define DCACHE_CACHEABLE_ATOMIC			`DCACHE_CACHEABLE_STORE+1
`define DCACHE_WRITEBACKS					`DCACHE_CACHEABLE_ATOMIC+1
`define DCACHE_LINEREPLACE					`DCACHE_WRITEBACKS+1
`define DCACHE_MISALIGNED					`DCACHE_LINEREPLACE+1
`define EXCEPTIONS_TAKEN					`DCACHE_MISALIGNED+1
`define INTERRUPTS_TAKEN					`EXCEPTIONS_TAKEN+1
`define MULDIV_INSTRUCTIONS				`INTERRUPTS_TAKEN+1
`define MEMORY_INSTRUCTIONS				`MULDIV_INSTRUCTIONS+1
`define EXEC_FLUSHES							`MEMORY_INSTRUCTIONS+1
`define WB_FLUSHES							`EXEC_FLUSHES+1
// --------------------------------------------------------------
`define FNADD   0   //'b0000
`define FNSL	  1	  //'b0001  	
`define FNSEQ	  2	  //'b0010  	
`define FNSNE	  3	  //'b0011  	
`define FNXOR	  4	  //'b0100  	
`define FNSR	  5	  //'b0101  	
`define FNOR	  6	  //'b0110	
`define FNAND	  7	  //'b0101
`define FNSUB	  10	//'b1010
`define FNSRA	  11	//'b1011
`define FNSLT	  12	//'b1100
`define FNSGE	  13	//'b1101
`define FNSLTU	14	//'b1110
`define FNSGEU	15	//'b1111

`define FNLR	2	
`define FNSC    3	
`define FNSWAP 1 
`define FMINU	10
`define FMIN	11
`define FMAXU  12
`define FMAX	13

`define FNRAND	8

`define NON_M_TRAP (`USERTRAPS|`supervisor)
/////////////////////////////////////////////////////////////////////////
////////////////////// opcode definitions of ISA ////////////////////////
`define AUIPC_op			    'b00101
`define LUI_op				    'b01101
`define JAL_op  			    'b11011
`define JALR_op  			    'b11001
`define BRANCH_op			    'b11000
`define LOAD_op				    'b00000
`define STORE_op			    'b01000
`define IMM_ARITH_op	    'b00100
`define	ARITH_op			    'b01100
`ifdef RV64
	`define IMM_ARITHW_op	  'b00110
	`define	ARITHW_op		    'b01110
	`define MULDIVW_op		  'b01110
`endif
`define	CSR_op				    'b11100
`define	SYSTEM_INSTR_op		'b11100
`define	MULDIV_op			    'b01100
`define FSTORE_op			'b01001
`define	ATOMIC_op			'b01011

////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// funct3 defintions for ISA ////////////////////

`define MUL_f3		'b000
`define MULH_f3		'b001
`define MULHSU_f3	'b010
`define MULHU_f3	'b011
`define DIV_f3		'b100
`define DIVU_f3		'b101

////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////cache related parameters//////////////////////////
`define ICACHE_WAYS 4			// way_bits =2
`define ICACHE_BLOCK_SIZE 8	// word_bits = 3
`define ICACHE_SETS 512			// set_bits	=7
`define ICACHE_WORD_SIZE 4		// byte_bits=2
`define ICACHE_TAG_BITS 20		// tag_bits = 52

`define Counters 0

////////////////////////////////////////////////////////////////////////////////////
`ifdef simulate
  `define BAUD_RATE 5 //130 //
`endif