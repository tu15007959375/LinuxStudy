#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
	FILE *fp=fopen("./ftest.txt","w");
	fputs("hello world",fp);
	char buf[80];
	int ret;
	memset(buf,0,sizeof(buf));
	fgets(buf,sizeof(buf),stdin);
	printf("\nthe string is %s \n",buf);
	ret=fwrite(buf,2,sizeof(buf)/2,fp);
	printf("ret=%d",ret);
	fclose(fp);
	return 0;
}
