//Check whether a character is an alphabet using only if.
#include<stdio.h>
int main()
{
    char ch;
    printf("ch=");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {
        printf("ch is alphabet");
    }
    if(!(ch>='A'&&ch<='Z')&&!(ch>='a'&&ch<='z'))
    {
        printf("ch is not alphabet");
    }
}