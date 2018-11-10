[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](LICENSE)
[![pipeline status](https://gitlab.com/shaktiproject/cores/c-class/badges/master/pipeline.svg)](https://gitlab.com/shaktiproject/cores/c-class/commits/master)
# SHAKTI C-CLASS #

This is the C-class core of the SHAKTI Processor family. This repo contains all the relevant
hardware and software related to the c-class core. The core and the peripherals are developed using Bluespec.
If you wish to contribute or help fix issues, please make a pull-request. You can reach  us at: shakti.iitm@gmail.com

## Contributing to the Project ##

The quickest way to contribute to the SHAKTI project is to create a pull-request for existing issues or any feature additions.

The SHAKTI team is currently hiring for full-time positions. The work would primarily be involved in the domain of design and verification. Interested candidates please send your resume to shakti.iitm@gmail.com.

### Current FEATURES of C-CLASS ###

* 6-stage 64/32-bit pipelined core.
* Supports ISA=RV64IMAFD based on riscv-spec-2.2 and privilege-spec-1.10.
* Bimodal branch predictor with a Return-Address-Stack support.
* Parameterized blocking Instruction and Data cache.
* Serialized Single and Double Precision Floating Point Units.
* Early out multiplier and a restoring divider.
* Supervisor mode - sv39.
* JTAG Debugger based on debug-spec-0.13
* Boots riscv-linux kernel.
* Performance = 1.67DMIPS/MHz and 2.2 Coremarks/MHz

### Setting up environment variables ###

Follow the below steps before using the code-line:
    
              $ git clone https://gitlab.com/shaktiproject/cores/c-class.git --recursive
              $ make patch
              

### Directory Structure ###

* src - holds the bluespec source code of the core, uncore, peripherals and other related files
* verification - holds the directed and random tests for the c-class core.


### Pre-requisites ###

A BSV compiler (version 2017 or above) is necessary to compile the code. More information
on Bluespec can be found [here](www.bluespec.com). 

### Configuring the Soc ###

The soc_config.inc file is used to configure the specs of the core and the Soc that you would like to generate. Following are the current options. The valid values for most of these are "enable" or "disable" unless specified otherwise:

| Feature  | Valid Values | Description |
|----------|--------------|-------------|
| __ISA__  | RV64IMAFD, RV64IMAF,</br> RV64IMA, RV64IM | The ISA support you want the core to provide. Unsuported instructions will be treated as illegal |
| __MMU__  | enable,disable      | virtualization is supported or not by the core. __Mandatory ENABLED__ |
| __BPU__  |  enable,disable    |  Branch predictory is present or not __Mandatory ENABLED__|
| __MUL__  | sequential, parallel| sequential: will implement an 8-cycle early-out multiplier. parallel: will implement single-cycle multiplier.|
|__PERF__  | enable,disable |performance counters are available in the core or not.|
|__PREFETCH__|enable,disable|instruction prefetch is present|
|__DEBUG__|enable,disable| A JTAG based Debugger is present or not|
|__OPENOCD__|enable,disable|OPENOCD is being used to connect to debugger|
| __USERTRAPS__|True,False| When True, implements the user-space csrs meant to handle traps in user-mode.|
|__COREFABRIC__|AXI4, AXI4Lite, TileLink| Chooses which protocol based master must be instantiated for the core.|
|__MULSTAGES__| 1 to XLEN| This defines the latency of the DSP multiplier that needs to be generated and instantiated|
|__DIVSTAGES__| 1 to XLEN| This defines the number of cycles for the non-restoring division algorithm|
|__USER__| True,False| This indicates if user-mode is enabled or not.|
|__SUPERVISOR__| True,False| This enables/disables the supervisor support on the core.|
|__FPGA__| Xilinx Part Number| This should be set with the FPGA part number the synthesis is targetted towards.|
|__SYNTHTOP__| Module Name| This is the module name of the design that needs to be synthesized in the FPGA.|
|__VERBOSE__|enable,disable|This controls whether the $display statements are printed|
|__SYNTH__|SIM, FPGA| controls whether the core is being generated for simulation or synthesis. <br/>* SIM: This will generate a core which will have some simulate-only features like file-io, etc.<br/>* FPGA: This will generate a core which will ignore the simulate-only features.
|__COVERAGE__| none,all, line, toggle, user| This is used for verilator simulation only and enables the coverage.|
|__TRACE__| enable, disable | This is used by verilator to enable or disable VCD dump.|
|__THREADS__|Integer| Number of threads to be used by verilator.|
|__RTLDUMP__|True,False| When set to true will generate a rtl.dump file with instruction trace of the application being run.|


### Compiling the Core/SoC ###

The Makefile in the root-folder is to be used to compile the core/SoC bsv code. For the makefile to work you need to:

* have soc_config.inc in the same folder (template is provided)
* have a file called "old_vars" in the same folder (template is provided). 
* set the following variables in Makefile:
    * TOP_MODULE: set it to the top bsv module name (eg. mkTbSoc)
    * TOP_FILE:   set it to the file (with .bsv extension) containing the TOP_MODULE (eg. TbSoc.bsv)
    * TOP_DIR:    set it to relative path from root-folder containing TOP_FILE (eg. src/testbench.bsv )

Following are the make targets that a user can use:

| Target | Description |
|--------|-------------|
|__compile_bluesim__| This will compile the code in the bsim environment and generate bsv intermediate files in the bsv_build folder.|
|__link_bluesim__|This will link the bsim compiled code and generate a binary in the bin folder.|
|__generate_verilog__|This will compile the code in the verilog environment and generate the verilog files in the verilog folder.|
|__link_ncverilog__| This will compile the generated verilog files and generate an executable in the bin folder using Cadence ncvlog and ncelab tools.|
|__link_msim__|This will compile the generated verilog files and generate an executable in the bin folder using Modelsim.|
|__link_iverilog__|This will compile the generated verilog files and generate an executable in the bin folder using iVerilog.|
|__link_verilator__| This will link the generated verilog files using verilator|
|__simulate__|This executes the "out" executable created by any of the above link_* commands.|
|__clean__| Will delete the bin and bsv_build folders.|
|__clean_verilog__|Will call clean and remove the verilog folder as well.|
|__restore__|Will call clean and clean_verilog  and also perform a clean in the benchmarks folder.|
|__generate_boot_files__|By default the core will start execution from 0x1000 which is mapped to the read-only BootROM. To match the execution with spike this region should hold the dts files which is available in verification/dts/boot.hex . This target will convert the hex file into a format which can be loaded into C-CLASS's bootrom.|

### Simulation Requirements ###

While simulating the core using the "out" executable (generated by any of the link_* targets of the makefile) the following files are required to be present in the same folder as the executable:

* boot.LSB and boot.MSB: generated using the makefile target "generate_boot_files".
* code.mem.LSB and code.mem.MSB: For a software code compiled at 0x80000000 to be loaded into the SHAKTI's memory it has to be first converted to a hex file using the elf2hex command. A elf2hex command is as follows:

            $ elf2hex 8 32768 software.elf 2147483648 > code.hex

This code.hex should now be further split into code.mem.LSB and code.mem.MSB as follows:

            $ cut -c1-8 code.hex> code.mem.MSB 
            $ cut -c9-16 code.hex > code.mem.LSB 
   
To generate VCD go to the bin and execute the following:

* in bsim environment: ./out -V
* in verilog environment: ./out +bscvcd

### Linux on Shakti ###

To run linux on shakti follow the below steps (for the first time)

    To Download the shakti-linux repository 
            $ git clone https://bitbucket.org/casl/shakti-linux.git
            $ cd shakti-linux
            $ export SHAKTI_LINUX=$(pwd)
            $ git submodule update --init --recursive
    
    To generate the kernel image 
            $ cd $SHAKTI_LINUX
            $ make -j16 ISA=rv64imafd
            
    To run the kernel on simulation
            $ cd $SHAKTI_C_HOME
            $ make linux_bsim
            
    The make linux_bsim command will begin running the bluesim simulation. The log of the kernel execution will be in the file: app_log 


More details to follow.. :)







































