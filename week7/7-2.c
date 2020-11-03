#include"ch07.h"
static void __attribute__((constructor))before_main(void)
{
	printf("-------------Before Main-------------\n");
}
int main()
{
	printf("---------Main Funciton is Running!----\n");
	return 0;
}
