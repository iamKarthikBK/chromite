
CHANGELOG
=========

This project adheres to `Semantic Versioning <https://semver.org/spec/v2.0.0.html>`_.

[0.9.0] - 2020-04-30
--------------------

- snapshot the c-class with changes in mostly the top-level modules and scripts to accommodate for
  incore developed IPs and fabrics.
- fixed reset logic handling in ccore.bsv to support reset by debugger.
- updated SoC to decouple debug related logic into a separate module. This now allows for easy reset
  control.
- datasheet of chromite added
- added chromiteM profile same yaml file
- updated usage docs with chromite and removed non-supported items.
- the debug module in the test-soc is now always enabled irrespective of the debug being enabled or
  not
- adding steps in the docs on how to reset the debugger

