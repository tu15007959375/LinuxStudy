#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char buf[80];
	printf("open and create test_file.\n");
	if((fp=fopen("test_file","w"))==NULL)
	{
		perror("fopen failed!\n");
		exit(1);
	}
	printf("writing string to testfile.\n");
	fputs("test data",fp);
	if((fp=freopen("test_file","r",fp))==NULL)
	{
		perror("freopen failed");
		exit(1);

	}
	printf("read string from test_file:\t");
	fgets(buf,sizeof(buf),fp);
	printf("test_file is %s",buf);
	fclose(fp);
	
	return 0;
}
