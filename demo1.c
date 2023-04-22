#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of three integers=");
    scanf("%d%d%d",&a,&b,&c);
    if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
    {
        printf("the sides are of a right angled triangle");
    }
    else
    {
         printf("the sides are not of a right angled triangle");
    }
}