# Embedded Linux Task1
## Static Linking
### Library
The liboperation.a was created by using:

ar -rcs liboperation.a *.o

### Linking
After copying the library to /lib, the static linking was done by using:

gcc -static main.c -o StaticLink.exe -L/lib -loperation

### Comparison
- ldd Command

   ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/d9f7c7e9-4550-49cf-b7ba-dd019f0e2515)


- file Command

  ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/ccab0507-d9ef-44b9-8e8f-c98ef4103aad)

- du -sh Command

  ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/f9b63cd4-8135-449e-a9f4-b88ab85a7ed8)

  The size is very big as the libraries are copied in the executable.

- objdump Command
  
  The output of this command is the symbol table of the whole executable after static linking. All the functions are ABS as the needed functions from the main have already beeen linked from the       library and provided.

## Dynamic Linking

### Library
The liboperation.so was created by using:

 gcc -shared -fPIC -o liboperation.so *.o

### Linking
After copying the library to /lib, the dynamic linking was done by using:

gcc -L/lib -Wl,-rpath=/lib -Wall -o DynamicLink.exe main.c -loperation 

### Comparison
- ldd Command

  ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/61f7bcf9-ea35-4306-b08b-227e1b485c81)

- file Command

  ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/6965e4c2-65e0-43c1-a7b2-b32d0e6abe8a)

- du -sh Command

  ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/95b79ce6-73c1-419d-b140-26f86bab3f51)

  The size is smaller as the executable doesn't contain the libraries and will link at runtime.

- objdump Command
  
  The symbol table of the executable contains many UND functions. All of the library functions are UND as the linking will be done at runtime and will be provided then.
