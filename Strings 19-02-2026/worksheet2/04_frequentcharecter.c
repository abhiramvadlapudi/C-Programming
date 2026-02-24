//Find the character that appears most frequently in the input string and print it.
#include <stdio.h>
int main() 
{
    char str[100];
    int i, j;
    int count, maxCount = 0;
    char maxChar;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++) 
    {
        count=0;
        for(j=0;str[j]!='\0';j++) 
        {
            if(str[i]==str[j]&&str[i]!='\n') 
            {
                count++;
            }
        }
        if(count>maxCount) 
        {
            maxCount=count;
            maxChar=str[i];
        }
    }
    printf("Most frequent character:%c\n",maxChar);
    printf("Frequency:%d\n",maxCount);
    return 0;
}