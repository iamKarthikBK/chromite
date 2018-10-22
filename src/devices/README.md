[![pipeline status](https://gitlab.com/incoresemi/uncore/devices/badges/master/pipeline.svg)](https://gitlab.com/incoresemi/uncore/devices/commits/master)

# Devices

This repo contains the following devices:

1. BootROM
2. UART - simple (Rx - Tx mechanism)
3. CLINT (Core level interruptor)
4. PWM (Pulse Width Modulator)

## QuickStart

    $ git clone git@gitlab.com:incoresemi/devices.git --recursive
    
Each device has its own Makefile to generate verilog and synthsize using VIVADO

