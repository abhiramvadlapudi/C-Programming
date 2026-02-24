//Replace all occurrences of a character with another in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string:");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a')
        {
            str[i]='o';
        }
    }
    printf("New str=%s",str);
}