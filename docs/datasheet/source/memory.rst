Memory Subsystem
================

The Chromite memory subsystem includes the L1 caches and a TLB based
memory management unit.

L1 Caches
---------

The L1 caches include separate instruction and data caches. The caches are blocking in nature. 
Each of the caches can be configured for upto 32KiB with the following parameters:

* n_ways: number of ways in the cache
* n_sets: number of sets per way
* n_blocksize: number of bytes per block
* n_fillbuffer: number of fill-buffer entries
* n_buswidth: size of the bus connected to the caches
* replacement policy: Pseudo LRU, RoundRobin or Random
* ECC support: enable or disable for either of the caches

When supervisor mode is enabled, to prevent aliasing issues, the size of each way should not cross 4kiB.

The caches are designed to use single ported (i.e. 1RW) RAM structures for better delay, area and
power features. The access to the RAMs require two cycles: one cycle for the actual read of the RAM
and another cycle for tag comparison, hit determination and way selection.

The caches also include an array of fill-buffers which hold the lines coming from
the lower level memories.  The entries in the fill-buffer are released into the RAMs either when 
the fill-buffer is full or when there is an opportunity where the cache is not receiving requests 
from the pipeline. 

In case of the data cache, the write-policies followed are write-back and write-allocate. 
The fill-buffers in the data-cache also hold the lines on which stores need to be performed. 

The load to use latency of the data-cache is 1 clock cycle. 

Cache as RAMs
^^^^^^^^^^^^^

Certain ways of the caches can be configured to act as scratchpad RAM or as Tightly Integrated
Memories (TIMs). The default configuration on reset can be defined at design time. The runtime 
configuration can be changed through
software. Note, at any point of time at least one-way should act as a cache.
The runtime switch from cache to TIMs is achieved by simply manipulating the replacement policies. The transition involves
minimal overheads.

ECC
^^^
The caches can also be configured to be ECC protected, with the granularity being 64/32 bits. This is  based 
on the data width of the processor. The data cache supports single-correction and double-error detection,
while the instruction cache only supports single and double error detection. Information of all 
corrections and detections across the tags and data are logged into a separate 
Core Control and Status unit, which can be used by the software to perform further analysis. The
RAMs within the caches also provided with side-band interfaces which allow the software to directly
write data, tags and parity into the RAMs to check for faults.

In the instruction cache, if a single or a double error is detected, the RAM line is invalidated and
fetched from the lower memories. For the data cache, in case a single-error is detected in the RAM
line, it is corrected and copied to the fill-buffer and invalidated from the RAMs. In case a
double-error is detected the line is invalidated, data is lost (in case that line was dirty) and a
miss is generated for the same request.

MMU
---

The Chromite core has a memory management unit which includes separate instruction and data TLBs. The core
supports the sv32 virtualisation scheme of RISC-V ISA for 32-bit cores, with maximum 32-bit physical
address and the sv39/sv48 virtualisation schemes for  64-bit cores with maximum
physical address size of 56-bits. The sv32 scheme supports 4KiB and 4MiB pages, sv39 
supports 4KiB, 2MiB and 1GiB page sizes. The sv48 additionally supports
512GiB page sizes.

The TLBs are implemented as fully-associative buffers, the size of which can be configured at compile time. Apart from
converting virtual addresses to physical addresses, the TLBs also perform the task of physical
memory protection. 



