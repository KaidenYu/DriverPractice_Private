obj-m := example.o

ifeq ($(KERNELDIR),)
KERNELDIR=/lib/modules/$(shell uname -r)/build
endif

all:
	make -C $(KERNELDIR) M=$(PWD) modules


insmod:
	sudo insmod example.ko

mknode:
	sudo mknod /dev/example c 60 0
	sudo chmod 666 /dev/example

test:
	gcc user_example.c -o user_example.elf
	
run:
	@./user_example.elf

rmmod:
	sudo rmmod example

rmnode:
	sudo rm /dev/example

clean:
	make -C $(KERNELDIR) M=$(PWD) clean
	rm -f user_example.elf