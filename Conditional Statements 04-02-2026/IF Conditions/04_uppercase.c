//Check whether an input character is uppercase (A–Z).
#include<stdio.h>
int main() 
{
    char ch;
    printf("ch=");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Charecter is uppercase");
    }
    else
    {
        printf("Charecter is not uppercase");
    }
}