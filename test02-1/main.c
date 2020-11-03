
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
	printf("please input sort-tag\n");
	printf("sort-tag:");
	int sort_tag;
	scanf("%d",&sort_tag);
	printf("\n=====after=====\n");
	mysort(sort_tag);
	
	return 0;

}
