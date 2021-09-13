
num_harts
 **Description**: Total number of harts to be instantiated in the dummy
 test-soc. Note that these will non-coherent cores simply acting as masters on
 the fast-bus.

  **Examples**:

  .. code-block:: yaml

     num_harts: 2

isb_sizes
 **Description**: A dictionary controlling the size of the inter-stage buffers
 of the pipeline. The variable isb_s0s1 controls the size of the isb between stage0 and stage1. 
 Similarly isb_s1s2 dictates the size of the isb between stage1 and stage2 and
 so on. By increasing isb_s0s1 and isb_s1s2 one can shadow the stalls or
 latencies in the backend stages of the pipeline by fetching more instructions
 into the front-end stages of the pipeline.

 There is a restriction however that isb_s2s3 should always be 1. This is
 because the outputs of register file accessed in stage2 are not buffered and
 niether is the bypass scheme implemented to handle this scenario.

 One can however increase the number of in-flight instructions by increasing
 the sizes of isb_s3s4 and isb_s4s5 (increasing isb_s3s4 has a larger impact).

 Also note that if write-after-write stalls are disabled , the size of the
 wawid is defined by the sum of isb_s3s4 and isb_s4s5. Therefore, increasing
 in-flight instructions caused a logarithmic increase in the wawid used for
 maintaining bypass of operands.


 **Examples**:

 .. code-block:: yaml

   isb_sizes :
     isb_s0s1: 2
     isb_s1s2: 2
     isb_s2s3: 1
     isb_s3s4: 2
     isb_s4s5: 2

merged_rf: 
 **Description**: Boolean field to indicate if the registerfiles of floating
 and integer should be implemented as a single extended regfile in hw. This
 field should be set to true only if 'F/D' support is enabled'

 **Examples**:

 .. code-block:: yaml

   merged_rf: True

total_events
 **Description**: Total number of events in the system

 **Examples**:

 .. code-block:: yaml

   total_events: 28

waw_stalls
 **Description**: Indicates if stalls must occur on a WAW hazard

 **Examples**:

 .. code-block:: yaml
   
   waw_stalls: False

iepoch_size
 **Description**: integer value indicating the size of the epochs for the
 instruction memory subsystem. Allowed value is 2 only

 **Examples**:

 .. code-block:: yaml

   iepoch_size: 2

depoch_size
 **Description**: integer value indicating the size of the epochs for the
 data memory subsystem. Allowed value is 1 only

 **Examples**:

 .. code-block:: yaml

   depoch_size: 1

dtvec_base
  **Description**: An integer address indicating where the self-loop for the
  debug module sits

  **Examples**:

  .. code-block:: yaml

    dtvec_base: 0x0

s_extension
  **Description**: Describes various supervisor and MMU related parameters.
  These parameters only take effect when "S" is present in the ISA field.

    - ``itlb_size``: integer indicating the size of entries in the Instruction TLB
    - ``dtlb_size``: integer indicating the size of entries in the Data TLB

  **Examples**:

  .. code-block:: yaml

    s_extension:
      itlb_size: 4
      dtlb_size: 4

a_extension
  **Description**: Describes various A-extension related parameters. These params take effect only
  when the "A" extension is enabled in the riscv_config ISA

     - ``reservation_size``: integer indicate the size of the reservation in terms of bytes.
       Minimum value is 4 and must be a power of 2.

  **Examples**:

  .. code-block:: yaml

     a_extension:
       reservation_size: 8

m_extension
  **Description**: Describes various M-extension related parameters. These
  parameters take effect only is "M" is present in the ISA field.

    - ``mul_stages``: an integer indicating the number of pipeline stages for the
      integer multiplier. Max value is limited to the XLEN defined in the ISA.
    - ``div_stages``: an integer indicating the number of cycles for a single
      division operation. Max value is limited to the XLEN defined in the ISA.

  **Examples**:

  .. code-block:: yaml

    m_extension:
      mul_stages : 2
      div_stages: 64


branch_predictor
  **Description**: Describes various branch predictor related parameters. 

    - ``instantiate``: boolean value indicating if the predictor needs to be
      instantiated
    - ``predictor``: string indicating the type of predictor to be implemented. Valid
      values are: 'gshare'
      not. Valid values are : ['enable','disable']
    - ``btb_depth``: integer indicating the size of the branch target buffer
    - ``bht_depth``: integer indicating the size of the bracnh history buffer
    - ``history_len``: integer indicating the size of the global history register
    - ``history_bits``: integer indicating the number of bits used for indexing bht/btb.
    - ``ras_depth``: integer indicating the size of the return address stack.

  **Examples**:

  .. code-block:: yaml

    branch_predictor:
      instantiate: True
      predictor: gshare
      btb_depth: 32
      bht_depth: 512
      history_len: 8
      history_bits: 5
      ras_depth: 8

icache_configuration
  **Description**: Describes the various instruction cache related features.

    - ``instantiate``: boolean value indicating if the predictor needs to be
      instantiated
      not. Valid values are : ['enable','disable']
    - ``sets``: integer indicating the number of sets in the cache
    - ``word_size``: integer indicating the number of bytes in a word. Fixed to 4.
    - ``block_size``: integer indicating the number of words in a cache-block.
    - ``ways``: integer indicating the number of the ways in the cache
    - ``fb_size``: integer indicating the number of fill-buffer entries in the cache
    - ``replacement``: strings indicating the replacement policy. Valid values are:
      ["PLRU", "RR", "Random"]
    - ``ecc_enable``: boolean field indicating if ECC should be enabled on the
      cache.
    - ``one_hot_select``: boolean value indicating if the bsv one-hot selection
      funcion should be used of conventional for-loops to choose amongst
      lines/fb-lines. Choice of this has no affect on the functionality

  If supervisor is enabled then the max size of a single way should not exceed
  4Kilo Bytes

  **Examples**:

  .. code-block:: yaml

    icache_configuration:
      instantiate: True
      sets: 4
      word_size: 4
      block_size: 16
      ways: 4
      fb_size: 4
      replacement: "PLRU"
      ecc_enable: false
      one_hot_select: false

dcache_configuration
  **Description**: Describes the various instruction cache related features.

    - ``instantiate``: boolean value indicating if the predictor needs to be
      instantiated
      not. Valid values are : ['enable','disable']
    - ``sets``: integer indicating the number of sets in the cache
    - ``word_size``: integer indicating the number of bytes in a word. Fixed to 4.
    - ``block_size``: integer indicating the number of words in a cache-block.
    - ``ways``: integer indicating the number of the ways in the cache
    - ``fb_size``: integer indicating the number of fill-buffer entries in the cache
    - ``sb_size``: integer indicating the number of store-buffer entries in the cache. Fixed to 2
    - ``ib_Size``: integer indicating the number of io-buffer entries in the cache. Default to 2
    - ``replacement``: strings indicating the replacement policy. Valid values are:
      ["PLRU", "RR", "Random"]
    - ``ecc_enable``: boolean field indicating if ECC should be enabled on the
      cache.
    - ``one_hot_select``: boolean value indicating if the bsv one-hot selection
      funcion should be used of conventional for-loops to choose amongst
      lines/fb-lines. Choice of this has no affect on the functionality
    - ``rwports``: number of read-write ports available on the brams. Allowed
      values are 1rw, 1r1w and 2rw

  If supervisor is enabled then the max size of a single way should not exceed
  4Kilo Bytes

  **Examples**:

  .. code-block:: yaml

    dcache_configuration:
      instantiate: True
      sets: 4
      word_size: 4
      block_size: 16
      ways: 4
      fb_size: 4
      sb_size: 2
      lb_size: 2
      ib_size: 2
      replacement: "PLRU"
      ecc_enable: false
      one_hot_select: false
      rwports: 1r1w

reset_pc
  **Description**: Integer value indicating the reset value of program counter

  **Example**:

  .. code-block: yaml

    reset_pc: 4096

bus_protocol
  **Description**: bus protocol for the master interfaces of the core. Fixed to
  "AXI4"

  **Examples**: 

  .. code-block:: yaml

    bus_protocol: AXI4

fpu_trap
  **Description**: Boolean value indicating if the core should trap on floating
  point exception and integer divide-by-zero conditions.

  **Examples**:

  .. code-block:: yaml

    fpu_trap: False

no_of_triggers
  **Description**: An integer field indicating the number of triggers to be
  implemented

  **Examples**:

  .. code-block:: yaml

    no_of_triggers: 4

verilator_configuration
  **Description**: describes the various configurations for verilator compilation.

    - ``coverage``: indicates the type of coverage that the user would like to
      track. Valid values are: ["none", "line", "toggle", "all"]
    - ``trace``: boolean value indicating if vcd dumping should be enabled.
    - ``threads``: an integer field indicating the number of threads to be used
      during simulation
    - ``verbosity``: a boolean field indicating of the verbose/display statements in
      the generated verilog should be compiled or not.
    - ``out_dir``: name of the directory where the final executable will be dumped.
    - ``sim_speed``: indicates if the user would prefer a fast simulation or slow
      simulation. Valid values are : ["fast","slow"]. Please selecting "fast"
      will speed up simulation but slow down compilation, while selecting "slow"
      does the opposite.

  **Examples**:

  .. code-block:: yaml

   verilator_configuration:
     coverage: "none"
     trace: False
     threads: 1
     verbosity: True
     open_ocd: False
     sim_speed: fast

bsc_compile_options
  **Description**: Describes the various bluespec compile options

    - ``test_memory_size``: size of the BRAM memory in the test-SoC in bytes.
       Default is 32MB
    - ``assertions``: boolean value indicating if assertions used in the design
      should be compiled or not
    - ``trace_dump``: boolean value indicating if the logic to generate a simple
      trace should be implemented or not. Note this is only for simulation and not
      a real trace
    - ``compile_target``: a string indicating if the bsv files are being compiled for simulation
      of for asic/fpga synthesis. The valid values are: [ 'sim', 'asic', 'fpga' ]
    - ``suppress_warnings``: List of warnings which can be suppressed during
      bluespec compilation. Valid values are: ["none", "all", "G0010", "T0054", "G0020", "G0024", "G0023", "G0096", "G0036", "G0117", "G0015"]
    - ``ovl_assertions``: boolean value indicating if OVL based assertions must be turned on/off
    - ``ovl_path``: string indicating the path where the OVL library is installed.
    - ``sva_assertions``: boolean value indicating if SVA based assertions must be turned on/off
    - ``verilog_dir``: the directory name of where the generated verilog will be
      dumped
    - ``open_ocd``: a boolean field indicating if the test-bench should have an
      open-ocd vpi enabled.
    - ``build_dir``: the directory name where the bsv build files will be dumped
    - ``top_module``: name of the top-level bluespec module to be compiled.
    - ``top_file``: file containing the top-level module.
    - ``top_dir``: directory containing the top_file.

  **Examples**:

  .. code-block:: yaml

   bsc_compile_options:
     assertions: True
     trace_dump: True
     suppress_warnings: "none"
     top_module: mkTbSoc
     top_file: TbSoc
     top_dir: base_sim
     out_dir: bin
