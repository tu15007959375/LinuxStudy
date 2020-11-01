#include"my.h"

users input()
{	
	users user;
	
	printf("id:\n");
	scanf("%d",&user.id);
	printf("name:\n");
	scanf("%s",user.name);
	printf("htel:\n");
	scanf("%s",user.htel);
	printf("tel:\n");
	scanf("%s",user.tel);

	
	

	return user;
	
}
void output()
{
	FILE *fp;
	users user;
	fp=fopen("user.dat","r");
	fscanf(fp,"%d%s%s%s",&user.id,user.name,user.htel,user.tel);
	printf("\nid\tname\thtel\t\ttel\n");
	while(!feof(fp))
	{
	
		
		printf("%d\t%s\t%s\t%s\n",user.id,user.name,user.htel,user.tel);
		fscanf(fp,"%d%s%s%s",&user.id,user.name,user.htel,user.tel);
		//fread(&user,1,sizeof(users),fp);
	}
	fclose(fp);
}
int check(users user)
{
		
	FILE *fp;
	users *user_all;
	
	int i=0;
	user_all = (users *)malloc(sizeof(users)*100);//動態分配
	fp=fopen("user.dat","r");
	fscanf(fp,"%d%s%s%s",&user_all[i].id,user_all[i].name,user_all[i].htel,user_all[i].tel);
	//printf("%d\t%s\t%s\t%s\n",user_all[0].id,user_all[0].name,user_all[0].htel,user_all[0].tel);
	while(!feof(fp))
	{
	
	fscanf(fp,"%d%s%s%s",&user_all[++i].id,user_all[i].name,user_all[i].htel,user_all[i].tel);
	}//讀取數據存放在user_all數組中
	
	for(int j=0;j<i;j++)
	{
		if(user_all[j].id==user.id)
		{
			printf("input id repeat!\n");
			fclose(fp);
			return 0;
		}
	}	

	if(user.id<0||user.id>4294967295)
	{
		printf("input id error!\n");
		fclose(fp);
		return 0;
	}
	if(user.name[0]<'A'||user.name[0]>'Z')
	{
		printf("input name error!\n");
		fclose(fp);
		return 0;
	}
	for(int i=0;i<strlen(user.htel);i++)
	{
		if(user.htel[i]<'0'||user.htel[i]>'9')
		{
			printf("input htel error!\n");
			fclose(fp);
			return 0;
		}	
	}
	if(strlen(user.tel)!=11)
	{
		printf("input tel error!\n");
		return 0;
	}
	for(int i=0;i<strlen(user.tel);i++)
	{
		if(user.tel[i]<'0'||user.tel[i]>'9')
		{
			printf("input tel error!\n");
			fclose(fp);
			return 0;
		}	
	}
	fclose(fp);
	return 1;
}
void randdat()
{	
	users *u;
	u = (users *)malloc(sizeof(users));//動態分配
	static int isSrand = 0;
	if(!isSrand){
		srand(time(0));
		isSrand = 1;
	}
	memset(u,0,sizeof(users));
	//生成随机的id
	u->id = rand()%100; 
	//生成首字母大写的Name
	int len = rand() % 8;
	if(len < 3){ len = 3;}//保证最少三个字母
	int i;
	for(i = 0; i < len; i++)
	{
	 u->name[i] = 'a' + (rand() % 26);
	}
	u->name[0] += ('A' - 'a');//变为大写
	//生成htel和tel,长度一样就一起生成
	for(i = 0; i < 11; i++)
	{
		u->htel[i] = rand() % 10 + '0';
		u->tel[i] = rand() % 10 + '0';
	}
	//区号第五位转为 - 
	u->htel[4] = '-';
	//手机号第一位转为1
	u->tel[0] = '1';
	save(*u);
}
void save(users user)
{
	FILE *fp;
	
	fp=fopen("user.dat","a+");
	fseek(fp,0,SEEK_SET);
	fprintf(fp,"%d\t%s\t%s\t%s\n",user.id,user.name,user.htel,user.tel);
	fclose(fp);
}
int cmp(const void *a ,const void *b)
{
	return strcmp((*(users*)a).name,(*(users*)b).name);
}

void mysort()
{
	FILE *fp;
	users *user_all;
	
	int i=0;
	user_all = (users *)malloc(sizeof(users)*100);//動態分配
	fp=fopen("user.dat","r");
	fscanf(fp,"%d%s%s%s",&user_all[i].id,user_all[i].name,user_all[i].htel,user_all[i].tel);
	
	while(!feof(fp))
	{
	
	i++;

	fscanf(fp,"%d%s%s%s",&user_all[i].id,user_all[i].name,user_all[i].htel,user_all[i].tel);
	
	}//讀取數據存放在user_all數組中
	

	qsort(user_all,i,sizeof(users),cmp);
	printf("\nid\tname\thtel\t\ttel\n");
	for(int j=0;j<i;j++)
	{printf("%d\t%s\t%s\t%s\n",user_all[j].id,user_all[j].name,user_all[j].htel,user_all[j].tel);}

	
	fclose(fp);
}

	


	
