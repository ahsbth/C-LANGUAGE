#include<stdio.h>
void main()
{
    int i,j,n,k=1;
    printf("Enter the no of row for Floyds tringle=");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    j=1;
    while(j<=i)
    {
        printf("%d\t",k++);
        j++;
    }
    printf("\n");
   }
    
}