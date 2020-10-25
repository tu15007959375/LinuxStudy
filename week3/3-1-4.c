#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(void)
{
	FILE *fp;
	fp=fopen("./test.txt","r");
	printf("fp=%d\n",fp->_fileno);

	return 0;
}
