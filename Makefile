include ./makefile.inc

# ------------------------------------- Makefile TARGETS ----------------------------------------- #
default: generate_verilog link_verilator generate_boot_files
gdb: generate_verilog link_verilator_gdb generate_boot_files


.PHONY: help
help: ## This help dialog.
	@fgrep -h "##" $(MAKEFILE_LIST) | fgrep -v fgrep | sed -e 's/\\$$//' | sed -e 's/##//' | column	-c2 -t -s :

.PHONY: generate_verilog
generate_verilog: ## Generete verilog from BSV
	@echo Compiling $(TOP_MODULE) in verilog ...
	@mkdir -p $(BSVBUILDDIR) $(VERILOGDIR);
	$(BSCCMD) -p $(BSVINCDIR) -g $(TOP_MODULE) $(TOP_DIR)/$(TOP_FILE)  || (echo "BSC COMPILE ERROR"; exit 1)
	@echo Compilation Successful

.PHONY: link_verilator
link_verilator: ## Generate simulation executable using Verilator
	@echo "Linking $(TOP_MODULE) using verilator"
	@mkdir -p $(BSVOUTDIR) obj_dir
	@echo "#define TOPMODULE V$(TOP_MODULE)" > sim_main.h
	@echo '#include "V$(TOP_MODULE).h"' >> sim_main.h
	verilator $(VERILATOR_FLAGS) --cc $(TOP_MODULE).v -y $(VERILOGDIR) \
		-y $(BS_VERILOG_LIB) -y bsvwrappers/common_lib/ --exe
	@ln -f -s ../test_soc/sim_main.cpp obj_dir/sim_main.cpp
	@ln -f -s ../sim_main.h obj_dir/sim_main.h
	make $(VERILATOR_SPEED) VM_PARALLEL_BUILDS=1 -j4 -C obj_dir -f V$(TOP_MODULE).mk
	@cp obj_dir/V$(TOP_MODULE) $(BSVOUTDIR)/out

.PHONY: link_verilator_gdb
link_verilator_gdb: ## Generate simulation executable using Verilator and VPI for GDB
	@echo "Linking Verilator With the remotebitbang Vpi"
	@mkdir -p $(BSVOUTDIR) obj_dir
	@echo "#define TOPMODULE V$(TOP_MODULE)_edited" >sim_main.h
	@echo '#include "V$(TOP_MODULE)_edited.h"' >> sim_main.h
	@sed  -f devices/jtagdtm/sed_script.txt  $(VERILOGDIR)/$(TOP_MODULE).v > tmp1.v
	@cat  devices/jtagdtm/verilator_config.vlt \
	      devices/jtagdtm/vpi_sv.v \
	      tmp1.v                         > $(VERILOGDIR)/$(TOP_MODULE)_edited.v
	@rm   -f  tmp1.v
	verilator $(VERILATOR_FLAGS) --threads-dpi all --cc $(TOP_MODULE)_edited.v --exe sim_main.cpp devices/jtagdtm/remotebitbang.c -y $(VERILOGDIR) -y $(BS_VERILOG_LIB) -y bsvwrappers/common_lib/ 
	@ln -f -s ../test_soc/sim_main.cpp obj_dir/sim_main.cpp
	@ln -f -s ../sim_main.h obj_dir/sim_main.h
	@ln -f -s ./devices/jtagdtm/remotebitbang.c obj_dir/remotebitbang.c
	@echo "INFO: Linking verilated files"
	make $(VERILATOR_SPEED) VM_PARALLEL_BUILDS=1 -j4 -C obj_dir -f V$(TOP_MODULE)_edited.mk
	@cp obj_dir/V$(TOP_MODULE)_edited $(BSVOUTDIR)/out
	@cp test_soc/gdb_setup/code.mem$(XLEN) $(BSVOUTDIR)/code.mem
	@echo Linking finished


.PHONY: update_xlen
update_xlen:
	@echo "XLEN=$(XLEN)" > verification/dts/Makefile.inc

.PHONY: simulate
simulate: ## Simulate the 'out' executable
	@echo Simulation...
	@exec ./$(BSVOUTDIR)/out > log
	@echo Simulation finished

.PHONY: link_vcs
link_vcs: ## Generate simulation executable using Synopsys VCS
	@rm -rf $(BSVOUTDIR)
	@mkdir -p $(BSVOUTDIR)
	vcs -LDFLAGS -Wl,--no-as-needed -l vcs_compile.log -sverilog +vpi +v2k -lca +define+TOP=$(TOP_MODULE) $(VCS_MACROS) \
	+define+BSV_TIMESCALE=1ns/1ps +cli+4 +libext+.v +notimingcheck \
	-y $(VERILOGDIR)/ \
	${BS_VERILOG_LIB}/main.v -o out
	@mv csrc out* $(BSVOUTDIR)

.PHONY: link_ncverilog
link_ncverilog: ## Generate simulation executable using Cadence NCVerilog
	@echo "Linking $(TOP_MODULE) using ncverilog..."
	@rm -rf work include $(BSVOUTDIR)/work
	@mkdir -p $(BSVOUTDIR) work
	@echo "define work ./work" > cds.lib
	@echo "define WORK work" > hdl.var
	@ncvlog -64BIT -sv -cdslib ./cds.lib -hdlvar ./hdl.var +define+TOP=$(TOP_MODULE) $(VCS_MACROS)\
	${BS_VERILOG_LIB}/main.v \
	-y $(VERILOGDIR)/ \
	-y ${BS_VERILOG_LIB}/
	@ncelab  -cdslib ./cds.lib -hdlvar ./hdl.var work.main -timescale 1ns/1ps
	@echo 'ncsim -cdslib ./cds.lib -hdlvar ./hdl.var work.main #> /dev/null' > $(BSVOUTDIR)/out
	@mv work cds.lib hdl.var $(BSVOUTDIR)/
	@chmod +x $(BSVOUTDIR)/out
	@echo Linking finished

.PHONY: link_ncverilog_openocd
link_ncverilog_openocd: ## Generate simulation executable using Synopsys VCS with VPI for GDB
	@echo "Linking $(TOP_MODULE) using ncverilog..."
	@rm -rf work include bin/work
	@mkdir -p bin
	@mkdir work
	@echo "Building RBB VPI"
	@echo "define work ./work" > cds.lib
	@echo "define WORK work" > hdl.var
	@ncvlog -64BIT -sv -cdslib ./cds.lib -hdlvar ./hdl.var +define+TOP=$(TOP_MODULE) \
	${BS_VERILOG_LIB}/main.v \
	-y $(VERILOGDIR)/ \
	-y ${BS_VERILOG_LIB}/
	@ncelab -64BIT -cdslib ./cds.lib -hdlvar ./hdl.var work.main -loadvpi rbb_vpi.so: -timescale 1ns/1ps
	@echo 'ncsim -64BIT -cdslib ./cds.lib -hdlvar ./hdl.var -loadvpi rbb_vpi.so: work.main #> /dev/null' > $(BSVOUTDIR)/out
	@mv ./*.so $(BSVOUTDIR)/
	@mv work cds.lib hdl.var $(BSVOUTDIR)/
	@chmod +x $(BSVOUTDIR)/out
	@echo Linking finished

.PHONY: link_irun
link_irun:
	@irun -define TOP=mkTbSoC -timescale 1ns/1ps $(VERILOGDIR)/main.v \
	-y $(VERILOGDIR)/ \
	-y ${BS_VERILOG_LIB}/

.PHONY: link_msim
link_msim: ## Generate simulation executable using Mentor's ModelSim tool
	@echo "Linking $(TOP_MODULE) using modelsim..."
	@rm -rf work* $(BSVOUTDIR)/*
	@mkdir -p $(BSVOUTDIR)
	vlib work
	vlog -work work +libext+.v+.vqm -y $(VERILOGDIR) -y ${BS_VERILOG_LIB} \
		+define+TOP=$(TOP_MODULE) $(VCS_MACROS) ${BS_VERILOG_LIB}/main.v \
		./$(VERILOGDIR)/$(TOP_MODULE).v  > compile_log
	mv compile_log ./$(BSVOUTDIR)
	mv work ./$(BSVOUTDIR)
	echo 'vsim -quiet -novopt -lib work -do "run -all; quit" -c main' > $(BSVOUTDIR)/out
	@chmod +x $(BSVOUTDIR)/out
	@echo Linking finished


.PHONY: generate_boot_files
generate_boot_files: ## to generate boot files for simulation
generate_boot_files: update_xlen
	@mkdir -p bin
	@cd verification/dts/; make;
	@cp verification/dts/boot.hex bin/boot.mem

.PHONY: yml
yml:
	@SHAKTI_HOME=$$PWD python3 $(SHAKTI_HOME)/verification/verif-scripts/gen_yml.py $(opts)

.PHONY: clean
clean:
	rm -rf $(BSVBUILDDIR) *.log $(BSVOUTDIR) obj_dir
	rm -f *.jou rm *.log *.mem log sim_main.h cds.lib hdl.var

clean_verilog: clean
	rm -rf $(VERILOGDIR)
	rm -rf fpga/
	rm -rf INCA*
	rm -rf work
	rm -f ./ncvlog.*
	rm -f irun.*

clean_verif:
	rm -rf verification/workdir/*
	rm -rf verification/riscv-torture/output/riscv-torture

restore: clean_verilog
