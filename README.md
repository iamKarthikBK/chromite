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
  * [Overview of C-CLASS ](#fOverview-of-c-class)
  * [Configuring the Core](./docs/configuring_core.md)
  * [Custom Csrs](./docs/custom_csrs.md)
  * [Compiling the Core/SoC](#compiling-the-core-soc)
  * [Simulation](#simulation)
      - [Simulation Requirements](#simulation-requirements)
      - [Supporting printf](#supporting-printf)
      - [Platform Setup](#platform-setup)
      - [Simulation Outputs](#simulation-outputs)
  * [Connecting to GDB](#connecting-to-gdb)
      - [Generate RTL](#generate-rtl)
      - [Simulate the RTL](#simulate-the-rtl)
      - [Connect to OpenOCD](#connect-to-openocd)
      - [Connect to GDB](#connect-to-gdb)
  * [Benchmarking the Core](./docs/benchmarking.md)
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
git clone https://gitlab.com/shaktiproject/cores/c-class.git
cd c-class/base-sim
./manager.sh
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
    │   ├── core                # dir: c-class core
    │   │   ├── fpu             # dir: fpu unit
    │   │   ├── m_ext           # dir: modules for M extension support
    ├── base-sim                # Contains a base SoC and setup to simulate and verify the core. 
    ├── docs		            # Contains more info about the core and the environment.
   
 
## Block Diagram

This an overview of the c-class core. More detail documents commenting about the micro-arch will be uploaded soon.

![](https://i.imgur.com/Elf1NQl.png)

## Overview of C-CLASS 

* 5-stage 64/32-bit pipelined core.
* Supports ISA=RV64IMAFDC based on riscv-spec-2.2 and privilege-spec-1.10.
* Parameterized blocking Instruction and Data cache.
* Serialized Single and Double Precision Floating Point Units.
* Early out multiplier and a restoring divider.
* Supervisor mode - sv32/sv39.
* Boots riscv-linux kernel, FreeRTOS, Zephyr.
* Performance: 1.72 DMIPs/MHz

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

The SoC for simulation contains a simple uart. The putchar function for the same is available [here](https://gitlab.com/shaktiproject/uncore/devices/blob/master/uart/uart_driver.c) . This has to be used in the printf functions. The output of the printf is captured in a separate file `app_log` during simulation.

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
cd c-class
make gdb DEBUG=enable OPENOCD=enable
```

The BSV-to-verilog generation and the verilator linking both with take significant time. Please be patient.

This will create the executable `out` in the bin folder.

#### Simulate the RTL
In a new terminal do the following:
```
cd c-class/bin/
./out > /dev/null
```

#### Connect to OpenOCD
Open a new terminal and type the following:
```
cd c-class/gdb_setup/
openocd -f shakti_ocd.cfg
```

#### Connect to GDB
Open yet another terminal and type the following:
```
cd c-class/gdb_setup
riscv64-unknown-elf-gdb -x gdb.script
```

In this window you can now perform gdb commands like : `set $pc, i r, etc`


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
