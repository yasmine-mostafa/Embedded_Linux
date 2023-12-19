#Static Linking

##Library
The liboperation.a was created by using:
ar -rcs liboperation.a *.o

##Linking
After copying the library to /lib, the static linking was done by using:
gcc -static main.c -o StaticLink.exe -L/lib -loperation

##Comparison
-ldd Command

-file Command

-objdump Command

#Dynamic Linking

##Library
The liboperation.so was created by using:
 gcc -shared -fPIC -o liboperation.so *.o

##Linking
After copying the library to /lib, the dynamic linking was done by using:
gcc -L/lib -Wl,-rpath=/lib -Wall -o DynamicLink.exe main.c -loperation 

##Comparison
-ldd Command

-file Command

-objdump Command
