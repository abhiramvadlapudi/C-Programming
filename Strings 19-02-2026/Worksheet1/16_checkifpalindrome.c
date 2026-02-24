//Check whether a string is palindrome or not
#include <stdio.h>
#include<string.h>
int main() 
{
    char str[100],reversed[100];
    int i = 0,length;  
    printf("Enter a string: ");
    scanf("%s",str); 
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        reversed[i]=str[length-i-1];
    }
    reversed[i]='\0';
    if(strcmp(str,reversed)==0)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("its not palindrome");
    }
}
