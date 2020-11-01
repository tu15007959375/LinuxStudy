#include"my.h"

void input()
{	
	users user;
	FILE *fp;
	
	fp=fopen("user.dat","a+");
	fseek(fp,0,SEEK_SET);
	printf("id:\n");
	scanf("%d",&user.id);
	printf("name:\n");
	scanf("%s",user.name);
	printf("htel:\n");
	scanf("%s",user.htel);
	printf("tel:\n");
	scanf("%s",user.tel);
	fwrite(&user,1,sizeof(users),fp);
	
	fclose(fp);
}
void output()
{
	FILE *fp;
	users user;
	fp=fopen("user.dat","r");
	fread(&user,1,sizeof(users),fp);
	printf("id\tname\thtel\ttel\n");
	while(!feof(fp))
	{
	
		
		printf("%d\t%s\t%s\t%s\n",user.id,user.name,user.htel,user.tel);
		fread(&user,1,sizeof(users),fp);
}


	
	
	
	
}
