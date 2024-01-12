# U-boot

1. Clone u-boot repo and checkout on version v2022.07

<img src="/home/yasmine/snap/typora/86/.config/Typora/typora-user-images/image-20240112031915469.png" alt="image-20240112031915469" style="zoom:80%;" />

2. Export our cross compiler (arm-cortexa9) and architecture (arm) as the makefile needs these variables.

   ![image-20240112034259388](/home/yasmine/snap/typora/86/.config/Typora/typora-user-images/image-20240112034259388.png)

3. Use default configurations of vexpress_ca9x4, then open configurations menu and customize it, then build u-boot.

   ![image-20240112032424547](/home/yasmine/snap/typora/86/.config/Typora/typora-user-images/image-20240112032424547.png)

4. Run qemu with our virtual SD card

   - `qemu-system-arm` : run qemu 

   - `-M` : specify the machine
   - `-m`: set size of RAM 
   - `-nographic` : Disables graphical window
   - `-kernel` : Specifies kernel image
   - `-sd` : Attach to an SD Card

   ![image-20240112032701012](/home/yasmine/snap/typora/86/.config/Typora/typora-user-images/image-20240112032701012.png)

5. After setting a new environment variable and saving it  using `saveenv` the uboot.env appeared in the boot partition in the SD_Card.

   ![image-20240112033348228](/home/yasmine/snap/typora/86/.config/Typora/typora-user-images/image-20240112033348228.png)

   ![image-20240112033505644](/home/yasmine/snap/typora/86/.config/Typora/typora-user-images/image-20240112033505644.png)

   

6. `bdinfo` shows information about our board, here it shows that the RAM starts at 0x60000000

   ![image-20240112033649530](/home/yasmine/snap/typora/86/.config/Typora/typora-user-images/image-20240112033649530.png)

7. After copying a binary file of an app to the boot partition, we use this command to load file from FAT to start of RAM

   ![image-20240112033959367](/home/yasmine/snap/typora/86/.config/Typora/typora-user-images/image-20240112033959367.png)

   