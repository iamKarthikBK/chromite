Interrupt Controller
====================

The Chromite system also comes with a Platform Level Interrupt Controller (PLIC). The PLIC routes
all the external interrupts to the core.

* The PLIC allows each interrupt to be enabled or disabled 
* Each interrupt also has a
  runtime or design time configurable priority. Higher priority interrupts are serviced first
* The software application can also define a priority threshold. Interrupts with priority lower than
  the threshold will not latch an interrupt to the system 
* PLIC supports both level and edge-triggered interrupts

This is an optional module and users can choose to connect their own interrupt controller to 
drive the external-interrupt source to the core. 

