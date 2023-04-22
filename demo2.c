#include<stdio.h>
void main()
{
  int n,ar[n];
  void input();
  //void sort();
  void diplay();
  printf("Enter the size of array=");
  scanf("%d",&n);
  input(ar,n);
  //sort(ar,n);
  printf("\nAfter sorting Array Elements are\n");
  dispaly(ar,n);
}
void input(int a[n],int size)
{
    int i;
    printf("Enter the %d size array elements=",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",a[i]);
    }
}
void display(int a[n],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}