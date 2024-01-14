# Embedded Linux 6

## Loading image using TFTP

1. Install tftp on machine

   `sudo apt-get install tftpd-hpa`

2. Change configuration of tftp in /etc/default/tftpd-ha

   `tftp_option = "--secure --create"`

3. Restart the protocol

   `systemctl restart tftpd-hpa`

4. Change file owner of /srv/tftp 

   `chown tftp:tftp tftp`

5. Copy files that are going to be loaded ,to /srv/tftp

   `cp hardware.dtb /srv/tftp `

   `cp Zimage /srv/tftp`

6. Check your host machine ip address

   `ip addr`

7. Create a script to set a tftp connection between qemu and the host machine

   ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/60c4f5b1-2859-40c5-baad-df6e95a61cf2)

8. Run qemu

   `sudo qemu-system-arm -M vexpress-a9 -m 128M -nographic -kernel Bootloader/u-boot/u-boot -sd SD_Card/sd.img -net tap,script=./Bootloader/qemu-ifup -net nic`

9. Set some variables

   `setenv ipaddr 192.168.1.10`

   `setenv serverip 192.168.1.9` 

   `setenv Load_from_FAT 'fatload mmc 0:1 ${kernel_address} Zimage;fatload mmc 0:1 ${fdt_address} hardware.dtb' `

   `setenv Load_from_TFTP 'tftp ${kernel_address} Zimage; tftp ${fdt_address} hardware.dtb' ` 

10. To make it automated, set the bootcmd to first check if the files are in the FAT partition, if not then check if it can be loaded over tftp.

    `setenv bootcmd 'echo "helpppp"; if run Load_from_FAT; then echo "Loaded from FAT";elif run Load_from_TFTP; then echo "Loaded from TFTP";fi;'`

    ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/c8447104-7027-4556-bc99-40c8b3db8851)
    
 11. Check the files' memory locations
     
     ![image](https://github.com/yasmine-mostafa/Embedded_Linux/assets/63374980/6978f2df-268f-4560-ac31-d4f3cc42b852)



    
