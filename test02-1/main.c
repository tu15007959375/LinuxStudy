
#include"myfun.c"

int main()
{
	users user=input();
	
	randdat();
	int tag=check(user);
	if(tag==1)
		save(user);
	printf("=====before======");
	output();
	printf("=====after=====\n");
	mysort();
	
	return 0;

}
