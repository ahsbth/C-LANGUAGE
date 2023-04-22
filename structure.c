#include<stdio.h>
#include<stdlib.h>
#define size 30
typedef struct person p;
struct person
{
	int enrollno;
	char name[size];
	char address[size];
	int phoneno;
	char email[size];
};

void input(p *s1)
{
	printf("enter ADMISSION NO.:");
	scanf("%d",&s1->enrollno);
	printf("enter name.:");
	scanf("%s",&s1->name);
	printf("enter address:");
	scanf("%s",&s1->address);
	printf("enter phone no:");
	scanf("%d",&s1->phoneno);
	printf("enter email:");
	scanf("%s",&s1->email);
}
int main()
{
	FILE *fp;
	fp=fopen("f1.txt","w");
	if(fp==NULL)
	{
		exit(1);
	}
    p2 p1;
    input(&p1);
    fwrite(&p2,sizeof(p),1,fp);
}
