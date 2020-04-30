Bus Interface and Fabric
========================

The Chromite core can be configured to implement any of the following bus interfaces along with a
choice of fabric (crossbar, simple-bus or Mesh). 

* AXI-4: A high performance AMBA protocol for fast memory transfers and high bandwidth.
* AXI-4 Lite: A low overhead version of AXI-4 targeted for slow peripherals and devices.
* TileLink: An open standard alternative to AXI and is highly customizable. InCore provides an open source implementation.

Each of the above protocols and fabrics come with highly parameterized bridge adaptors to transact
between different protocols and varying bus-sizes, thereby optimizing area, power and frequency.
