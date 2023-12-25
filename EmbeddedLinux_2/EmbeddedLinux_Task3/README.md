# Embedded Linux Task 3
## Sysroot
In cross compilation, the sysroot refers to a directory that contains the essential system files and libraries needed for the target platform. It serves as a virtual root file system for the cross-compiled binaries, allowing them to be linked against the correct libraries and dependencies of the target system. The sysroot directory typically includes headers, libraries, and other necessary files specific to the target platform, enabling the cross-compiler to generate binaries that are compatible with the target environment.
It contains two main directories:
1. lib Directory
   - The ` lib ` Directory contains both dynamic and static libraries.
2. usr Directory
   - ` usr/bin ` : Contains executable files 
   - ` usr/include ` : Contains header files
   - ` usr/lib ` : Contains user specific libraries
   - ` usr/share ` : Includes documentation, configuration files, localization data, and          other resources that are not specific to a particular binary or library. 
   
## binutil
binutils refer to a collection of binary utilities that are commonly used in compilation processes and typically includes tools such as assemblers, linkers and other utilities that are essential for creating executable and object files.
