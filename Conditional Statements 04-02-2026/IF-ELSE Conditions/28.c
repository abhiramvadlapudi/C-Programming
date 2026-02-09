#include<stdio.h>
int main()
{
    char ch;
    printf("ch=");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("ch is uppercase");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("ch is lowercase");
    }
    else
    {
        printf("Invalid");
    }
}