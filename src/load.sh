#! /bin/sh
#To Load firmware
# C128
#hcs12mem --interface sm --port /dev/ttyS2 --baud 115200 --target mc9s12c128 --flash-address banked-ppage --flash-erase --flash-write *.s19 --reset
#
# G128
#hcs12mem --interface sm --port /dev/ttyUSB0 --baud 115200 --target mc9s12g128 --flash-address banked-ppage --flash-erase --flash-write *.s19 --reset
#
# XS128
#hcs12mem --interface sm --port /dev/ttyUSB0 --baud 115200 --target mc9s12xs128 --flash-address banked-ppage --flash-erase --flash-write xs128-firmware.s19 --reset
#
#####
#To Rip firmware from MCU
# C128
#hcs12mem --interface sm --port /dev/ttyS2 --baud 115200 --target mc9s12c128 -s 32 --flash-address banked-ppage --flash-read ripped-C128-firmware.s19
#
# G128
#hcs12mem --interface sm --port /dev/ttyUSB0 --baud 115200 --target mc9s12g128 --flash-address banked-ppage --flash-read ripped-G128-firmware.s19
#hcs12mem --interface sm --port /dev/ttyS2 --baud 115200 --target mc9s12g128 --flash-address banked-ppage --flash-read ripped-G128-firmware.s19
#
# XS128
#hcs12mem --interface sm --port /dev/ttyUSB0 --baud 115200 --target mc9s12xs128 --flash-address banked-ppage --flash-read ripped-XS128-firmware.s19
#hcs12mem --interface sm --port /dev/ttyS1 --baud 115200 --target mc9s12xs128 --flash-address banked-ppage --flash-read ripped-XS128-firmware.s19
#
#####
#To Erase firmware from MCU
# C128
#hcs12mem --interface sm --port /dev/ttyS2 --baud 115200 --target mc9s12c128 --flash-address banked-ppage --flash-erase-unsecure --reset
#
# G128
#hcs12mem --interface sm --port /dev/ttyUSB0 --baud 115200 --target mc9s12g128 --flash-address banked-ppage --flash-erase-unsecure --reset
#
# XS128
#hcs12mem --interface sm --port /dev/ttyS1 --baud 115200 --target mc9s12xs128 --flash-address banked-ppage --flash-erase-unsecure --reset
