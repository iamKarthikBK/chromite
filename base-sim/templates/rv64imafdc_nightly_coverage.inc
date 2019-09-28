ISA=RV64IMAFDC

# User mode related settings
USERTRAPS=disable
USER=enable

# Supervisor related settings
SUPERVISOR=sv39
ITLBSIZE=4
DTLBSIZE=4

# Configuring M extension
MULSTAGES=2
DIVSTAGES=32

# Configuring the branch predictor
PREDICTOR=gshare
BPURESET=1
BTBDEPTH=32
BHTDEPTH=512
HISTLEN=8
EXTRAHIST=3
RASDEPTH=8

# configuring the Instruction cache
ICACHE=enable
ISETS=64
IWORDS=4
IBLOCKS=16
IWAYS=4
IFBSIZE=4
IESIZE=2
IREPL=PLRU
IRESET=1
IDBANKS=1
ITBANKS=1

# configuring the Data cache
DCACHE=enable
DESIZE=1
DSETS=64
DWORDS=8
DBLOCKS=8
DWAYS=4
DFBSIZE=8
DSBSIZE=2
DREPL=PLRU
DRESET=1
DDBANKS=1
DTBANKS=1

# Configuring the PMP CONFIG
PMP=disable
PMPSIZE=0
ASIDWIDTH=9

# Configuring Debug and Trigger Setup
TRIGGERS=0
DEBUG=disable
OPENOCD=disable


#BSV compile options
SUPPRESSWARNINGS=none

# Simulation configurations and env settings
COVERAGE=all
TRACE=disable
THREADS=1
VERILATESIM=slow
VERBOSITY=disable
RTLDUMP=enable
ASSERTIONS=enable

# miscellaneous configs
SYNTH=SIM
ARITH_TRAP=disable
RESETPC=4096
PADDR=32
COREFABRIC=AXI4

# Do not change
CAUSESIZE=6

# Counter config for daisy-chain
CSRTYPE=daisy
CSR_LATENCY=low
COUNTERS_GRP4=0
COUNTERS_GRP5=0
COUNTERS_GRP6=0
COUNTERS_GRP7=0