#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(void)
{
	int fd=open("./test.txt",O_RDONLY);
	printf("fd=%d\n",fd);
	close(fd);
	return 0;
}
