# Benchmarking the Core

The max DMIPS of the C-class core is **1.72DMIPs/MHz.**

The C-class core is highly configurable and thus requires a specific kind of tuning to achieve the maximum performance. This document will highlight some of the settings and their respective benchmark numbers.

## Benchmarking the Dhrystone

### Config1: No compressed and GShare (Fully associative)
The DMIPs for this config is : **1.72 DMIPs/MHz**

```
ISA=RV64IM
PREDICTOR=gshare_fa
BHTDEPTH=256
HISTLEN=8
BTBDEPTH=32
RASDEPTH=8
```

### Config2: No compressed and GShare (Direct Mapped)
The DMIPs for this config is : **1.72 DMIPs/MHz**

```
ISA=RV64IM
PREDICTOR=gshare
BHTDEPTH=64
BTBDEPTH=256
HISTLEN=8
RASDEPTH=8 
RASTAGDEPTH=64
```

### Config3: No compressed and Bimodal 
The DMIPs for this config is : **1.70 DMIPs/MHz**

```
ISA=RV64IM
PREDICTOR=bimodal
BTBDEPTH=512
RASDEPTH=8
```
with ```BTBDEPTH=256```, DMIPs = **1.66 DMIPs/MHz** with rest of the config being the same.


### Config4: Compressed and GShare (Fully associative)
Dhrystone compiled with `march = rv64imc` and run on c-class with the following config will give a dmips of: **1.70 DMIPs/MHz**

```
ISA=RV64IMC
PREDICTOR=gshare_fa
BHTDEPTH=128
HISTLEN=7
BTBDEPTH=32
RASDEPTH=8
```

Dhrystone compiled with `march = rv64im` and run on c-class with the following config will give a dmips of: **1.72 DMIPs/MHz**

```
ISA=RV64IMC
PREDICTOR=gshare_fa
BHTDEPTH=256
HISTLEN=8
BTBDEPTH=32
RASDEPTH=8
```

### Config5: Compressed and GShare (direct mapped)
TODO

### Config6: Compressed and Bimodal
Dhrystone compiled with `march = rv64imc` and run on c-class with the following config will give a dmips of: **1.67 DMIPs/MHz**

```
ISA=RV64IMC
PREDICTOR=bimodal
BTBDEPTH=512
RASDEPTH=8
```

Dhrystone compiled with `march = rv64im` and run on c-class with the following config will give a dmips of: **1.66 DMIPs/MHz**

```
ISA=RV64IMC
PREDICTOR=bimodal
BTBDEPTH=512
RASDEPTH=8
```