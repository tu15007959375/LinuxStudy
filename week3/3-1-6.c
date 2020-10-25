#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
	int fd;
	FILE *fp;
	fd=open("./test.txt",O_RDWR);
	printf("fd=%d",fd);
	fp=fdopen(fd,"w+");
	fprintf(fp,"test data %s\n","hello");
	fclose(fp);
	close(fd);
	return 0;
}
