# Embedded Linux Task 4
## Documentation
### By using makefile:
  - Declare variable names for your files
  - Declare variable names for your compilation process and targeted variables specifying the compiler to be avr-gcc
  - Write recipe to compile each source file, create a library named libmcal.a containing all MCAL object files then link all of this to create the main.elf while specifying the target using -mmcu=atmega32
  
## Why use static libraries?
1. 'Memory Efficiency' : Static libraries are linked directly into the executable binary during the compilation process,resulting in a smaller memory footprint. In resource-constrained environments like AVR microcontrollers, where memory is limited, using static libraries can help optimize memory usage.
2. 'Performance' : Dynamic libraries require additional runtime overhead for loading and resolving symbols during program execution which may not be desirable in real-time or latency-sensitive applications found in AVR-based systems. Static libraries eliminate this runtime overhead as all the required code is already present in the executable.
3. 'Portability' : AVR microcontrollers often have specific hardware configurations and limited operating systems, if any. Dynamic libraries rely on a dynamic linker/loader, which may not be available or practical in such embedded systems. 
4. 'Simplified Deployment' : With static libraries, there is no need to distribute or manage separate library files alongside the executable. The entire functionality is bundled within the binary itself, simplifying the deployment process.
