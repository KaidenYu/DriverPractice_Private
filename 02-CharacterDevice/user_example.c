#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h> 

#define DEVICE_NODE	"/dev/example"

int main(int argc, char* argv[])
{
	int fd, size;
	char* r_buffer = (char*)malloc(100);
	char w_buffer[10] = "123456789";

	printf("Device driver test!\n");

	fd = open(DEVICE_NODE, O_RDWR);
	if(fd<0){
		printf("open %s error\n",DEVICE_NODE);
		return -1;
	}
	printf("fd = %d\n",fd);


	size = read(fd, r_buffer, 100);
	printf("read cnt = %d, r_buffer = %s\n",size,r_buffer);

	size = write(fd, w_buffer, 10);
	printf("write cnt = %d, w_buffer = %s\n",size,w_buffer);


	if(close(fd)<0){
		printf("close %s error\n",DEVICE_NODE);
	}

	return 0;
}