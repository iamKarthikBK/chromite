.. _ram-structures-label:

########################
RAMS used in the C-Class
########################

This document describes in detail how various RAM based structures are used within the
shakti-designs (specifically the C-class processor). The doc also highlights the differences
for porting the same structures to ASIC or FPGAs.

Overview
--------

The caches used in the C-class core (instruction and data both), use a single-ported RAM
instance (1RW), i.e. one port to perform either a read or a write.

The branch predictors ,however, depending on the choice at compile time may or may not use RAMs.
For specific instances, the RAMs used are dual-ported (1R + 1W) i.e. a dedicated port to read and
another dedicated port to write.

Functionality
-------------

Single-Ported RAMs (1RW)
^^^^^^^^^^^^^^^^^^^^^^^^

 - **Module Name**: bram_1rw
 - **Verilog source**: `bram_1rw.v <https://gitlab.com/shaktiproject/common_verilog/blob/master/bram_1rw.v>`_
 - **Port Descriptions**:

   +-------------+-----------+-------------------------------------------------------------------+
   | Port Name   | Direction | Description                                                       |
   +-------------+-----------+-------------------------------------------------------------------+
   | clka        | input     | Clock signal. Positive edge of clock is used.                     |
   +-------------+-----------+-------------------------------------------------------------------+
   | ena         | input     | When high indicates the port is being used                        |
   +-------------+-----------+-------------------------------------------------------------------+
   | wea         | input     | When high indicates a write operation is being performed.         |
   +-------------+-----------+-------------------------------------------------------------------+
   | addr        | input     | Indicates the address for read/write                              |
   +-------------+-----------+-------------------------------------------------------------------+
   | dina        | Input     | Indicates the data for write operations                           |
   +-------------+-----------+-------------------------------------------------------------------+
   | douta       | output    | Holds the data for a read operation                               |
   +-------------+-----------+-------------------------------------------------------------------+


 - **Instantiation Parameters**:

   +----------------+----------------------------------------+
   | Parameter Name | Description                            |
   +----------------+----------------------------------------+
   | DATA_WIDTH     | Width of ``dina`` and ``douta`` ports. |
   +----------------+----------------------------------------+
   | ADDR_WIDTH     | Width of ``addra`` port.               |
   +----------------+----------------------------------------+
   | MEMSIZE        | Depth of the RAM.                      |
   +----------------+----------------------------------------+

   The size of the instantiated RAM will be MEMSIZE x DATA_WIDTH bits where the number of
   indices is equal to MEMSIZE and the number of bits at each index is equal to DATA_WIDTH.

 - **Read Operation**: The address is written onto the ``addr`` port, and the ``ena`` signal is
   driven high. In the next positive edge, ``douta`` port will hold the data. Therefore, the read
   operations have a one cycle latency. Also, a new address can be given at every cycle
   (whose output will be obtained in the subsequent cycle).

 - **Write Operation**: The address is written onto the ``addr`` port, data to be written is
   driven on the *dina* port, and, ``ena`` and ``wea`` signals are asserted. At the next positive
   edge of clock the value at ``dina`` is written onto the address ``addr``. Also, a new write
   operation can be initiated at every clock edge.

 - **Note**:
     1. The single-ported rams follow a ``no-change`` model, where the output ``douta`` remains
        unchanged on write-operations and will always hold the data of the previous read operation.
     2. The single-ported rams assume the outputs are registered for reads.

Dual-Ported RAMs (1R + 1W)
^^^^^^^^^^^^^^^^^^^^^^^^^^

 - **Module Name**: bram_1r1w
 - **Verilog source**: `bram_1r1w.v <https://gitlab.com/shaktiproject/common_verilog/blob/master/bram_1r1w.v>`_

 - **Ports**:

   +-----------+-----------+-----------------------------------------------------------------------------------------+
   | Port Name | Direction | Description                                                                             |
   +-----------+-----------+-----------------------------------------------------------------------------------------+
   | clka      | Input     | Clock signal for port A. Operations are performed at the positive edge of the clock.    |
   +-----------+-----------+-----------------------------------------------------------------------------------------+
   | ena       | Input     | Enable signal for port A. When high, indicates that the port is being used for write.   |
   +-----------+-----------+-----------------------------------------------------------------------------------------+
   | wea       | Input     | Write enable for port A. When high, indicates that a write operation is being performed.|
   +-----------+-----------+-----------------------------------------------------------------------------------------+
   | addra     | Input     | Index address for port A that indicates the address for write                           |
   +-----------+-----------+-----------------------------------------------------------------------------------------+
   | dina      | Input     | Indicates the data for write operations                                                 |
   +-----------+-----------+-----------------------------------------------------------------------------------------+
   | clkb      | Input     | Clock signal for port B. Operations are performed at the positive edge of the clock.    |
   +-----------+-----------+-----------------------------------------------------------------------------------------+
   | enb       | Input     | Enable signal for port B. When high, indicates that the port is being used for read.    |
   +-----------+-----------+-----------------------------------------------------------------------------------------+
   | addrb     | Input     | Index address for port B that indicates the address for read                            |
   +-----------+-----------+-----------------------------------------------------------------------------------------+
   | doutb     | Output    | Holds the data for a read operation                                                     |
   +-----------+-----------+-----------------------------------------------------------------------------------------+

 - **Instantiation Parameters**:

   +----------------+----------------------------------------+
   | Parameter Name | Description                            |
   +----------------+----------------------------------------+
   | DATA_WIDTH     | Width of ``dina`` and ``douta`` ports. |
   +----------------+----------------------------------------+
   | ADDR_WIDTH     | Width of ``addra`` and ``addrb`` ports.|
   +----------------+----------------------------------------+
   | MEMSIZE        | Depth of the RAM.                      |
   +----------------+----------------------------------------+

   The size of the instantiated BRAM will be MEMSIZE x DATA_WIDTH bits where the number of indices
   is equal to MEMSIZE and the number of bits at each index is equal to DATA_WIDTH.

 - **Read Operation**: Port-B is used for performing reads. The address is written onto the
   ``addrb`` port, and the ``enb`` signal is driven high. In the next cycle, ``doutb`` port will
   hold the data. Therefore, the read operations have a one cycle latency. Also, a new address
   can be given at every cycle (whose output will be obtained in the subsequent cycle).

 - **Write Operation**: Port-A is used for writes. The address is written onto the ``addra`` port,
   data to be written is driven on the ``dina`` port, and, ``ena`` and ``wea`` signals are
   asserted. At the next positive edge of clock the value at ``dina`` is written onto the address
   ``addra``. Also, a new write operation can be initiated at every clock edge.

 - **Read Write Conflicts**: In case of a read and write occurring to the same ``address`` at the
   same time, the writes are guaranteed while the reads need **not** be.

 - **Note**
     1. Here port A is used for write, and port B is used for read operations. Also, the various
        enable and write enable signals are active high signals.
     2. The dual-ported rams assume the outputs are registered for reads.

Synthesis
---------

Mapping to FPGAs
^^^^^^^^^^^^^^^^

The single-ported RAMs (1RW) used in the caches are directly mapped to the true-single ported
BRAMs provided by xilinx.

The dual-ported RAMs (1R + 1W) used in branch predictors are directly mapped to true-dual ported
RAMs provided by Xilinx. Since the true-dual ported RAMs from xilinx provide a (1RW + 1RW)
configuration, our dual-ported instances ensure that portA is used for writes and portB is used
only for reads (by ensuring wea port is held low always)

The ``* RAM_STYLE = "BLOCK" *`` pragma in the verilog source makes it easy for Vivado to infer
these as BRAMs and thus no edits are required in the source file.

Mapping to ASICs
^^^^^^^^^^^^^^^^

For mapping to ASICs, the user has to replace the files ``bram_1rw`` and ``bram_1r1w`` with
respective instances for SRAM modules which meet the same functionality as described above.

In case where SRAM cells of the same size as that of the instantiations are not avaialable, it
is the onus of the user to bank/combine available SRAMs cells into a top-module which has the
same functionality as ``bram_1r1w`` or ``bram_1rw``.

If an SRAM cell has extra ports than the ones required in this document, the user is required to
ensure they are driven accordingly to maintain the same functionality as described in this document.

Additionally, if a parameterized instance of the SRAMs can be developed by the user, its the
user's responsibility to manually replace each instance of the RAM's in the design. For the
c-class the instances are defined below:


C-Class Specific instances of RAMs.
-----------------------------------

The size and configuration of the RAMs instantiated in the design can be controlled at the BSV
level at compile time using the YAML configuration files.
For a quick reference of all 1RW/1R1W instances do the following in the verilog release:

.. code-block:: bash

  $ grep "bram_1rw " mk*cache.v -A2
  $ grep "bram_1r1w " mkbpu.v -A2

Instruction Cache
^^^^^^^^^^^^^^^^^
The variables below refer to the fields within the ``icache_configuration`` node
in the YAML spec. ``VADDR`` refers to the XLEN and ``PADDR`` refers to the
``physical_addr_size`` in the YAML spec.

 - For Data Array
     * instance path: ``mkicache/data_arr_*``
     * Total number of 1RW instances : ``dbanks x ways``
     * DATA_WIDTH per instance: ``(word_size x 8 x block_size)/ dbanks``
     * MEM_SIZE per instance: ``sets``
     * ADDR_WIDTH per instance: ``Log(sets)``

 - For Tag Array
     * instance path: ``mkicache/tag_arr_*``
     * Total number of 1RW instances : ``tbanks x ways``
     * DATA_WIDTH per instance: ``PADDR - (Log(word_size) + Log(block_size) + Log(sets)) )/tbanks``
     * MEM_SIZE per instance: ``sets``
     * ADDR_WIDTH per instance: ``Log(sets)``

Data Cache
^^^^^^^^^^
The variables below refer to the fields within the ``dcache_configuration`` node
in the YAML spec. ``VADDR`` refers to the XLEN and ``PADDR`` refers to the
``physical_addr_size`` in the YAML spec.

 - For Data Array
     * instance path: ``mkdcache/data_arr_*``
     * Total number of 1RW instances : ``dbanks x ways``
     * DATA_WIDTH per instance: ``(word_size x 8 x block_size)/ dbanks``
     * MEM_SIZE per instance: ``sets``
     * ADDR_WIDTH per instance: ``Log(sets)``

 - For Tag Array
     * instance path: ``mkdcache/tag_arr_*``
     * Total number of 1RW instances : ``tbanks x ways``
     * DATA_WIDTH per instance: ``PADDR - (Log(word_size) + Log(block_size) + Log(sets)) )/tbanks``
     * MEM_SIZE per instance: ``sets``
     * ADDR_WIDTH per instance: ``Log(sets)``

Branch Predictors
^^^^^^^^^^^^^^^^^

RAMs will not be instantiated if the ``predictor`` option in YAML config is set to
``gshare_fa``. RAM instances for other values are described below.
The variables below refer to the fields within the ``branch_predictor`` node
in the YAML spec. ``VADDR`` refers to the XLEN and ``PADDR`` refers to the
``physical_addr_size`` in the YAML spec.


 - With compressed support:
     * Total number of 1R+1W instances : 2
     * DATA_WIDTH per instance: ``(VADDR - Log(btb_depth)) + VADDR + 4``
     * MEM_SIZE per instance: ``btb_depth/2``
     * ADDR_WIDTH per instance: ``Log(btb_depth/2)``
     * **NOTE**: One instance will have DATA_WIDTH + 1 bits.

 - Without compressed support:
     * Total number of 1R+1W instances : 1
     * DATA_WIDTH per instance: ``(VADDR - Log(btb_depth)) + VADDR + 3``
     * MEM_SIZE per instance: ``btb_depth``
     * ADDR_WIDTH per instance: ``Log(btb_depth)``

