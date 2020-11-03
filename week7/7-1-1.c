#include"ch07.h"

int main(int argc,char *argv[])
{	
	int temp=0;
	if(argc!=3)
		{printf("error");return 0;}
	for(int i=1;i<argc;i++)
		temp+=atoi(argv[i]) ;
	printf("%d",temp);
	
	return 0;
}
