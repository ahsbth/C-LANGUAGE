#include <stdio.h>
#include <conio.h>
#define size 100
void input(int a[size], int s)
{
	int i;
    for(i=0;i<s;i++)
    {
    	scanf("%d",&a[i]);
    }
}
void display(int a[size], int s)
{
	int i;
	printf("Elements in the array are:\t");
    for(i=0;i<s;i++)
    {
  		printf("%d\t",a[i]);	
    }
}
void search(int a[size],int s,int c)
{
	int i;
	for(i=0;i<s;i++)
	{              if(a[i]==c)
		{
			printf("the element is found at position:%d",i+1);
			break;
		}
	}
}
void main()
{              int n,a[size],b[size],c;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter elements in Array:\n");
	input(a,n);
	display(a,n);
    printf("\nEnter the element to search:-");
    scanf("%d",&c);
    search(a,n,c);
}
