//Remove all extra blank spaces from a given string
#include <stdio.h>
int main() 
{
    char str[100];
    int i,j=0;
    printf("Enter a string:");
    scanf("%[^\n]s",str);  
    for(i=0;str[i]!='\0';i++) 
    {
        if(str[i]!=' '||(i>0&&str[i-1]!=' '))
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    printf("String after removing extra spaces: '%s'\n",str);
    return 0;
}
