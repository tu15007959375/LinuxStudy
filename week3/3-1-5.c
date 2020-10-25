#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(void)
{
	FILE *fp;
	fp=fdopen(1,"w+");
	fprintf(fp,"%s\n","hello!");

	return 0;
}
