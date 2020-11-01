#include<stdio.h>

		
	


int main()
{
	FILE* fp;
	fp=fopen("file.txt","rw+");
	int x=4;
	int y[]={1,2,1,2};
	int z[]={10,11,12,13,14,15};
	fseek(fp,0,SEEK_SET);
	fwrite(&x,1,sizeof(int),fp);
	fwrite(y,x,sizeof(int),fp);
	fwrite(z,6,sizeof(int),fp);
	return 0;
}
