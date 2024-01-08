# Bootloader_Task1

## Creating a virtual SD Card

1. ##### Create a 1 GB file filled with zeroes

   `dd if=/dev/zero of=sd.img bs=1M count=1000`

2. ##### Configure the Partition Table

   `cfdisk sd.img`

   ###### Two partitions:

   - `200 MB` | `FAT 16` | `Bootable`

   - `800 MB` | `Linux` | `Not Bootable`

   Press **write** to apply changes

3. ##### Loop Device Driver

   To make the os treat the file as if it were a block storage device we need to use loop device driver

   `sudo losetup -f --show --partscan sd.omg`

4. ##### Format Partition Table

   Create the Filesystem on the Partitions created, making it ready for use.

   `sudo mkfs.vfat -F 16 -n boot loop<x>p1`

   `sudo mkfs.ext4 -L rootfs loop<x>p2`

   ## Why use /dev/loop?

   The  `/dev/loop` device in Linux allows you to mount a regular file as a  block device, simulating a physical disk or partition. By attaching a virtual SD card to `/dev/loop`, you can interact with it as if it were a real storage device.

   