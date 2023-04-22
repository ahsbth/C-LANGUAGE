#include<stdio.h>
int main()
{
	int a,b,c;
    int check=0;
	printf("enter three sides of a triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if((a*a+b*b)==(c*c))
    {
      check=1;
    }
	
	else if((b*b+c*c)==(a*a))
    {
        check=1;
    }
	
	else if((a*a+c*c)==(b*b))
    {
        check=1;
    }
	
	else if(check==1)
    {
      printf("the sides are of a right angled triangle");
    }
	
	else
    {
      printf("the sides are not of a right angled triangle");
    }
	
}
