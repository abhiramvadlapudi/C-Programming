//Count total number of words in a string
#include <stdio.h>
int main() 
{
    char str[100];
    int i=0,wordCount=0,inWord=0;  
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);  
    while (str[i]!='\0') 
    {
        if (str[i]==' '||str[i]=='\n') 
        {
            if (inWord==1) 
            {
                wordCount++;  
                inWord=0;   
            }
        }
        else
        {
            if (inWord==0) 
            {
                inWord=1;  
            }
        }
        i++;
    }
    if (inWord==1) 
    {
        wordCount++;
    }
    printf("Total number of words: %d\n",wordCount);
    return 0;
}
