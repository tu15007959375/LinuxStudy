#include<limits.h>
#include<stdio.h>
#include<float.h>
#include<unistd.h>
int main(void)
{
	printf("ARG_MAX:%ld\n",sysconf(_SC_ARG_MAX));
	printf("CHILD_MAX:%ld\n",sysconf(_SC_CHILD_MAX));
	printf("MQ_OPEN__MAX:%ld\n",sysconf(_SC_MQ_OPEN_MAX));
	printf("MQ_PRIO_MAX:%ld\n",sysconf(_SC_MQ_PRIO_MAX));

	printf("INT_MAX:%d\n",INT_MAX);
	printf("INT_MIN:%d\n",INT_MIN);
	printf("UINT_MAX:%d\n",UINT_MAX);

	printf("LONG_MAX:%ld\n",LONG_MAX);
        printf("LONG_MIN:%ld\n",LONG_MIN);
        printf("ULONG_MAX:%ld\n",ULONG_MAX);

	printf("SHRT_MAX:%d\n",SHRT_MAX);
        printf("SHRT_MIN:%d\n",SHRT_MIN);
        printf("USHRT_MAX:%d\n",USHRT_MAX);

	printf("FLOAT_MAX:%f\n",FLT_MAX);
	printf("FLOAT_MIN:%f\n",FLT_MIN);
	printf("DOUBLE_MAX:%lf\n",DBL_MAX);
	printf("DOUBLE_MIN:%lf\n",DBL_MIN);
	return 0;
}

