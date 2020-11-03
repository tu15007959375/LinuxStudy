#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
typedef struct user
{
	int id;
	char name[8];
	char htel[12];
	char tel[12];
}users;
void output();
users input();
void randdat();
void save(users user);
void mysort(int tag);
int check(users user);
