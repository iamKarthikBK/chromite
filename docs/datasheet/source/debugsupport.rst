Debug Support
=============

The Chromite core includes a JTAG based system level debugger, based on the RISC-V Debug spec
:cite:`riscvdebug`.
Ii can be used for debugging of applications and kernel code. In addition to standard
operating modes (machine, supervisor, user), enabling debug support adds the debug mode of
operation to the core.The Debug mode is entered through debug exceptions: *halt request from the host,
executing ebreak instructions, single-step execution, breakpoints*. The debug mode can be 
exited by executing a **dret instruction** or through a resume request from the host.

Within the debug mode the host has access to all the integer registers, floating point registers (if
F or D extensions are enabled at design time) and all the CSRs through a dedicated side-band access.
Moreover, the host has access to all memory mapped registers of the devices that are in the SoC
through the master bus interface. 

The Debug support also includes host side GDB and OpenOCD software (ports of the standard source)  to load and debug
programs. 
