#To Load firmware
#hcs12mem --interface sm --port /dev/ttyUSB0 --baud 115200 --target mc9s12g128 --flash-address banked-ppage --flash-erase --flash-write *.s19 --reset
#hcs12mem --interface sm --port /dev/ttyUSB0 --baud 115200 --target mc9s12xs128 --flash-address banked-ppage --flash-erase --flash-write xs128-firmware.s19 --reset

#To Rip firmware from MCU
#hcs12mem --interface sm --port /dev/ttyUSB0 --baud 115200 --target mc9s12g128 --flash-address banked-ppage --flash-read ripped-firmware.s19

#XS128
#hcs12mem --interface sm --port /dev/ttyUSB0 --baud 115200 --target mc9s12xs128 --flash-address banked-ppage --flash-read ripped-firmware.s19
hcs12mem --interface sm --port COM2 --baud 115200 --target mc9s12xs128 --flash-address banked-ppage --flash-read ripped-firmware.s19


#To Erase firmware from MCU
#hcs12mem --interface sm --port /dev/ttyUSB0 --baud 115200 --target mc9s12g128 --flash-address banked-ppage --flash-erase-unsecure --reset
