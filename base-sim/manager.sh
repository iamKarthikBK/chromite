### shakti-soc manager

### Constants
VERSION=0.1.0
BRANCH=feature/soc-templates

CACHES_REPO=https://gitlab.com/shaktiproject/uncore/caches_mmu
COMMON_BSV_REPO=https://gitlab.com/shaktiproject/common_bsv
DEVICES_REPO=https://gitlab.com/shaktiproject/uncore/devices
FABRICS_REPO=https://gitlab.com/shaktiproject/uncore/fabrics
COMMON_VERILOG_REPO=https://gitlab.com/shaktiproject/common_verilog
VERIFICATION=https://gitlab.com/shaktiproject/verification_environment/verification


### Functions to be re-used

## Usage help function
usage () {
    printf "\n"
    printf "shakti-soc manager ${VERSION}\n"
    printf "========================\n"
    printf "\n"
    printf "Usage: ./manager.sh <command> [options]\n"
    printf "\n"
    printf "Available commands: \n\n"
    printf "./manager.sh help \t\t Displays help\n"
    printf "./manager.sh update_deps \t\t Clones the Dependent Repos\n"
    exit 1
}

## Die function
err() { echo "$*" 1>&2 ;}

## Checking dependencies function
update_deps () {
    printf "\n"
    mkdir -p deps
    git clone $CACHES_REPO deps/caches_mmu || err "caches_mmu already exists"
    git clone $COMMON_BSV_REPO deps/common_bsv || err "common_bsv already exists"
    git clone $DEVICES_REPO deps/devices || err "devices already exists"
    git clone $FABRICS_REPO deps/fabrics || err "fabrics already exists"
    git clone $COMMON_VERILOG_REPO deps/common_verilog || err "common_verilog already exists"
    git clone $VERIFICATION verification --recursive || err "verification already exists"
}

### Main Script

## Check if no command line args passed, print help and exit
if [ "$#" -eq 0 ]; then
    usage
fi

case $1 in
    help)
        usage
        ;;
    update_deps)
        printf "\nshakti-soc manager ${VERSION} - update_deps\n"
        printf "======================================\n"
        update_deps
        ;;
esac
