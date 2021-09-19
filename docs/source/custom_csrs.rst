.. _custom_csrs:

###########
Custom CSRs
###########

The core includes the following custom CSRs implemented in the non-standard space for 
extra control and features.

.. _custom_control_csr:

custom control (0x800)
----------------------

This CSR is used to the enable or disable the caches, branch predictor and arithmetic exceptions
at run-time. Each of the above can be controlled independently of each other enabled by setting a 1
to the corresponding bit and disabled by clearing the bit to 0.

.. table:: Description of the custom control register

  ============  ===========  ============
  Bit Position  Reset Value  Description
  ============  ===========  ============
  0             1            Enable or disable the data-cache.
  1             1            Enable or disable the instruction-cache.
  2             1            Enable or disable the branch_predictor.
  ============  ===========  ============


