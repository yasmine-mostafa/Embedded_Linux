# U-boot

1. Clone u-boot repo and checkout on version v2022.07
   
   ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/5ac6fcb4-0358-4e8c-b765-be4ae722b5e0)

2. Export our cross compiler (arm-cortexa9) and architecture (arm) as the makefile needs these variables.

   ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/d710f6b6-7578-4c0b-a821-6b8ae86ab4f0)

4. Use default configurations of vexpress_ca9x4, then open configurations menu and customize it, then build u-boot.

   ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/6f688c71-84fa-4aeb-a3d0-9ae8c1d58221)

5. Run qemu with our virtual SD card

   - `qemu-system-arm` : run qemu 

   - `-M` : specify the machine
   - `-m`: set size of RAM 
   - `-nographic` : Disables graphical window
   - `-kernel` : Specifies kernel image
   - `-sd` : Attach to an SD Card

   ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/2fbc574d-054b-44e1-ae16-ae9b41a21936)

6. After setting a new environment variable and saving it  using `saveenv` the `uboot.env` appeared in the boot partition in the SD_Card.

      ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/18112444-f3d1-487f-8185-9564905f5117)

    ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/b8607d05-69d5-406c-b200-4424d59fab1e)

7. `bdinfo` shows information about our board, here it shows that the RAM starts at 0x60000000

   ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/71b786c8-1888-4142-ab74-25283568b318)

8. After copying a binary file of an app to the boot partition, we use this command to load file from FAT to start of RAM
                        ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/0375701e-7e33-4f4a-95d8-315652413ea4)


   
