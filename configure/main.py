# See LICENSE.incore for license details
import logging
import os
import shutil
import sys

import configure.configure as configure
import configure.utils as utils

def main():
    '''
        Entry point for riscv_config.
    '''

    # Set up the parser
    parser = utils.config_cmdline_args()
    args = parser.parse_args()

    # Set up the logger
    utils.setup_logging(args.verbose)
    logger = logging.getLogger()
    logger.handlers = []
    ch = logging.StreamHandler()
    ch.setFormatter(utils.ColoredFormatter())
    logger.addHandler(ch)

    logger.info('************ C-Class Core Generator ************ ')
    logger.info('           Available under BSD License\n\n')

    if args.ispec is None:
        update_dep = False
    else:
        update_dep = True

    configure.handle_dependencies(args.verbose, args.clean,update_dep,'patch')
    if args.ispec is None:
        logger.info('No Input YAML provided')
        sys.exit(0)
    else:
        configure.validate_specs(os.path.abspath(args.ispec), True)

if __name__ == "__main__":
    exit(main())
