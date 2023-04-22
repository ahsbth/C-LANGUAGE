#include<Stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    float sum=0;
    
    printf("Enter the range=");
    scanf("%d",&n);
    printf("%d",1);
    i=2;
    while(i<=n)
    {
        printf("+1/%d\t",i);
        sum=sum+1/(float)i;
        i++;
    }
    printf("\nAddition of Harmonic series=%f",sum);
    //getch();
}