[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](LICENSE)
[![pipeline status](https://gitlab.com/shaktiproject/cores/c-class/badges/master/pipeline.svg)](https://gitlab.com/shaktiproject/cores/c-class/commits/master)
# SHAKTI C-CLASS Core 
---------------------
This is the [RISC-V](https://riscv.org) based C-Class core of the [SHAKTI](http://shakti.org.in/) Processor family. The design here is an upgraded version of the previous design found on [bitbucket](https://bitbucket.org/casl/c-class). Once a few critical features have been fixed/integrated the bitbucket repo will be made obsolete.

## Guide
- [SHAKTI C-CLASS Core](#shakti-c-class-core)
  * [Guide](#guide)
  * [Quick Start](#quick-start)
      - [Dependencies](#dependencies)
      - [Clone the repo](#clone-the-repo)
      - [Install DTC](#install-dtc)
  * [Directory Structure](#directory-structure)
  * [Block Diagram](#block-diagram)
  * [FEATURES of C-CLASS](#features-of-c-class)
  * [Configuring the Core](#configuring-the-core)
  * [Compiling the Core/SoC](#compiling-the-core-soc)
  * [Simulation](#simulation)
      - [Simulation Requirements](#simulation-requirements)
      - [Supporting printf](#supporting-printf)
      - [Platform Setup](#platform-setup)
      - [Simulation Outputs](#simulation-outputs)
  * [Connecting to GDB](#connecting-to-gdb)
      - [Generate RTL](#generate-rtl)
      - [Execute the RTL](#execute-the-rtl)
      - [Connect to OpenOCD](#connect-to-openocd)
      - [Connect to GDB](#connect-to-gdb)
  * [Benchmarking the Core](./benchmarking.md)
  * [Linux on Shakti](#linux-on-shakti)
      - [Generate RTL](#generate-rtl-1)
      - [Generate Linux Image](#generate-linux-image)
      - [To simulate on C-class](#to-simulate-on-c-class)
  * [FreeRTOS on Shakti](#freertos-on-shakti)
      - [Generate RTL](#generate-rtl-2)
      - [Generate FreeRTOS Image](#generate-freertos-image)
      - [To simulate on C-class](#to-simulate-on-c-class-1)
  * [CI/CD](#ci-cd)
  * [Contributing to the Project](#contributing-to-the-project)
  * [Verification](https://gitlab.com/shaktiproject/verification_environment/verification/blob/master/README.md)

## Quick Start

#### Dependencies

A BSV compiler (version 2017 or above) is necessary to compile the code. More information
on Bluespec can be found [here](www.bluespec.com).

#### Clone the repo 

``` 
git clone https://gitlab.com/shaktiproject/cores/c-class.git --recursive
cd c-class
make patch    # to fix environment variables in the verification directory
```
#### Install DTC
We use the DTC 1.4.7 to generate the device tree string in the boot-files. To install DTC follow the below commands:
```
sudo wget https://git.kernel.org/pub/scm/utils/dtc/dtc.git/snapshot/dtc-1.4.7.tar.gz
sudo tar -xvzf dtc-1.4.7.tar.gz
cd dtc-1.4.7/
sudo make NO_PYTHON=1 PREFIX=/usr/
sudo make install NO_PYTHON=1 PREFIX=/usr/             
```

## Directory Structure
    ├── src                     # dir: Source code of the core, uncore and devices
    │   ├── caches_mmu          # submodule: caches, tlbs, ptwalk
    │   ├── common_bsv          # submodule: common bsv libraries 
    │   ├── common_verilog      # dir: common verilog libraries
    │   ├── core                # dir: c-class core
    │   │   ├── fpu             # dir: fpu unit
    │   │   ├── m_ext           # dir: modules for M extension support
    │   ├── devices             # submodule: devices like uart, dma, qspi, etc
    │   ├── fabrics             # submodule: axi4, axi4lite, bridges, etc.
    │   ├── tcl                 # dir: tcl scripts to for FPGA runs
    │   ├── testbench           # dir: bsv testbench for simulations
    │   ├── uncore              # dir: sample SoC for minimal simulation
    │   ├── wrappers            # dir: bsv wrappers for various verilog modules
    ├── verification            # Contains verification scripts for regression
 
## Block Diagram

This an overview of the c-class core. More detail documents commenting about the micro-arch will be uploaded soon.

![](https://i.imgur.com/Elf1NQl.png)

## FEATURES of C-CLASS 

* 6-stage 64/32-bit pipelined core.
* Supports ISA=RV64IMAFDC based on riscv-spec-2.2 and privilege-spec-1.10.
* Parameterized blocking Instruction and Data cache.
* Serialized Single and Double Precision Floating Point Units.
* Early out multiplier and a restoring divider.
* Supervisor mode - sv32/sv39.
* Boots riscv-linux kernel, FreeRTOS, Zephyr.
* Performance: 1.72 DMIPs/MHz

## Configuring the Core

The `soc_config.inc` in the root directory is used to configure the core. Following is the description of each field in `soc_config.inc`

* __ISA__: This variable defines the RISC-V ISA to be supported by the C-Class core. The core supports the I, M, A, F, D and C extensions in both 32-bit and 64-bit formats. 
    * *Usage*: `ISA=RV32IMAC`, `ISA=RV64IMAFDC`, etc
* __MUL__: This variable is used to configure the type of multiplier to be used while supporting the M-extension. Valid Options are
    * `fpga`: This will use a Xilinx's DSP based multiplier coregen IP. The number of stages in the multiplier is defined using the MULSTAGES variable in the `soc_config.inc`. The bit-width of the multiplier is 32-bits if the ISA variable field includes `RV32` and 64-bits if the ISA variable includes `RV64`. A bluespec wrapper to incorporate this IP in bluespec is available in the src/wrappers.bsv directory. This should be set when targetting FPGAs.
    * `asic`: This will implement a sequential multiplier without an early out mechanism. The bsv source of this is available in the src/m_ext folder. The bit-width of the multiplier is 32-bits if the ISA variable field includes `RV32` and 64-bits if the ISA variable includes `RV64`. A bluespec wrapper to incorporate this IP in bluespec is available in the src/wrappers.bsv directory. This should be set when targetting ASIC synthesis.
* __COREFABRIC__: This variable indicates the fabric protocol supported by the Core. Current valid options are only `AXI4`. Future support will be provided for AXI4-Lite, TileLink-U, TileLink-H and TileLink-C.
* __SYNTH__: Indicates the nature of the generated verilog. Valid options:
    * `sim`: Setting this variable to `sim` will enable the `simulate` macro during bluesim compilation which enable a few simulation logic in the hardware. Eg,: if the MUL variable is set to `fpga` and `SYNTH` is set to `sim` then a naive bluespec model which mimics DSP multiplier in functionality will be used to simulation. The `sim` setting should only be used for simulations. 
    * `asic`: This should be set to generate a verilog for synthesis and will not include any simulation models.
* __VERBOSITY__: This variable dictates the level of display-statements to be printed. Valid options:
    * `0`: This will ensure no explicit display statements will be compiled to verilog. Schedule conflicts generated by the BSV compiler however will still exist in the verilog. This should be set for fast simulations.
    * `1-3`: Any value between 1 to 3 will enabled the respective display statements. A re-structure of the display statements is required and this description will be updated accordingly.
* __USERTRAPS__: Valid options:
    * `enable`: enables the `N` Extension of RISC-V ISA spec.
    * `disable`: disables the `N` Extension of RISC-V ISA spec.
* __USER__: Valid options:
    * `enable`: enables the `U` Extension of the RISC-V ISA spec.
    * `disable`: disables the `U` Extension of the RISC-V ISA spec.
* __SUPERVISOR__: Valid options:
    * `enable`: enables the `S` Extension of the RISC-V ISA spec.
    * `disable`: disables the `S` Extension of the RISC-V ISA spec.
* __MULSTAGES__: a numerical value indicating the number of cycles to perform multiplication. Max number should not cross XLEN value specified in the `ISA` variable. This will also be used to generate the Xilinx Core-gen IP
* __DIVSTAGES__: a numerical value indicating the number of cycles to perform a division/remainder operation. Max number should not cross XLEN value specified in the `ISA` variable.
* __FPGA__: part number of the FPGA when using tvl scripts in the src/tcl directory
* __SYNTHTOP__: top module for FPGA synthesis
* __RESETPC__: Values in integer format indicating the reset program counter value.
* __PADDR__: Bit-wdith of the phyiscal address.
* __PREDICTOR__: Valid options:
    * `none`: will disable the pc-gen stage and stage0 will no longer exist. PC generation happens in stage1 module.
    * `gshare`: will instantiate a gshare predictor using direct-mapped BTB.
    * `gshare_fa`: will instantiate a gshare predictor using a full-associative BTB.
    * `bimodal`: will instantiate a bimodal branch predictor using direct-mapped BTB. 
* __BPURESET__: Can be either 0 or 1. A value of 0 indicates that the branch predictor is disabled at reset. A value of 1 indicates that the branch predictor will be enabled immediately after reset. The predictor can later be enabled/disabled by writing into the respective csr bit.
* __BTBDEPTH__: Integer number defining the number of entries in the BTB
* __BHTDEPTH__: Valid of gshare only. Accepts a number indicating the number of entries in the branch history table. 
* __HISTLEN__: Valid only for gshare. Accepts a number indicating the number of bits in the global history register.
* __EXTRAHIST__: Valid only for gshare. Accepts a number indicating the number of extra speculative bits in the GHR. For c-class 3 gives the best performance.
* __RASDEPTH__: Number of entries in the Return-Address-Stack.
* __RASTAGDEPTH__: The direct mapped gshare maintains a separate table for ras entries. This field indicates the size of that table.
* __COVERAGE__: This is used by verilator to generate specific coverage metrics during simulation. Valid otions:
    * `none`: disable all coverage
    * `all`: enable all coverage metrics supported in verilator
    * `line`: enable line coverage
    * `toggle`: enable toggle coverage
* __TRACE__: Valid options:
    * `enable`: enables vcd dump for verilator simulation
    * `disable`: disables vcd dump for verilator simulations
* __THREAD__: Integer number indicating the number of threads to be used by verilator for simulation
* __RTLDUMP__: Valid options:
    * `enable`: Will generate a rtl.dump file during simulation providing a trace of the instruction execution of the application on the core. Please note that enabilng this feature requires extra hardware to be generated and thus should be disabled when targetting synthesis.
    * `disable`: Will disable rtl.dump generation.
* __ASSERTIONS__: Valid options:
    * `enable`: Will enable dynamic assertions where-ever found.
    * `disable`: Will disable dynamic assertions where-ever found.
* __ICACHE__: Valid options:
    * `enable`: Will enable creating a single instance of the instruction-cache
    * `disable`: No instruction cache will be instantiated. But instead a simple state-maching to handle requests will be used.
* __ISETS__: An integer value indicating the number of sets in the I-cache
* __IWORDS__: An integer value indicating the number of bytes in a word for the I-cache. For any core-config this should be typically be set to 4.
* __IBLOCKS__: An integer value indicating the number of the words in a block. Please note to prevent aliasing the caches the following should hold: `ISETS`x`IWORDS`x`IBLOCK`<=4096.
* __IWAYS__: An integer value >0 indicating the number of ways in the I-cache.
* __IFBSIZE__: An integer value >1 indicating the number of entries in the Fill-buffer of the I-cache. 
* __IESIZE__: Should always be set to 3 for all configs.
* __IRESET__: Can be either 0 or 1. A value of 0 indicates that the I-cache, though instantiated in HW, will be disabled and has to be enabled thorugh software. A value of 1 indicates that the I-cache is available immediately after reset.
* __IDBANKS__: The number of banks that data-rams of the I-cache should be split into.
* __ITBANKS__: The number of banks that tag-rams of the I-cache should be split into.
* __IBUSWIDTH__: This field will define the bus-width on which I-cache will be a master on for line-requests. This should be set to MAX(XLEN,FLEN). Valid values are 32 and 64.
* __DCACHE__: Valid options:
    * `enable`: Will enable creating a single instance of the data-cache
    * `disable`: No data cache will be instantiated. But instead a simple state-maching to handle requests will be used and maintain a store-buffer will be used..
* __DSETS__: An integer value indicating the number of sets in the D-cache
* __DWORDS__: An integer value indicating the number of bytes in a word for the D-cache. For a 64-bit core this should be set to 8 and for a 32-bit core this should be set to 4.
* __DBLOCKS__: An integer value indicating the number of the words in a block. Please note, in order to prevent aliasing in the caches the following should hold: `DSETS`x`DWORDS`x`DBLOCK`<=4096. `DBLOCKs` should not be less than 8. See issue#70 for more details on this constraint.
* __DWAYS__: An integer value >0 indicating the number of ways in the I-cache.
* __DFBSIZE__: An integer value >1 indicating the number of entries in the Fill-buffer of the D-cache. 
* __DFBSIZE__: An integer value >1 indicating the number of entries in the store-buffer of the D-cache. 
* __DESIZE__: Should always be set to 1 for all configs.
* __DRESET__: Can be either 0 or 1. A value of 0 indicates that the D-cache, though instantiated in HW, will be disabled and has to be enabled thorugh software. A value of 1 indicates that the D-cache is available immediately after reset.
* __DDBANKS__: The number of banks that data-rams of the D-cache should be split into.
* __DTBANKS__: The number of banks that tag-rams of the D-cache should be split into.
* __PIPE__: Valid options:
    * 1: Instantiates a pipeline-buffer between the decode and the execute stage
    * 2: Instantiates a SizedFIFO(2) buffer between the decode and the execute stage
* __PMP__: Valid options
    * `enable`: Will enable physical memory protection scheme as mentioned in the spec.
    * `disable`: Will disable physical memory protection scheme as mentioned in the spec.
* __PMPSIZE__: An integer `<=16` indicating the number of PMP registers to be implemented.
* __ASIDWIDTH__: An integer `<=16` for RV64 and `<=9` for RV32 indicating the size of the ASID when supervisor is enabled. 


## Compiling the Core/SoC

The Makefile in the root-folder is to be used to compile the core/SoC bsv code. For the makefile to work you need to:

* have soc_config.inc in the same folder (template is provided)
* set the following variables in Makefile:
    * TOP_MODULE: set it to the top bsv module name (eg. mkTbSoc)
    * TOP_FILE:   set it to the file (with .bsv extension) containing the TOP_MODULE (eg. TbSoc.bsv)
    * TOP_DIR:    set it to relative path from root-folder containing TOP_FILE (eg. src/testbench.bsv )

Following are the make targets that a user can use:

| Target | Description |
|--------|-------------|
|__generate_verilog__|This will compile the code in the verilog environment and generate the verilog files in the verilog folder.|
|__link_iverilog__|This will compile the generated verilog files and generate an executable in the bin folder using iVerilog.|
|__link_ncverilog__| This will compile the generated verilog files and generate an executable in the bin folder using Cadence ncvlog and ncelab tools.|
|__link_msim__|This will compile the generated verilog files and generate an executable in the bin folder using Modelsim.|
|__link_verilator__| This will link the generated verilog files using verilator|
|__simulate__|This executes the "out" executable created by any of the above link_* commands.|
|__clean__| Will delete the bin and bsv_build folders.|
|__clean_verilog__|Will call clean and remove the verilog folder as well.|
|__restore__|Will call clean and clean_verilog  and also perform a clean in the benchmarks folder.|
|__generate_boot_files__|By default the core will start execution from 0x1000 which is mapped to the read-only BootROM. To match the execution with spike this region should hold the dts files which is available in verification/dts/boot.hex . This target will convert the hex file into a format which can be loaded into C-CLASS's bootrom.|

Compile and linking in bluesim is always an option but is not being supported since there exist quite a few of verilog modules and RTL wrappers which cannot be simulated in the bsim environment.

## Simulation 

#### Simulation Requirements

While simulating the core using the "out" executable (generated by any of the link_* targets of the makefile) the following files are required to be present in the same folder as the executable:

* `boot.LSB` and `boot.MSB`: generated using the makefile target "generate_boot_files".
* `code.mem.LSB` and `code.mem.MSB`: For a software code (compiled at 0x80000000)to be loaded into the core's memory it has to be first converted to a hex file using the elf2hex command. A elf2hex command for a 64-bit is as follows:

```
elf2hex 8 525428 software.elf 2147483648 > code.hex
```

This code.hex should now be further split into code.mem.LSB and code.mem.MSB as follows:
```
cut -c1-8 code.hex> code.mem.MSB 
cut -c9-16 code.hex > code.mem.LSB 
```
            
For a 32-bit core use the following:
```
 elf2hex 4 52428 software.elf 2147483648 > code.mem.MSB
 elf2hex 4 52428 software.elf 2147483648 > code.mem.LSB
 ```

#### Supporting printf

The SoC for simulation is contains a simple bsv based uart. The putchar function for the same is available [here](https://gitlab.com/shaktiproject/uncore/devices/blob/master/uart/uart_driver.c) . This has to be used in the printf functions. The output of the printf is captured in a separate file `app_log` during simulation.

#### Platform Setup
The core along with a minimal SoC can be simulated on a number of commercial and open-source verilog simulators. The scripts for each of the following platforms can be found in the Makefile.

* **Open Source Simulators**:
    * `Verilator`: You will need verilator-4.004 or above to compile the generated verilog RTL into an executable. You can download verilator from [here](https://www.veripool.org/projects/verilator/wiki/Installing). This the most supported platform for a number of SHAKTI C-class cores. Once the verilog of the design is generated/available use the command `make link_verilator` to generate the executable in the `bin` directory.
* **Commercial Simulators**: These simulators will look for sources in the Bluespec and Xilinx directories thus requiring `$BLUESPECDIR` and `$XILINX_VIVADO` to be set before running them. These platforms will not be rigorously supported and are meant to provide basic templates to each platform.
    * `VCS`: use the command `make link_vcs`
    * `NCVERILOG`: use the command `make link_ncverilog`
    * `Modelsim`: use the command `make link_msim`
    * `IRUN`: use the command `make link_irun`

#### Simulation Outputs

1. if `RTLDUMP` variable is `enabled` then an rtl.dump file is created which contains the trace of the instruction execution sequence.
2. if `VERBOSITY` variable is set more than 0, then executing the `out` binary will print all the display statements on the screen.
3. if printf is used in application code, then those get dumped in the `app_log` file.

## Connecting to GDB

A debugger implementation following the riscv-debug-draft-013 has been integrated with the core. 
** Triggers are not yet supported ** (Will be done soon !! )
Perform the following steps to connect to the core executable with a gdb terminal. This assumes you have installed openocd and is available as part of you $PATH variable.

#### Generate RTL
In the default soc_config.inc set DEBUG and OPENOCD to `enable`
```
....
DEBUG=enable
OPENOCD=enable
....

```

Then type `make gdb`. The BSV-to-verilog generation and the verilator linking both with take significant time. Please be patient.

This will create the executable `out` in the bin folder.

#### Execute the RTL
In your current terminal go to the bin folder and type `./out > /dev/null`

#### Connect to OpenOCD
Open a new terminal and go to the `gdb_setup` folder and type the following:
```
openocd -f shakti_ocd.cfg
```

#### Connect to GDB
Open yet another terminal and go to the `gdb_setup` folder and type the following:
```
riscv64-unknown-elf-gdb -x gdb.script
```

In this window you can now perform gdb commands like : `set $pc, i r, etc`:w


## Linux on Shakti 

#### Generate RTL

Set the following in the soc_config.inc:
```
ISA=RV64IMAFDC
MUL=asic
COREFABRIC=AXI4
SYNTH=SIM
VERBOSITY=0
USERTRAPS=disable
USER=enable
SUPERVISOR=enable
MULSTAGES=8
DIVSTAGES=64
FPGA=xc7a100tcsg324-1
SYNTHTOP=mkriscv
RESETPC=4096
PADDR=32

# Verilator options
COVERAGE=none
TRACE=disable
THREADS=1

# DebugOptions
RTLDUMP=enable
ASSERTIONS=enable

# Instruction cache
ICACHE=enable
ISETS=128
IWORDS=4
IBLOCKS=8
IWAYS=1
IFBSIZE=4
IESIZE=3
IREPL=PLRU
IRESET=1
IDBANKS=1
ITBANKS=1

# Instruction cache
DCACHE=enable
DESIZE=1
DSETS=128
DWORDS=8
DBLOCKS=4
DWAYS=1
DFBSIZE=4
DSBSIZE=2
DREPL=PLRU
DRESET=1
DDBANKS=1
DTBANKS=1

#PIPELINE CONFIG
PIPE=2

#PMP CONFIG
PMP=disable
PMPSIZE=0
ASIDWIDTH=9
```

Run `make define_macros=-D Addr_space=25` to generate a verilator binary and the boot files in the `bin` directory

#### Generate Linux Image

Download the shakti-linux repository 
```
git clone https://gitlab.com/shaktiproject/software/shakti-linux
cd shakti-linux
export SHAKTI_LINUX=$(pwd)
git submodule update --init --recursive
```
To generate the kernel image 
```
cd $SHAKTI_LINUX
make -j16 ISA=rv64imafd
```

#### To simulate on C-class
Come back to the root folder for c-class:
```
cp $SHAKTI_LINUX/work/riscv-pv/bbl ./bin/
cd bin
elf2hex 8 8388608 bbl 2147483648 > code.mem
cut -c1-8 code.mem > code.mem.MSB 
cut -c9-16 code.mem > code.mem.MSB 
./out
```

## FreeRTOS on Shakti 
#### Generate RTL

Set the following in the soc_config.inc:
```
ISA=RV64IMAFDC
MUL=asic
COREFABRIC=AXI4
SYNTH=SIM
VERBOSITY=0
USERTRAPS=disable
USER=enable
SUPERVISOR=enable
MULSTAGES=8
DIVSTAGES=64
FPGA=xc7a100tcsg324-1
SYNTHTOP=mkriscv
RESETPC=4096
PADDR=32

# Verilator options
COVERAGE=none
TRACE=disable
THREADS=1

# DebugOptions
RTLDUMP=enable
ASSERTIONS=enable

# Instruction cache
ICACHE=enable
ISETS=128
IWORDS=4
IBLOCKS=8
IWAYS=1
IFBSIZE=4
IESIZE=3
IREPL=PLRU
IRESET=1
IDBANKS=1
ITBANKS=1

# Instruction cache
DCACHE=enable
DESIZE=1
DSETS=128
DWORDS=8
DBLOCKS=4
DWAYS=1
DFBSIZE=4
DSBSIZE=2
DREPL=PLRU
DRESET=1
DDBANKS=1
DTBANKS=1

#PIPELINE CONFIG
PIPE=2

#PMP CONFIG
PMP=disable
PMPSIZE=0
ASIDWIDTH=9
```
Run `make` to generate a verilator binary and the boot files in the `bin` directory

#### Generate FreeRTOS Image

Download the shakti-linux repository 
```
git clone https://gitlab.com/shaktiproject/software/FreeRTOS

```
To generate the kernel image 
```
cd FreeRTOS/FreeRTOS-RISCV/Demo/shakti/
make
```

#### To simulate on C-class
Come back to the root folder for c-class:
```
cp FreeRTOS/FreeRTOS-RISCV/Demo/shakti/frtos-shakti.elf ./bin
cd bin
elf2hex 8 8388608 frtos-shakti.elf 2147483648 > code.mem
cut -c1-8 code.mem > code.mem.MSB 
cut -c9-16 code.mem > code.mem.MSB 
./out
```
## CI/CD

The project uses a local gitlab-runner housed at RISE-LAB, CSE-Dept, IIT-Madras. Each commit to the master branch will trigger a build run on the runner which does the following:

1. generate the verilog for the core config=rv64imafdc. More details can be found in gitlab-cy.yaml.
2. Run all the riscv-tests on the generated verilog using verilator.
3. Run 40 torture tests on the the generated verilog using verilator
4. Run 60 AAPG tests on the generated verilog
5. Run 230 CSMITH tests
6. Run benchmarks as well.

The runner also performs a nightly build which checks for other configs the runs tests on them as well.


## Contributing to the Project 

The quickest way to contribute to the SHAKTI project is to create a pull-request for existing issues or any feature additions. A contributing guideline will be uploaded soon
