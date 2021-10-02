
VERILOGDIR:=build/hw/verilog

BSVBUILDDIR:=build/hw/intermediate

BSVOUTDIR:=bin

BSCCMD:=bsc -u -verilog -elab -vdir build/hw/verilog -bdir build/hw/intermediate -info-dir build/hw/intermediate +RTS -K40000M -RTS -check-assert  -keep-fires -opt-undetermined-vals -remove-false-rules -remove-empty-rules -remove-starved-rules -remove-dollar -unspecified-to X -show-schedule -show-module-use -cross-info 

BSC_DEFINES:=Addr_space=25 xlen=64 flen=64 elen=64 bypass_sources=2 ASSERT rtldump isb_s0s1=2 isb_s1s2=2 isb_s2s3=1 isb_s3s4=8 isb_s4s5=8 RV64 ibuswidth=64 dbuswidth=64 resetpc=4096 paddr=32 vaddr=64 CORE_AXI4 iesize=2 desize=1 num_harts=1 microtrap_support no_wawstalls wawid=4 simulate mhpm_eventcount=31 atomic reservation_sz=8 compressed muldiv MULSTAGES_IN=1 MULSTAGES_OUT=1 MULSTAGES_TOTAL=2 DIVSTAGES=32 zicsr user supervisor itlbsize=4 dtlbsize=4 asidwidth=8 sv39 non_m_traps bpu gshare btbdepth=32 bhtdepth=512 histlen=8 histbits=5 rasdepth=8 bpu_ras iwords=4 iblocks=16 iways=4 isets=64 ifbsize=4 icache_onehot=0 icache ifence irepl=0 dwords=8 dblocks=8 dways=4 dsets=64 dfbsize=9 dsbsize=2 dlbsize=4 dibsize=2 dcache_1r1w dcache_onehot=0 dcache drepl=1 csr_low_latency pmp pmpentries=4 pmp_grainbits=3 reset_cycles=512 max_int_cause=16 max_ex_cause=32 causesize=7 stage0_noinline stage1_noinline stage2_noinline stage3_noinline stage4_noinline stage5_noinline mbox_noinline mbox_mul_noinline mbox_div_noinline registerfile_noinline bpu_noinline riscv_noinline csrbox_noinline scoreboard_noinline bypass_noinline base_alu_noinline decoder_noinline decompress_noinline

BSVINCDIR:=.:%/Libraries:src/:csrbox/:src/predictors:src/mbox:src/fbox/bluespec_src/:test_soc/:fabrics/axi4:fabrics/axi4_lite:fabrics/apb:fabrics/bridges:cache_subsystem/src/icache:cache_subsystem/src/dcache:cache_subsystem/src/tlbs:cache_subsystem/src/pmp:devices/rom:devices/uart:devices/clint:devices/ram2rw:devices/riscv_debug/:devices/jtagdtm:common_bsv/:bsvwrappers/common_lib/

BS_VERILOG_LIB:=/home/root/chromite_bb/bluespec/bsc/inst/lib/Verilog/

TOP_MODULE:=mkTbSoc

TOP_DIR:=test_soc

TOP_FILE:=TbSoc.bsv

VERILATOR_FLAGS:= -O3 -LDFLAGS "-static" --x-assign fast  --x-initial fast --noassert sim_main.cpp --bbox-sys -Wno-STMTDLY  -Wno-UNOPTFLAT -Wno-WIDTH -Wno-lint -Wno-COMBDLY -Wno-INITIALDLY  --autoflush   --threads 1 -DBSV_RESET_FIFO_HEAD  -DBSV_RESET_FIFO_ARRAY --output-split 20000  --output-split-ctrace 10000

VERILATOR_SPEED:=OPT_SLOW="-O3" OPT_FAST="-O3"

XLEN:=64

TOP_BIN=TbSoc.bo

include depends.mk
