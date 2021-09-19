##############
Glossary Terms
##############

.. glossary::

    ISB
      Inter-Stage-Buffers. Buffers or FIFOs placed between stages of the pipeline.

    DEC
      The Decode stage of the pipeline

    EXE
      The Execution stage of the pipeline

    MEM
      The Memory stage of the pipeline

    WB
      The Write back stage of the pipeline

    WAW
      Write-After-Write

    IRF
      Integer Register File

    FRF
      Floating Poing Register File

    IMS
      Instruction Memory Subsystem

    DMS
      Data Memory Subsytem

    BASE ISB
      The ISB buffer between EXE and MEM stages which holds the result of base alu and branch
      resolution instructions

    TRAP ISB
      The ISB buffer between EXE and MEM stages which holds instructions which were tagged as traps
      (exceptions or interrupts)

    SYSTEM ISB
      The ISB buffer between EXE and MEM stages which hold system instructions like csr ops, xRET, etc. 

    MEMORY ISB
      The ISB buffer between EXE and MEM stages which holds the memory operations that are to
      complete in the MEM or WB stage.

    FUID ISB
      The ISB buffer between EXE and MEM stages which holds the ordering of the instructions in
      which they should should be processed and committed.

    CUID ISB
      The ISB buffer between MEM and WB stages which holds the sequence in which instructions must
      be committed.

    MEM-WB ISB
      The ISB buffer between MEM and WB stages which holds the result of the all non-memory and
      non-system instructions.

    IO-MEMORY ISB
      The ISB buffer between MEM and WB stages which holds the store and non-cacheable operations
      which need to be committed in the write-back stage.
      
