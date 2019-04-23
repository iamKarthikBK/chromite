# Custom CSRs Implemented

The C-class includes the following custom csrs implemented in the non-standard space for extra control and special features.

## Custom Control CSR (0x800)

The csr is used to the enable or disable the caches, branch predictor and [arithmetic exceptions](../docs/arithmetic_traps.md) at run-time. 

| Bit Position | Reset Value|Description |
|--------------|-------------|-----------|
| 0  | DRESET in `soc_config`|Enable or disable the data-cache. |
| 1  | IRESET in `soc_config`|Enable or disable the instruction-cache.|
| 2  | BPURESET in `soc_config`| Enable or disable the branch predictor.|
| 3  | Disabled on Reset| Enable or disable arithmetic exceptions.|
