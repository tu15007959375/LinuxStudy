#include"ch03.h"
int main()
{
	int fd;
	if((fd=open("./out.dat",O_WRONLY|O_CREAT,0644))==-1)
		err_exit("myoutput!");
	if(dup2(fd,STDOUT_FILENO)==-1)
		err_exit("Redirect!\n");
	printf("This is test data for redirect!\n");
	return 0;
}
