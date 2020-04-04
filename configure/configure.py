# See LICENSE.incore for license details

from cerberus import Validator
from configure.utils import yaml
import configure.utils as utils
from configure.errors import ValidationError
from configure.consts import *
import os
import logging
import sys
import math
from click.testing import CliRunner
from repomanager.rpm import rpm

logger = logging.getLogger(__name__)

bsc_path = utils.which("bsc")[:-3]

bsv_path_file = open('bsvpath','r').read().splitlines()


def handle_dependencies(verbose,clean,update,apply):
    rpm(verbose,'./',clean,dependency_yaml,update,apply)

def specific_checks(foo):

    logger.info('Performing Specific Checks')

    xlen = 64
    max_value = 2 ** 64
    if '32' in foo['ISA']:
        max_value = 2 ** 32
        xlen = 32

    # check if default values are correctly assigned
    for field in length_check_fields:
        if foo[field] > (max_value-1):
            logger.error('Default Value of ' + field + ' exceeds the max\
 allowed value')
            sys.exit(1)

    # check s_extension
    s_mode = foo['s_extension']['mode']
    s_itlbsize = foo['s_extension']['itlb_size']
    s_dtlbsize = foo['s_extension']['dtlb_size']
    s_asid_width = foo['s_extension']['asid_width']
    if 'S' in foo['ISA']:
        if xlen is 32 and s_mode != 'sv32' :
            logger.error('Only sv32 supported in RV32')
            sys.exit(1)
        if xlen is 64 and s_mode not in ['sv48', 'sv39'] :
            logger.error('Only sv39/sv48 supported in RV64')
            sys.exit(1)
        if xlen is 32 and s_asid_width > 9:
            logger.error('in RV32 ASID cannot be greater than 9')
            sys.exit(1)
        if xlen is 64 and s_asid_width > 16:
            logger.error('in RV32 ASID cannot be greater than 16')
            sys.exit(1)

    # check m_extension
    m_mulstages = foo['m_extension']['mul_stages']
    m_divstages = foo['m_extension']['div_stages']
    if 'M' in foo['ISA']:
        if m_mulstages > xlen:
            logger.error('Multiplication stages cannot exceed XLEN')
            sys.exit(1)
        if m_divstages > xlen:
            logger.error('Division stages cannot exceed XLEN')
            sys.exit(1)

    # check icache
    icache_enable = foo['icache_configuration']['instantiate']
    i_words = foo['icache_configuration']['word_size']
    i_blocks = foo['icache_configuration']['block_size']
    i_sets = foo['icache_configuration']['sets']
    i_ways = foo['icache_configuration']['ways']
    if icache_enable and 'S' in foo['ISA']:
        if i_words*i_sets*i_blocks > 4096:
            logger.error('Since Supervisor is enabled, each way of I-Cache\
 should be less than 4096 Bytes')
            sys.exit(1)
    
    # check dcache
    dcache_enable = foo['dcache_configuration']['instantiate']
    d_words = foo['dcache_configuration']['word_size']
    d_blocks = foo['dcache_configuration']['block_size']
    d_sets = foo['dcache_configuration']['sets']
    d_ways = foo['dcache_configuration']['ways']
    if dcache_enable:
      if xlen != (d_words * 8):
        logger.error('D_WORDS for a '+str(xlen)+'-bit core should be '+
          str(xlen/8))
    if dcache_enable and 'S' in foo['ISA']:
        if i_words*i_sets*i_blocks > 4096:
            logger.error('Since Supervisor is enabled, each way of D-Cache\
 should be less than 4096 Bytes')
            sys.exit(1)
        if d_words * 8 != xlen:
            logger.error('D-Cache d_words should be ' + str(xlen/8))
            sys.exit(1)

def capture_compile_cmd(foo):
    global bsc_cmd

    logger.info('Generating BSC compile options')
    s_mode = foo['s_extension']['mode']
    s_itlbsize = foo['s_extension']['itlb_size']
    s_dtlbsize = foo['s_extension']['dtlb_size']
    s_asid_width = foo['s_extension']['asid_width']
    m_mulstages = foo['m_extension']['mul_stages']
    m_divstages = foo['m_extension']['div_stages']

    macros = ' -D Addr_space=25'
    if "all" in foo['bsc_compile_options']['suppress_warnings']:
        macros += ' -suppress-warnings\
 G0010:T0054:G0020:G0024:G0023:G0096:G0036:G0117:G0015'
    elif "none" not in foo['bsc_compile_options']['suppress_warnings']:
        macros += ' -suppress-warnings '
        for w in foo['bsc_compile_options']['suppress_warnings']:
            macros += str(w)+':'
        macros = macros[:-1]

    if foo['bsc_compile_options']['assertions']:
        macros += ' -D ASSERT'
    if foo['bsc_compile_options']['trace_dump']:
        macros += ' -D rtldump'

    xlen = 64
    if '32' in foo['ISA']:
        xlen = 32

    macros += ' -D RV'+str(xlen)+' -D ibuswidth='+str(xlen)
    macros += ' -D dbuswidth='+str(xlen)
    macros += ' -D resetpc='+str(foo['reset_pc'])
    macros += ' -D paddr='+str(foo['physical_addr_size'])
    macros += ' -D vaddr='+str(xlen)
    macros += ' -D causesize=6'
    macros += ' -D CORE_'+str(foo['bus_protocol'])
    macros += ' -D iesize='+str(foo['iepoch_size'])
    macros += ' -D desize='+str(foo['depoch_size'])
    macros += ' -D dtvec_base='+str(foo['dtvec_base'])

    if foo['bsc_compile_options']['compile_target'] == 'sim':
        macros += ' -D simulate'

    if 'A' in foo['ISA']:
        macros += ' -D atomic'
    if 'F' in foo['ISA']:
        macros += ' -D spfpu'
    if 'D' in foo['ISA']:
        macros += ' -D dpfpu'
    if 'C' in foo['ISA']:
        macros += ' -D compressed'
    if 'M' in foo['ISA']:
        macros += ' -D muldiv'
        macros += ' -D MULSTAGES='+str(m_mulstages)
        macros += ' -D DIVSTAGES='+str(m_divstages)
    if 'U' in foo['ISA']:
        macros += ' -D user'
    if 'N' in foo['ISA']:
        macros += ' -D usertraps'
    if 'S' in foo['ISA']:
        macros += ' -D supervisor'
        macros += ' -D asidwidth='+str(s_asid_width)
        macros += ' -D itlbsize='+str(s_itlbsize)
        macros += ' -D dtlbsize='+str(s_dtlbsize)
        macros += ' -D '+str(s_mode)
    if foo['pmp']['enable']:
        grainbits = int(math.log2(foo['pmp']['granularity']))
        if xlen == 64 and grainbits < 3:
            logger.error('PMP Granularity for a 64-bit core has to be minimum \
8 bytes')
            sys.exit(1)
        macros += ' -D pmp -D pmpsize='+str(foo['pmp']['entries']) +\
                ' -D pmp_grainbits='+str(grainbits)
    if foo['branch_predictor']['instantiate']:
        macros += ' -D bpu'
        macros += ' -D '+foo['branch_predictor']['predictor']
        macros += ' -D btbdepth='+str(foo['branch_predictor']['btb_depth'])
        macros += ' -D bhtdepth='+str(foo['branch_predictor']['bht_depth'])
        macros += ' -D histlen='+str(foo['branch_predictor']['history_len'])
        macros += ' -D extrahist='+str(foo['branch_predictor']['extra_hist'])
        macros += ' -D rasdepth='+str(foo['branch_predictor']['ras_depth'])
        if 'enable' in foo['branch_predictor']['on_reset']:
            macros += ' -D bpureset=1'
        else:
            macros += ' -D bpureset=0'
        if foo['branch_predictor']['ras_depth'] > 0:
            macros += ' -D bpu_ras'

    macros += ' -D iwords='+str(foo['icache_configuration']['word_size'])
    macros += ' -D iblocks='+str(foo['icache_configuration']['block_size'])
    macros += ' -D iways='+str(foo['icache_configuration']['ways'])
    macros += ' -D isets='+str(foo['icache_configuration']['sets'])
    macros += ' -D ifbsize='+str(foo['icache_configuration']['fb_size'])
    if foo['icache_configuration']['one_hot_select']:
        macros += ' -D icache_onehot=1'
    else:
        macros += ' -D icache_onehot=0'
    if( foo['icache_configuration']['ecc_enable']):
        macros += ' -D icache_ecc'
    if foo['icache_configuration']['instantiate']:
        macros += ' -D icache'
        if foo['icache_configuration']['on_reset']:
            macros += ' -D icachereset=1'
        else:
            macros += ' -D icachereset=0'
    if foo['icache_configuration']['instantiate'] or \
            foo['branch_predictor']['instantiate']:
        macros += ' -D ifence'
    if foo['icache_configuration']['replacement'] == "RANDOM":
        macros += ' -D irepl=0'
    if foo['icache_configuration']['replacement'] == "RR":
        macros += ' -D irepl=1'
    if foo['icache_configuration']['replacement'] == "PLRU":
        macros += ' -D irepl=2'
    
    macros += ' -D dwords='+str(foo['dcache_configuration']['word_size'])
    macros += ' -D dblocks='+str(foo['dcache_configuration']['block_size'])
    macros += ' -D dways='+str(foo['dcache_configuration']['ways'])
    macros += ' -D dsets='+str(foo['dcache_configuration']['sets'])
    macros += ' -D dfbsize='+str(foo['dcache_configuration']['fb_size'])
    macros += ' -D dsbsize='+str(foo['dcache_configuration']['sb_size'])
    if foo['dcache_configuration']['rwports'] == 2:
        macros += ' -D dcache_dualport'
    if foo['dcache_configuration']['one_hot_select']:
        macros += ' -D dcache_onehot=1'
    else:
        macros += ' -D dcache_onehot=0'
    if( foo['dcache_configuration']['ecc_enable']):
        macros += ' -D dcache_ecc'
    if foo['dcache_configuration']['instantiate']:
        macros += ' -D dcache'
        if foo['dcache_configuration']['on_reset']:
            macros += ' -D dcachereset=1'
        else:
            macros += ' -D dcachereset=0'
    if foo['dcache_configuration']['replacement'] == "RANDOM":
        macros += ' -D drepl=0'
    if foo['dcache_configuration']['replacement'] == "RR":
        macros += ' -D drepl=1'
    if foo['dcache_configuration']['replacement'] == "PLRU":
        macros += ' -D drepl=2'

    if foo['fpu_trap']:
        macros += ' -D arith_trap'

    if foo['debugger_support']:
        macros += ' -D debug'

    macros += ' -D csr_low_latency'
    if foo['csr_configuration']['counters_in_grp4'] >0 :
        macros += ' -D csr_grp4 -D perfmonitors'
        if foo['csr_configuration']['counters_in_grp5'] >0 :
            macros += ' -D csr_grp5 -D perfmonitors'
            if foo['csr_configuration']['counters_in_grp6'] >0 :
                macros += ' -D csr_grp6 -D perfmonitors'
                if foo['csr_configuration']['counters_in_grp7'] >0 :
                    macros += ' -D csr_grp7 -D perfmonitors'
    macros += ' -D counters_grp4='+\
            str(foo['csr_configuration']['counters_in_grp4'])+\
            ' -D counters_grp5='+str(foo['csr_configuration']['counters_in_grp5'])+\
            ' -D counters_grp6='+str(foo['csr_configuration']['counters_in_grp6'])+\
            ' -D counters_grp7='+str(foo['csr_configuration']['counters_in_grp7'])
    macros += ' -D counters_size='+\
            str(foo['csr_configuration']['counters_in_grp4']+\
            foo['csr_configuration']['counters_in_grp5']+\
            foo['csr_configuration']['counters_in_grp6']+\
            foo['csr_configuration']['counters_in_grp7'])

    if foo['no_of_triggers'] > 0:
        macros += ' -D triggers -D trigger_num='+str(foo['no_of_triggers'])
        macros += ' -D mcontext=0 -D scontext=0'
        

    bsc_cmd = bsc_cmd.format(foo['bsc_compile_options']['verilog_dir'],
            foo['bsc_compile_options']['build_dir'], macros)

def generate_makefile(foo, logging=False):
    global bsc_cmd
    global verilator_cmd
    make_file = open('makefile.inc','w')
    xlen = 64
    if '32' in foo['ISA']:
        xlen = 32
    top_file = foo['bsc_compile_options']['top_file']
    top_module = foo['bsc_compile_options']['top_module']
    top_dir = foo['bsc_compile_options']['top_dir']
    verilog_dir = foo['bsc_compile_options']['verilog_dir']
    bsv_build_dir = foo['bsc_compile_options']['build_dir']
    verilator_threads = foo['verilator_configuration']['threads']

    if foo['verilator_configuration']['trace']:
        verilator_trace = '--trace'
    else:
        verilator_trace = ''
    if "none" in foo['verilator_configuration']['coverage']:
        verilator_coverage = ''
    elif "all" in foo['verilator_configuration']['coverage']:
        verilator_coverage = '--coverage'
    else:
        verilator_coverage = '--coverage-'+\
                foo['verilator_configuration']['coverage']
    if "fast" in foo['verilator_configuration']['sim_speed']:
        verilator_speed = 'OPT_SLOW="-O3" OPT_FAST="-O3"'
    else:
        verilator_speed = ''
    verilator_cmd = verilator_cmd.format(verilator_trace, verilator_coverage,
            verilator_threads)
    path = ''
    for p in bsv_path_file:
        path += ':'+p
    curr_dir = os.getcwd()
    make_file.write(makefile_temp.format(verilog_dir, bsv_build_dir, 
        "bin", bsc_cmd, path, top_module, top_dir, top_file, verilator_cmd, 
        verilator_speed, bsc_path, curr_dir, xlen ))
    if logging:
        logger.info(str(make_file.name)+' generated')

def generate_meson(foo):
    global bsc_cmd
    meson_file.write('''
# project headers
project('c-class-meson')

#executables
bsc = find_program('bsc')

options = {0}
'''.format(bsc_cmd.split()))
    # generate meson
    top_file = foo['bsc_compile_options']['top_file']
    top_module = foo['bsc_compile_options']['top_module']
    bsv_files = []
    for path in bsv_path_file:
        for root, dirs, files in os.walk(path):
            for f in files:
                if f.endswith('.bsv'):
                    bsv_files.append(os.path.join(root, f))
    # Recurse on packages
    rules = []
    rules1 = utils.recurse_packages(top_file.rstrip('.bsv'), bsv_files, rules, [], prelude)
    rules1.reverse()
    for x in rules1:
        print(x)
    for rule in sorted(rules1, key = lambda x : x[0]):
        meson_file.write(rule[1])
    
def validate_specs(inp_spec, logging=False):
   
    schema = 'configure/schema.yaml'
    # Load input YAML file
    if logging:
        logger.info('Loading input file: ' + str(inp_spec))
    inp_yaml = utils.load_yaml(inp_spec)

    # instantiate validator
    if logging:
        logger.info('Load Schema ' + str(schema))
    schema_yaml = utils.load_yaml(schema)
    
    validator = Validator(schema_yaml)
    validator.allow_unknown = False
    validator.purge_readonly = True
    normalized = validator.normalized(inp_yaml, schema_yaml)
    
    # Perform Validation
    if logging:
        logger.info('Initiating Validation')
    valid = validator.validate(normalized)
    
    # Print out errors
    if valid:
        if logging:
            logger.info('No Syntax errors in Input Yaml.')
    else:
        error_list = validator.errors
        raise ValidationError("Error in " + inp_spec + ".", error_list)
    specific_checks(normalized)
    capture_compile_cmd(normalized)
    generate_makefile(normalized, logging)
    cwd = os.getcwd()
    logger.info('Cleaning previously built code')
    utils.shellCommand('make restore').run(cwd=cwd)
