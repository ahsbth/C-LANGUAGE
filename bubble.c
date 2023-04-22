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
void sort(int a[size],int n)
{
	int t;int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		    if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}	
		}
	}
}
int main()
{
	int n,a[size],b[size],c;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter elements in Array:\n");
	input(a,n);
	display(a,n);
    sort(a,n);
    printf("\nSorted array:\n");
    display(a,n);
}
