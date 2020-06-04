########
Overview
########

Chromite is an open-source core generator, which emits synthesizable, production quality RTL
of processors based on the open `RISC-V ISA <https://riscv.org/>`_. The core generator can produce
variants of a commercial grade 5-stage in-order core supporting the RV[64/32]GCSUN (or its subsets)
extensions of the RISC-V ISA, from the same high-level source code. Chromite leverages the high 
level abstraction offered by Bluespec System Verilog to build highly parameterized, compact and powerful library components (like 
arithmetic units, branch predictors, caches, mmu, etc) that can be seamlessly integrated to create a solution catered to
your needs. 

The configuration to the generator is provided through a very simple and easy to modify 
YAML file. The core generator uses a python script to generate the necessary environment variables
and macros required to generate the RTL. The generated RTL is completely synthesizable and can be 
directly integrated into conventional VLSI flows for FPGA, ASIC or verification.
:numref:`chromite_flow` shows the basic flow of the Chromite core generator.

.. _chromite_flow:

.. figure:: chromite_flow.png
   :align: center
   :width: 450px

   Chromite Core Generator Flow


The various design instances generated through Chromite can serve domains ranging from embedded 
systems, motor-control, IoT, storage, industrial applications, all the way to low-cost,
high-performance Linux based applications such as networking, gateways etc. 
The extreme parameterization of the design in conjunction with using an HLS like Bluespec, it makes 
it easy to add new features and design points on a continual basis.

