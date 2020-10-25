#include"ch03.h"

#include <stdlib.h>
int n;
int buffer[1024];
void readFromfile(FILE* fp,int k)
{
	char buff[1024];
	fseek(fp,sizeof(int)*(1+n),SEEK_SET);
	fread(buff,buffer[k-1],1,fp);
	printf("%s\n",buff);
}
int main(void)
{
	int buf[1];
	int k;/*需要读取的记录*/
	scanf("%d",&k);
	FILE *file = fopen("3.txt","r");
	fread(buf,sizeof(int),1,file);
	n = buf[0];/*文件记录个数*/
	fseek(file,sizeof(int),SEEK_SET);
	fread(buffer,sizeof(int),n,file);
	readFromfile(file,k);
	fclose(file);
	return 0;
}
