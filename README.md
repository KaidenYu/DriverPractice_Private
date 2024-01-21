# Linux Driver Practices copy for practicing privately
> Kaiden:
>> This repo is a copy of https://github.com/starnight/DriverPractice
>> 
>> It's only for my own practicing
>> 
>> and the new commit will only consider my own coveniency
>> 
>> Please fork the original repo https://github.com/starnight/DriverPractice for contribution

&nbsp;
&nbsp;
&nbsp;
---

# Linux Driver Practices
This is reference from [動手寫 Linux Driver](http://blog.logan.tw/2013/01/linux-driver.html)

## Environment Preparation

You may use Git to clone the repository, toolchain to build the codes.

If you develope for the embedded system, you may need the Device Tree Compiler (DTC).

### Debian12/x86_64/virtualbox
1. Install the Linux kernel headers
   ```
   sudo apt install linux-headers-$(uname -r)
   ```
### Archlinux

1. Install development tools
	```sh
	pacman -S git
	pacman -S make gcc
	```

2. Install the Linux kernel headers.  It depends on the environment.

	* x86 series ``` pacman -S linux-headers ```

	* ARMv7 series ``` linux-armv7-headers ```
	
	* Even by the board ...


3. Install the Device Tree Compiler (DTC)
	```sh
	pacman -S dtc
	```
