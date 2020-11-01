/*
由于gets()不要求提供字符串s的空间大小，这导致gets()成了危险的函数:它没有为字符串s的溢出提供保护!当要读入的行长度超过字符串s所能容纳的大小时，超出的部分将越过s提供的空间而覆盖其他的数据或程序。因此最好不要使用gets()。
*/
#include"ch.h"
#define BUF_SIZE 8
typedef struct iobuf{
	char buf[BUF_SIZE];
	char others[BUF_SIZE];
}buffer;
int main()
{
	buffer buffer1;
	memset(&buffer1,'\0',sizeof(struct iobuf));
	gets(buffer1.buf);
	printf("%s\n",buffer1.buf);
	printf("%s",buffer1.others);
	return 0;
}
