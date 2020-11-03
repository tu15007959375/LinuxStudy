#include"ch07.h"
static void __attribute__((destructor))after_main(void)
{
	printf("-------------After Main-------------\n");
}
int main()
{
	printf("---------Main Funciton is Running!----\n");
	return 0;
}

