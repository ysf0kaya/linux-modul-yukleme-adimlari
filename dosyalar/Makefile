# Makefile
obj-m += modulismi.o
yusufkaya-objs := modulismi_init.o modulismi_exit.o

PWD := $(CURDIR)

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

