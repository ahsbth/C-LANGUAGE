#include<stdio.h>
void main()
{
    int n=3;
    display(3);
}
void display(int n)
{
    if(n<1)
    {
        return;
    }
    else
    {
        printf("%d\t",n);
        display(n-1);
        printf("%d\t",n);
    }
}