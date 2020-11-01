#include<stdio.h>

int y_or_n_ques(char *s)
{
	printf("%s\n",s);
	int answer;
	scanf("%d",&answer);
	return answer;
}
