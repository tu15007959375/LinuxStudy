#include<stdio.h>


int main()
{
	FILE *fp;
	int n,in;
	int amount[100];
	int last[100];
	int x=0;
	fp=fopen("file.txt","r");
	
	scanf("%d",&in);
	fseek(fp,0,SEEK_SET);
	fread(&n,1,sizeof(int),fp);
	fseek(fp,sizeof(int),SEEK_SET);
	fread(amount,n,sizeof(int),fp);
	for(int i=0;i<in-1;i++)
	{
		x=x+amount[i];
	}
	fseek(fp,sizeof(int)*(n+1+x),SEEK_SET);
	fread(last,amount[in-1],sizeof(int),fp);
	for(int i=0;i<amount[in-1];i++)
	{
		printf("%d",last[i]);
	}

	
	return 0;
}
