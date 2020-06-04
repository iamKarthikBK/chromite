.. raw:: latex

   \pagebreak

.. _revisions:

Revisions
=========

**Version [0.9.2]**

  - removed the concept of extra history bits from gshare_fa
  - added history_bits as a new parameter to indicate the size of bits used from the ghr for indexing.
  - reduced tick resolution in test_soc
  - updated the 2 bit counter increment scheme to account for hysterisis bit separately
  - updated the gshare has function for improved collisions
  - updated repomanager to 1.2.0


**Version [0.9.1]**

  - parallel build using bluetcl is enabled
  - remove re-alignment of bytes in ccore for I$ and D$ reads. This now is handled within the caches
  - bumped version of the caches
  - gitignore updated
  - fixed and cleaned up the interrupt and delegation logic
  - adding pre-requisite checks in configure
  - default.yaml is picked up as default if no argument given to -ispec
  - split interface of seip and meip. Both can now be driven by plic independently. Also led to removal of unwanted attributes.
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
  - updated Soc.defines to relocate debug loop at 0x100
  - updated dtvec_base in both all the sample yamls
  - dtvec_base should be stored without the LSB (alignment constraints)

