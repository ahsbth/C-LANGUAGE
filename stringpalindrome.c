#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    char str1[10];
    //int l;
    printf("Enter a string=");
    gets(str);
    //l=strlen(str);
    str1=strrev(str);
    if(strcmp(str,str1)==0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot palindrom");
    }
}