# Documentation List

This document describes how to get started with HopeRF Bluetooth development using the **CMT4531 SDK**.  
The key documents for CMT4531 Bluetooth development are summarized in the following order:

1. **PB_CMT453x Series Product Brief**  
2. **UG_CMT453x Series Chips Hardware Design Guide**  
3. **UG_CMT453x SDK User Guide**  
4. **UG_CMT453x API Reference Manual (API参考手册)**  
5. **UG_CMT453x Firmware Update User Guide V1.2**  
6. **UG_CMT453x VSCode GCC Environment Setup Notes V1.0 (环境搭建应用笔记)**  

---

# Production Programming Options for HopeRF BLE Devices

## Custom Part Manufacturing Service

HopeRF provides a **custom programming service** to simplify your production process.  
You can submit your firmware image to us, and our engineering team will handle the programming directly at the factory. Once the firmware is programmed, HopeRF will generate a **unique part number** corresponding to your customized version, making it easy for you to place repeat orders without additional steps.

This service not only saves time and labor during assembly but also ensures **consistency, quality, and traceability** across all programmed devices.  

For more details about this service or to initiate a request, please contact your dedicated HopeRF sales representative.

---

## In-System or In-House Programming

Our BLE chipsets support programming via the **SWD (Serial Wire Debug) interface**, allowing you to program devices conveniently over this standard debugging and programming interface.

To meet different production and development needs, multiple standalone programmer options are available:

### Official Programmers

- **MW100HOP**  
  - Supports **1-to-1 programming**  
  - Ideal for development, prototyping, and low-volume production  

- **MW100HOP-X4**  
  - Supports **1-to-4 programming**  
  - Suitable for higher efficiency in small-to-medium production runs  

---

### Recommended Third-Party Programmer

In addition to the official tools, we also recommend the **PW200 standalone programmer**, which we use extensively in our own **mass production** process.  

- Reliable performance proven in large-scale manufacturing  
- Cost-effective and efficient solution for programming at scale  
- Online documentation and resources are available for quick setup  

**Useful Links:**  
- [PW200 Product Page](http://www.powerwriter.com/index/index/products?p=2)  
- [PW200 Documentation](http://docs.powerwriter.com/en/docs/next/powerwriter_for_arm/intro)  
