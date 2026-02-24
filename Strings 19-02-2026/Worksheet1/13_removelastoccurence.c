//Remove last occurrence of a character from string
#include <stdio.h>
int main() 
{
    char str[100],ch;
    int i,lastIndex=-1;
    printf("Enter a string: ");
    scanf("%[^\n]s",str); 
    printf("Enter character to remove: ");
    scanf(" %c",&ch);
    for (i=0;str[i]!='\0';i++) 
    {
        if (str[i]==ch) 
        {
            lastIndex=i;
        }
    }
    if (lastIndex!=-1) 
    {
        for (i=lastIndex;str[i]!='\0';i++) 
        {
            str[i]=str[i+1];
        }
    }
    printf("String after removing last occurrence of '%c': %s\n", ch,str);
    return 0;
}
