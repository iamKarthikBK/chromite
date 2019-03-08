### Makefile for the eclass project
### Generated by Bluespec Workstation on Thu Nov 12 19:54:06 IST 2015

ifeq (, $(wildcard ./old_vars))
	old_define_macros = ""
else
	include ./old_vars
endif
include soc_config.inc

ifeq ($(define_macros),)
	define_macros+= -D Addr_space=21
else
ifneq (,$(findstring Addr_space,$(define_macros)))
else
	override define_macros+= -D Addr_space=21
endif
endif

SHAKTI_HOME=$(PWD)
export SHAKTI_HOME

define presim_config
#	@cd src/caches/;python3 gen_test_dcache.py
#	@ln -fs src/caches/*.mem .
endef

TOP_MODULE:=mkTbSoC
TOP_FILE:=TbSoC.bsv
TOP_DIR:=./src/testbench
WORKING_DIR := $(shell pwd)

ifneq (,$(findstring RV64,$(ISA)))
  override define_macros += -D RV64=True
  XLEN=64
endif
ifneq (,$(findstring RV32,$(ISA)))
  override define_macros += -D RV32=True
  XLEN=32
endif
ifneq (,$(findstring M,$(ISA)))
  ifeq ($(MUL), fpga)
    override define_macros += -D muldiv_fpga=True -D muldiv=True
  else
    override define_macros += -D $(MUL)=True -D muldiv=True
  endif
endif
ifneq (,$(findstring A,$(ISA)))
  override define_macros += -D atomic=True
endif
ifneq (,$(findstring F,$(ISA)))
  override define_macros += -D spfpu=True
  FLOAT=--float
endif
ifneq (,$(findstring D,$(ISA)))
  override define_macros += -D dpfpu=True
  FLOAT=--float
endif
ifneq (,$(findstring C,$(ISA)))
  override define_macros += -D compressed=True
endif
ifeq ($(SYNTH),SIM)
  override define_macros += -D simulate=True
endif
ifeq ($(BOOTROM), enable)
  override define_macros += -D BOOTROM=True
endif
ifeq ($(COREFABRIC), AXI4Lite)
  override define_macros += -D CORE_AXI4Lite=True
endif
ifeq ($(USERTRAPS), enable)
  override define_macros += -D usertraps=True
endif
ifeq ($(USER), enable)
  override define_macros += -D user=True
endif
ifeq ($(RTLDUMP), enable)
  override define_macros += -D rtldump=True
endif
ifeq ($(SUPERVISOR),  enable)
  override define_macros += -D supervisor=True
endif
ifeq ($(ASSERTIONS), enable)
  override define_macros += -D ASSERT=True
endif
ifeq ($(ICACHE), enable)
  override define_macros += -D icache=True
endif
ifeq ($(DCACHE), enable)
  override define_macros += -D dcache=True
endif
ifeq ($(PMP), enable)
	override define_macros += -D pmp=True
endif
ifeq ($(BPU), enable)
	override define_macros += -D bpu=True
endif
ifeq ($(RAS), enable)
	override define_macros += -D ras=True
endif
ifeq ($(BPU), enable)
	override define_macros += -D branch_speculation=True
endif



ifeq ($(COVERAGE), none)
else ifeq ($(COVERAGE),all)
  coverage := --coverage
else
  coverage := --coverage-$(COVERAGE)
endif

ifeq ($(TRACE), enable)
  trace := --trace
endif

VCS_MACROS =  +define+BSV_RESET_FIFO_HEAD=True +define+BSV_RESET_FIFO_ARRAY=True

ifneq (0,$(VERBOSITY))
	VERILATOR_FLAGS += -DVERBOSE
	VCS_MACROS += +define+VERBOSE=True
endif

override define_macros += -D VERBOSITY=$(VERBOSITY) -D CORE_$(COREFABRIC)=True -D MULSTAGES=$(MULSTAGES) \
								 -D DIVSTAGES=$(DIVSTAGES) -D Counters=$(COUNTERS) -D $(MAINMEM)=True \
								 -D iwords=$(IWORDS) -D iblocks=$(IBLOCKS) -D iways=$(IWAYS) -D isets=$(ISETS) \
								 -D ifbsize=$(IFBSIZE) -D irepl=$(IREPL) -D icachereset=$(IRESET) -D iesize=$(IESIZE) \
								 -D idbanks=$(IDBANKS) -D itbanks=$(ITBANKS) -D ddbanks=$(DDBANKS) -D dtbanks=$(DTBANKS) \
								 -D dwords=$(DWORDS) -D dblocks=$(DBLOCKS) -D dways=$(DWAYS) -D dsets=$(DSETS) \
								 -D dfbsize=$(DFBSIZE) -D drepl=$(DREPL) -D dcachereset=$(DRESET) -D desize=$(DESIZE) \
								 -D dsbsize=$(DSBSIZE) -D ibuswidth=$(IBUSWIDTH) \
								 -D PIPE$(PIPE)=True -D paddr=$(PADDR) -D vaddr=$(XLEN) -D PMPSIZE=$(PMPSIZE) \
								 -D resetpc=$(RESETPC) -D asidwidth=$(ASIDWIDTH) \
								 -D btbsize=$(BTBSIZE) -D rassets=$(RASSETS) -D rassize=$(RASSIZE)
		

CORE:=./src/core/:./src/core/fpu/:./src/caches_mmu/src/
M_EXT:=./src/core/m_ext/
FABRIC:=./src/fabrics/axi4:./src/fabrics/axi4lite:./src/fabrics/tilelink_lite
UNCORE:=./src/uncore
TESTBENCH:=./src/testbench/
PERIPHERALS:=./src/devices/bootrom:./src/devices/pwm:./src/devices/uart:./src/devices/clint:./src/devices/bram
WRAPPERS:=./src/wrappers/
LIB:=./src/common_bsv
VERILATOR_FLAGS += --stats -O3 -CFLAGS -O3 -LDFLAGS "-static" --x-assign fast --x-initial fast \
--noassert --cc $(TOP_MODULE).v sim_main.cpp --bbox-sys -Wno-STMTDLY -Wno-UNOPTFLAT -Wno-WIDTH \
-Wno-lint -Wno-COMBDLY -Wno-INITIALDLY --autoflush $(coverage) $(trace) --threads $(THREADS) \
-DBSV_RESET_FIFO_HEAD -DBSV_RESET_FIFO_ARRAY
BSVINCDIR:=.:%/Prelude:%/Libraries:%/Libraries/BlueNoC:$(CORE):$(LIB):$(FABRIC):$(UNCORE):$(TESTBENCH):$(PERIPHERALS):$(WRAPPERS):$(M_EXT)
default: generate_verilog link_verilator generate_boot_files

check-env:
	@if test -z "$$BLUESPECDIR"; then echo "BLUESPECDIR variable not set"; exit 1; fi;
	@if test -z "$$SHAKTI_HOME"; then echo "SHAKTI_HOME variable not set"; exit 1; fi;

check-py:
	@if ! [ -a /usr/bin/python3 ] ; then echo "Python3 is required in /usr/bin to run AAPG" ; exit 1; fi;

###### Setting the variables for bluespec compile #$############################
BSVCOMPILEOPTS:= -check-assert  -keep-fires -opt-undetermined-vals -remove-false-rules -remove-empty-rules -remove-starved-rules 
BSVLINKOPTS:=-parallel-sim-link 8 -keep-fires
VERILOGDIR:=./verilog/
BSVBUILDDIR:=./bsv_build/
BSVOUTDIR:=./bin
ifeq (, $(wildcard ${TOOLS_DIR}/shakti-tools/insert_license.sh))
  VERILOG_FILTER:= -verilog-filter ${BLUESPECDIR}/bin/basicinout
else
  VERILOG_FILTER:= -verilog-filter ${BLUESPECDIR}/bin/basicinout -verilog-filter ${TOOLS_DIR}/shakti-tools/insert_license.sh \
									 -verilog-filter ${TOOLS_DIR}/shakti-tools/rename_translate.sh
  VERILOGLICENSE:= cp ${TOOLS_DIR}/shakti-tools/IITM_LICENSE.txt ${VERILOGDIR}
endif
################################################################################

########## BSIM COMLILE, LINK AND SIMULATE TARGETS #################################
.PHONY: check-restore
check-restore: update_xlen
	@if [ "$(define_macros)" != "$(old_define_macros)" ];	then	make clean ;	fi;

.PHONY: update_xlen
update_xlen:
	@echo "XLEN=$(XLEN)" > verification/dts/Makefile.inc

.PHONY:  compile_bluesim
compile_bluesim: check-restore check-env
	@echo "Compiling $(TOP_MODULE) in Bluesim..."
	@mkdir -p $(BSVBUILDDIR) 
	@echo "old_define_macros = $(define_macros)" > old_vars
	bsc -u -sim -simdir $(BSVBUILDDIR) -bdir $(BSVBUILDDIR) -info-dir $(BSVBUILDDIR) $(define_macros)\
  $(BSVCOMPILEOPTS) -p $(BSVINCDIR) -g $(TOP_MODULE) $(TOP_DIR)/$(TOP_FILE)\
	|| (echo "ERROR: BSC COMPILE ERROR"; exit 1)
	@echo "Compilation finished"

.PHONY: link_bluesim
link_bluesim:check-env
	@echo "Linking $(TOP_MODULE) in Bluesim..."
	@mkdir -p $(BSVOUTDIR)
	bsc -e $(TOP_MODULE) -sim -o $(BSVOUTDIR)/out -simdir $(BSVBUILDDIR) -p $(BSVINCDIR) -bdir\
  $(BSVBUILDDIR) $(BSVLINKOPTS) 2>&1 | tee bsv_link.log || (echo "ERROR: BSC LINK ERROR"; exit 1)
	@echo Linking finished

.PHONY: simulate
simulate:
	@echo Simulation...
	$(call presim_config)
	@exec ./$(BSVOUTDIR)/out > log
	@echo Simulation finished
########################################################################################

.PHONY: generate_verilog 
generate_verilog: check-restore check-env 
	@echo Compiling $(TOP_MODULE) in verilog ...
	@mkdir -p $(BSVBUILDDIR); 
	@mkdir -p $(VERILOGDIR); 
	@echo "old_define_macros = $(define_macros)" > old_vars
	bsc -u -verilog +RTS -K40000M -RTS -elab -vdir $(VERILOGDIR) -bdir $(BSVBUILDDIR) -info-dir $(BSVBUILDDIR)\
  $(define_macros) -D verilog=True $(BSVCOMPILEOPTS) $(VERILOG_FILTER) \
  -p $(BSVINCDIR) -g $(TOP_MODULE) $(TOP_DIR)/$(TOP_FILE)  || (echo "BSC COMPILE ERROR"; exit 1) 
	@cp ${BLUESPECDIR}/Verilog.Vivado/RegFile.v ${VERILOGDIR}  
	@cp ${BLUESPECDIR}/Verilog.Vivado/BRAM2BELoad.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog.Vivado/BRAM2BE.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog.Vivado/BRAM2.v ${VERILOGDIR}
	@cp src/common_verilog/bram_1r1w.v ${VERILOGDIR}
	@cp src/common_verilog/bram_1rw.v ${VERILOGDIR}
	@cp src/common_verilog/BRAM1Load.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/FIFO2.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/FIFO1.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/FIFO10.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/RevertReg.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/FIFO20.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/FIFOL1.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncFIFO.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/Counter.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SizedFIFO.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/RegFileLoad.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncReset0.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncRegister.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/MakeClock.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/UngatedClockMux.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/MakeResetA.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncResetA.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/ResetEither.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncHandshake.v ${VERILOGDIR}
	@cp ${BLUESPECDIR}/Verilog/SyncFIFO1.v ${VERILOGDIR}
	@$(VERILOGLICENSE)
#ifeq ($(SYNTH), SIM)
#  ifeq ($(MUL), fpga)
#    ifneq (,$(findstring M,$(ISA)))
#		  @cp fpga/manage_ip/manage_ip.srcs/sources_1/ip/multiplier/multiplier_sim_netlist.v\
#    	./verilog/multiplier.v || (echo "ERROR: PLEASE BUILD VIVADO IP FIRST"; exit 1)
#  #		@cp fpga/manage_ip/manage_ip.srcs/sources_1/ip/divider/divider_sim_netlist.v\
#    	./verilog/divider.v || (echo "ERROR: PLEASE BUILD VIVADO IP FIRST"; exit 1)
#    endif
#  endif
#endif
	@echo Compilation finished

.PHONY: link_vcs
link_vcs: 
	@rm -rf $(BSVOUTDIR)
	@mkdir -p $(BSVOUTDIR)
	vcs -full64 -l vcs_compile.log -sverilog +vpi +v2k -lca +define+TOP=$(TOP_MODULE) $(VCS_MACROS)\
	+define+BSV_TIMESCALE=1ns/1ps +cli+4 +libext+.v +notimingcheck\
  ${XILINX_VIVADO}/data/verilog/src/glbl.v \
	-y $(VERILOGDIR)/  \
	-y ${XILINX_VIVADO}/data/verilog/src/unisims +libext+.v \
	-y ${XILINX_VIVADO}/data/verilog/src/unimacro +libext+.v \
	-y ${XILINX_VIVADO}/data/verilog/src/retarget +libext+.v \
	${BLUESPECDIR}/Verilog/main.v -o out
	@mv csrc out* $(BSVOUTDIR)

.PHONY: link_ncverilog
link_ncverilog: 
	@echo "Linking $(TOP_MODULE) using ncverilog..."
	@rm -rf work include $(BSVOUTDIR)/work
	@mkdir -p $(BSVOUTDIR)
	@mkdir work
	@echo "define work ./work" > cds.lib
	@echo "define WORK work" > hdl.var
	@ncvlog -64BIT -sv -cdslib ./cds.lib -hdlvar ./hdl.var +define+TOP=$(TOP_MODULE) $(VCS_MACROS)\
	${BLUESPECDIR}/Verilog/main.v ${XILINX_VIVADO}/data/verilog/src/glbl.v \
	-y $(VERILOGDIR)/ \
	-y ${BLUESPECDIR}/Verilog/ \
	-y ${XILINX_VIVADO}/data/verilog/src/ \
	-y ${XILINX_VIVADO}/data/verilog/src/unisims \
	-y ${XILINX_VIVADO}/data/verilog/src/unimacro \
	-y ${XILINX_VIVADO}/data/verilog/src/retarget 
	@ncelab  -cdslib ./cds.lib -hdlvar ./hdl.var work.main -timescale 1ns/1ps
	@echo 'ncsim -cdslib ./cds.lib -hdlvar ./hdl.var work.main #> /dev/null' > $(BSVOUTDIR)/out
	@mv work cds.lib hdl.var $(BSVOUTDIR)/
	@chmod +x $(BSVOUTDIR)/out
	@echo Linking finished

.PHONY: link_irun
link_irun:
	@irun -define TOP=mkTbSoC -timescale 1ns/1ps $(VERILOGDIR)/main.v \
	${XILINX_VIVADO}/data/verilog/src/glbl.v \
	-y $(VERILOGDIR)/ \
	-y ${BLUESPECDIR}/Verilog/ \
	-y ${XILINX_VIVADO}/data/verilog/src/ \
	-y ${XILINX_VIVADO}/data/verilog/src/unisims \
	-y ${XILINX_VIVADO}/data/verilog/src/unimacro \
	-y ${XILINX_VIVADO}/data/verilog/src/retarget 
	
	

.PHONY: link_msim
link_msim: 
	@echo "Linking $(TOP_MODULE) using modelsim..."
	@rm -rf work* $(BSVOUTDIR)/*
	@mkdir -p $(BSVOUTDIR)
	vlib work
	vlog -work work +libext+.v+.vqm -y ./src/bfm -y $(VERILOGDIR) -y ${BLUESPECDIR}/Verilog \
		+define+TOP=$(TOP_MODULE) $(VCS_MACROS) ${BLUESPECDIR}/Verilog/main.v \
		./$(VERILOGDIR)/$(TOP_MODULE).v  > compile_log
	mv compile_log ./$(BSVOUTDIR)
	mv work ./$(BSVOUTDIR)
	echo 'vsim -quiet -novopt -lib work -do "run -all; quit" -c main' > $(BSVOUTDIR)/out
	@chmod +x $(BSVOUTDIR)/out
	@echo Linking finished


.PHONY: link_verilator
link_verilator: 
	@echo "Linking $(TOP_MODULE) using verilator"
	@mkdir -p $(BSVOUTDIR) obj_dir
	@echo "#define TOPMODULE V$(TOP_MODULE)" > src/testbench/sim_main.h
	@echo '#include "V$(TOP_MODULE).h"' >> src/testbench/sim_main.h
	verilator $(VERILATOR_FLAGS) -y $(VERILOGDIR) --exe
	@ln -f -s ../src/testbench/sim_main.cpp obj_dir/sim_main.cpp
	@ln -f -s ../src/testbench/sim_main.h obj_dir/sim_main.h
	@make -j8 -C obj_dir -f V$(TOP_MODULE).mk
	@cp obj_dir/V$(TOP_MODULE) $(BSVOUTDIR)/out

.PHONY: ip_build
ip_build: 
	vivado -mode tcl -notrace -source $(SHAKTI_HOME)/src/tcl/create_ip_project.tcl -tclargs $(FPGA) || (echo "Could \
not create IP project"; exit 1)
	@vivado -mode tcl -notrace -source $(SHAKTI_HOME)/src/tcl/create_multiplier.tcl -tclargs $(XLEN) $(MULSTAGES) ||\
(echo "Could not create Multiplier IP"; exit 1)
#	@vivado -mode tcl -notrace -source $(SHAKTI_HOME)/src/tcl/create_nexys4_mig.tcl ||\
(echo "Could not create NEXYS4DDR-MIG  IP"; exit 1)
#	@vivado -mode tcl -notrace -source $(SHAKTI_HOME)/src/tcl/create_divider.tcl -tclargs $(XLEN) $(DIVSTAGES) ||\
(echo "Could not create Divider IP"; exit 1)

.PHONY: vivado_build
vivado_build: 
	@vivado -mode tcl -source $(SHAKTI_HOME)/src/tcl/create_project.tcl -tclargs \
  $(SYNTHTOP) $(FPGA) $(ISA) || (echo "Could not create core project"; exit 1)
	@vivado -mode tcl -source $(SHAKTI_HOME)/src/tcl/run.tcl || (echo "ERROR: While\
  running synthesis")

.PHONY: regress 
regress:  
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeRegress.pl $(opts)
	
.PHONY: test
test:  
	@SHAKTI_HOME=$$PWD CONFIG_LOG=0 perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeTest.pl $(opts)

.PHONY: torture
torture:  
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeTorture.pl $(opts)

.PHONY: aapg
aapg:  
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeAapg.pl $(opts)

.PHONY: csmith
csmith:  
	@SHAKTI_HOME=$$PWD perl -I$(SHAKTI_HOME)/verification/verif-scripts $(SHAKTI_HOME)/verification/verif-scripts/makeCSmith.pl $(opts)

.PHONY: generate_boot_files
generate_boot_files:
	@mkdir -p bin
	@cd verification/dts/; make;
	@cut -c1-8 verification/dts/boot.hex > bin/boot.MSB
	@if [ "$(XLEN)" = "64" ]; then\
	  cut -c9-16 verification/dts/boot.hex > bin/boot.LSB;\
    else cp bin/boot.MSB bin/boot.LSB;\
  fi

.PHONY: patch
patch:
	@cd $(SHAKTI_HOME)/verification/riscv-tests/env && git apply $(SHAKTI_HOME)/verification/patches/riscv-tests-shakti-signature.patch

.PHONY: unpatch
unpatch:
	@cd $(SHAKTI_HOME)/verification/riscv-tests/env && git apply -R $(SHAKTI_HOME)/verification/patches/riscv-tests-shakti-signature.patch

.PHONY: clean
clean:
	rm -rf $(BSVBUILDDIR) *.log $(BSVOUTDIR) obj_dir
	rm -f *.jou rm *.log *.mem old_vars log

clean_verilog: clean 
	rm -rf verilog/
	rm -rf fpga/
	rm -rf INCA*
	rm -rf work
	rm -f ./ncvlog.*
	rm -f irun.*

clean_verif:
	rm -rf verification/workdir/*
	rm -rf verification/riscv-torture/output/riscv-torture

restore: clean_verilog
