1. clone the kernel rep, then run make to configure vexpress
   
`git clone --depth=1 git://git.kernel.org/pub/scm/linux/kernel/git/stable/linux.git`

`cd linux`

`export ARCH=arm`

`export CROSS_COMPILE=/path_to_compiler/arm-linux-cortexa9Compiler`

`make vexpress_defconfig`

2. Customize the kernel image by running

`make menuconfig`

3. Build the kernel
   
`make -j4 zImage modules dtbs`

5. Compile the modules and store them in rootfs
   
`make -j4 INSTALL_MOD_PATH=$HOME/rootfs modules_install`

7. Copy the zimage and dtb file to tftp server
   
`cp linux/arch/arm/boot/zImage /srv/tftp/`

`cp linux/arch/arm/boot/dts/*-ca9.dtb /srv/tftp/`

8.Run qemu

`sudo qemu-system-arm -M vexpress-a9 -m 128M -nographic -kernel u-boot -sd sd.img -net tap,script=./qemu-ifup -net nic`

9. Set bootargs

`setenv bootargs console=ttyAMA0`

10. Edit the Load_from_TFTP environment from last time
    
![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/61f16c9c-28c3-4585-96ac-1b4258313d73)

11.Run bootd 

![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/fae67a1d-9ad4-419a-9ac5-f0546dbce264)

