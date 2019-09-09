# CHANGELOG

This project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [1.0.0] - 2019-08-28
## Fixed
- data types of ISBs has been split to keep logic minimal and optimize frequency closure
- Logger is used in all submodules.
- macros and configurable options have been fixed to be more precise and granular
- stage0 or pc-fetch stage with fully-associative gshare has been fixed and tuned for higher
  frequency closure
- ALU has ben further optimized for better freqency closure
- ISB types and operand forwarding tuned for better frequency closure.
- overall changes to remove trailing white-spaces from all files.
- version extraction based on CHANGELOG will be followed hence forth.

## Added
- decompressor function added in stage1
- reset-pc can now be controlled by the SoC as an input without having to compromize on synthesi
  boundaries
- retimed multiplier with configurable stages is used always.
- different multiplier modules for evaluation have also been added.
- fully-associative TLB support has also been added.
- configuration support to supress all warnings during bsv compile
- CHANGELOG will be maintained from these release onwards.

## Removed
- bimodal bpu support has been removed for now since it needs to be re-structured based on new
  interfaces and also requires new verilog-bram models
- gshare index model has also been removed along the same arguments as above.
- support for variable cycle mutliplier has also been removed as part of this release.

