################################
Custom CSRs Available in C-Class
################################

The C-class includes the following custom csrs implemented in the non-standard space for 
extra control and special features.

custom control csr (0x800)
--------------------------

The csr is used to the enable or disable the caches, branch predictor and arithmetic exceptions
at run-time. 

============  ===========  ============
Bit Position  Reset Value  Description
============  ===========  ============
0             from config  Enable or disable the data-cache.
1             from config  Enable or disable the instruction-cache.
2             from config  Enable or disable the branch_predictor.
3             Disabled     Enable or disable arithmetic exceptions.
============  ===========  ============


dtvec csr (0x7c0)
-----------------

XLEN register which indicates the address of the debug loop when a the debugger halts the core.

denable csr (0x7c1)
-------------------

1-bit csr indicating if the debugger can halt the core

mhpminterrupten csr (0x7c2) 
---------------------------

XLEN bit register following the same encoding as ``mcounteren/mcountinhibit``. A bit set to 1
indicates the an interrupt will be generated when the corresponding counter reaches the value 0.
More details to use this register is available [here](../docs/performance_counters.md#interrupts-from-counters)

dtim base adddress csr (0x7c3)
------------------------------

An XLEN bit register holding the base address of the data tightly integrated scratch memory. This
should correspond to the physical address space and not the virtual

dtim bound adddress csr (0x7c4)
-------------------------------

An XLEN bit register holding the bound address of the data tightly integrated scratch memory. This
should correspond to the physical address space and not the virtual

itim base adddress csr (0x7c5)
------------------------------

An XLEN bit register holding the base address of the instruction tightly integrated scratch memory. This
should correspond to the physical address space and not the virtual

itim bound adddress csr (0x7c6)
-------------------------------

An XLEN bit register holding the bound address of the instruction tightly integrated scratch memory. This
should correspond to the physical address space and not the virtual

cause values for arith traps
----------------------------

When configured with ``fpu_trap: True`` ,as an extension to the 15 exceptions mentioned in the 
RISC-V SPEC, we have added six arithmetic exceptions.
Out of this five are floating point exceptions specified by IEEE 754 floating point format.

+----------------------------------+------------+
|Description                       |Cause Value |
+----------------------------------+------------+
|Integer divide by zero            |17          |
+----------------------------------+------------+
|Floating point Invalid operation  |18          |
+----------------------------------+------------+
|Floating point Zero divide        |19          |
+----------------------------------+------------+
|Floating point Overflow           |20          |
+----------------------------------+------------+
|Floating point Underflow          |21          |
+----------------------------------+------------+
|Floating point Inexact            |22          |
+----------------------------------+------------+
