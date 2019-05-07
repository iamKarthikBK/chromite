# Verilog Artifacts
This release consists of a verilog that has the configuration given in the [core_config.inc](../base-sim/templates/core_config.inc) file. For more information about the configurations, click [here](https://gitlab.com/shaktiproject/cores/c-class/blob/master/docs/configuring_core.md).
## Folder structure
1. `verilog`: Contains the verilog source code of the SoC along with the testbench
2. `sim`: Contains the executable, along with *boot.LSB* and *boot.MSB* files.

# Synthesizing for ASIC
Synthesizing for ASIC mainly involves replacing the BRAM cells with SRAM cells that are foundary specific. Refer [this] TODO document that describes the working of BRAM, and also on how to replace the BRAM instances with SRAMs.

# Processor hierarchy
A part processor hierarchy is given in the below figure:
``` mermaid
graph TD
X[mkTbSoC] --> A(mkSoC)
X --> B(mkbram)
X --> C(mkbootrom)
A --> D(mkcclass_axi4)
A --> E(mkuart)
A --> F(mkclint)
A --> G(mksignature_dump)
D --> H(mkriscv)
D --> I(mkdmem)
D --> J(mkimem)
```

The various modules in the above figure are:
1. **mkriscv:** The processor core with execution units and the pipeline
2. **mkdmem:** Data cache
3. **mkimem:** Instruction cache
4. **mkcclass_axi4:** Processor integrated with the instruction and data caches
5. **mkuart:** UART module that is used by the *putchar* function
6. **mkclint:** Core Level Interrupt module
7. **mksignature_dump:** Signature dump module (for verification framework)
8. **mkbram:** Scratchpad memory
9. **mkbootrom:** BootROM
10. **mkSoC:** SoC that integrates the processor along with the other peripherals
11. **mkTbSoC:** Testbench that instantiates the SoC, and integrates it with the bootrom and a scratchpad memory.

When synthesizing for ASIC, use mkcclass_axi4 (in mkcclass_axi4.v) as the top module. This includes the core, along with the instruction and data caches. In case you do not want the caches to be included in the synthesis, use mkriscv (in mkriscv.v) as the top module.

This verilog release has instances of only *bram_1rw*. To list the various instance names, go to the *verilog* directory and run:
```
grep "bram_1rw #" mk*cache.v -A2
```

# Guide to Simulating verilog

## Dependencies
1. **Verilator:** You will need verilator-4.004 or above to compile the generated verilog RTL into an executable. You can download verilator from [this link](https://www.veripool.org/projects/verilator/wiki/Installing).
2. **RISC-V Newlib Toolchain:** Install RISC-V newlib toolchain from [this link](https://github.com/riscv/riscv-gnu-toolchain).

## Software program

Follow the steps mentioned in [this file](./benchmarks/README.md) to obtain the executable (along with *code.mem.LSB* and *code.mem.LSB* files). These files will be generated in the `output` folder.

### Caveats
* The size of the program (code + data + stack) should be lesser than 2MB.


## Working of the processor
When the processor is reset, the default PC is set to 0x1000 where the BootROM is present. The current boot code simply jumps to the address 0x80000000, where the main program is loaded. All the *printf* calls will be captured in a file named *app_log*. While terminating, the *exit* function (which is defined in `syscalls.c`) is called, which writes some value to address 0x2000C. This causes the simulation to generate a signature (used in our verification framework) and then exit.

## Program Execution

An executable, named `cclass` has been provided (in `sim` folder). This can be used to run C-programs on the processor in simulation. This requires the *boot.MSB*, *boot.LSB*, *code.mem.LSB* and *code.mem.LSB* files to be present in the `sim` folder. Copy *code.mem.LSB* and *code.mem.MSB* from `benchmarks/outputs` folder to `sim`.

To run the simulation, execute
```
$ ./cclass
```
   
To check the output of the program (i.e. *printf* statements)
```
$ cat app_log
```

