#include"ch07.h"
int main()
{
	extern char **environ;
	printf("%s\n",getenv("PATH"));
	for(int i=0;environ[i]!=NULL;i++)
		printf("env[%d]:%s\n",i,environ[i]);	
	return 0;
}
