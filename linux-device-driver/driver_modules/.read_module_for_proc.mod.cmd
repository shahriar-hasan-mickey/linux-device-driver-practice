savedcmd_/home/ubuntu/Home/linux-device-driver/driver_modules/read_module_for_proc.mod := printf '%s\n'   read_module_for_proc.o | awk '!x[$$0]++ { print("/home/ubuntu/Home/linux-device-driver/driver_modules/"$$0) }' > /home/ubuntu/Home/linux-device-driver/driver_modules/read_module_for_proc.mod
