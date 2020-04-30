Build Time Configurations
=========================

The Chromite Core allows a wide variety of features to be customized based on the target application. :numref:`build_config_table`
captures most of the key configurations that can be selected when the core is synthesized and 
implemented. Note that the choice of these options does not affect the software application porting.



.. _build_config_table:

.. table:: Chromite build time configurations
    
   ========================== ========================= ===========================================
   Parameter                  Choices                   Description
   ========================== ========================= ===========================================
   **Core Level Configuration**
   ------------------------------------------------------------------------------------------------
   Processor Width (XLEN)     32/64                     implement a 32-bit or a 64-bit core. 
                                                        Defines the size of the register files and 
                                                        interface to the caches.
   ISA Extensions (ISA)       Combination of : A, M, F, - A: enable Atomic extension support
                              D, C, S, U                - M: enable MulDiv extension support
                                                        - F: enable Single precission support
                                                        - D: enable Double precission support
                                                        - C: enable Compressed extension support
                                                        - S: enable Supervisor extension support
                                                        - U: enable User extension support
                                                        - N: enable User Trap handling support
   **System Level Configurations**
   ------------------------------------------------------------------------------------------------
   Physical Address (PADDR)   Integer                   Size physical address on the SoC bus
   Debug Vector               PADDR sized integer       the address of the where the self-loop for 
                                                        the debugger lies
   Reset PC                   Integer                   The Value of the Reset PC from where
                                                        instructions will be fetched
   Debug support              Enabled/Disabled          Debug support available on the system and 
                                                        core or not.
   Co-Processor Interface     Enabled/Disabled          If enabled instantiates a cutom 
                                                        co-processor inter-face to the core.
   **Supervisor Extension Configurations**
   ------------------------------------------------------------------------------------------------
   Supervisor Mode            sv32, sv39 or sv48        the virualisation scheme to be adopted for 
                                                        Supervisor translation
   ITLB size                  integer < 64              Number of entries in the Instruction TLB
   DTLB size                  integer < 64              Number of entries in the Data TLB
   ASID size                  integer <9 for 32-bit OR  Size of the Address Space ID used in the 
                              integer <16 for 64-bit    SATP csr
   **Multiplier/Divider Configuration**
   ------------------------------------------------------------------------------------------------
   Multipler Stages           integer < XLEN            the number of cycles the multiplier takes 
                                                        for execution  
   Divider Stages             integer < XLEN            the number of cycles the divider takes for
                                                        execution
   **Branch Predictor Configurations**
   ------------------------------------------------------------------------------------------------
   Enable                     True/False                if the branch predictor should be 
                                                        instantiated inthe design or not.
 	 Predictor Type             Gshare or Bimodal         the type of predictor to be  incorporated
   On Reset                   Enabled/Disabled          if the BPU should be enabled/disabled on 
                                                        Reset
   Branch Target Buffer size  Integer                   the number of entries in the Branch Target 
                                                        Buffer
   Branch History Table size  Integer                   the number of entries in the Branch History 
                                                        Table
   History Length             Integer                   The number of history bits to be used in 
                                                        Gshare mode.
   Extra History Bits         Integer                   the number of speculative history bits to 
                                                        be used in Gshare mode.
   Return Address Stack Size  Integer                   the number of entries in the RAS

   **Instruction Cache Configurations**
   ------------------------------------------------------------------------------------------------
   Enable                     True/False                if the I\$ should be instantiated within 
                                                        the design or not.
   On Reset                   Enabled/Disabled          if the I\$ should be enabled or disabled 
                                                        on reset.
   Sets                       Integer                   Number of sets per way of the I\$
   Block Size                 Integer                   Number of 32-bit words per cache-block
   Ways                       Integer                   Number of ways in the I\$              
   Fill buffer size           Integer                   Number of entries in the Fill-Buffer
   Replacement Policy         PLRU, RoubdRobin, Random  The replacement policy to be implemented 
                                                        within the I\$              
   Banks for Data RAMs        Integer                   Number of banks the data blocks should be 
                                                        divided into     
   ECC                        Enabled/Disabled          Is ECC enabled or disabled for the I\$                     

   **Data Cache Configurations**
   ------------------------------------------------------------------------------------------------
   Enable                     True/False                if the D\$ should be instantiated within 
                                                        the design or not.
   On Reset                   Enabled/Disabled          if the D\$ should be enabled or disabled 
                                                        on reset.         
   Sets                       Integer                   Number of sets per way of the D\$                          
   Block Size                 Integer                   Number of words per cache-block              
   Ways                       Integer                   Number of ways in the D\$                                  
   Fill buffer size           Integer                   Number of entries in the Fill-Buffer                       
   Replacement Policy         PLRU, RoubdRobin, Random  The replacement policy to be implemented 
                                                        within the D\$    
   Banks for Data RAMs        Integer                   Number of banks the data blocks should be 
                                                        divided into     
   ECC                        Enabled/Disabled          Is ECC enabled or disabled for the D\$                     

 	 **PLIC Configurations**
   ------------------------------------------------------------------------------------------------
   Number of interrupts       Integer < 1024            Number of interrupts that can be processed 
                                                        by the PLIC
   Number of Priority Levels  Integer                   Number of priority levels within the PLIC 
   Number of NMI              Integer                   Number of NMI interrupts connected to PLIC

 	 **Performance Counter Configurations**
   ------------------------------------------------------------------------------------------------
   Number of Counters in Grp4 Integer < 7               Number of performance counters available
                                                        in group-4 of the CSR daisy-chain       
   Number of Counters in Grp5 Integer < 7               Number of performance counters available
                                                        in group-5 of the CSR daisy-chain       
   Number of Counters in Grp6 Integer < 7               Number of performance counters available
                                                        in group-6 of the CSR daisy-chain       
   Number of Counters in Grp7 Integer < 8               Number of performance counters available
                                                        in group-7 of the CSR daisy-chain       
 	 **Phyiscal Memory Protection (PMP)**
   ------------------------------------------------------------------------------------------------
   Enable                     True/False                If PMP support is present or not
   Entries                    Integer < 16              Number of regions for pmp       
   Granularity                Integer >= 4              Granularity in terms of bytes. 
                                                        Minumim is 4 for 32-bit cores and 8 for 
                                                        64-bit cores
   ========================== ========================= ===========================================
