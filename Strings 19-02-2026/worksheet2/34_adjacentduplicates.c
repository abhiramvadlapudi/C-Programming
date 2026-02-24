//Recursively remove all adjacent duplicate characters from a string until no duplicates remain.
#include<stdio.h>
#include<string.h>
void removeAdjacentDuplicates(char *str) 
{
    int len=strlen(str);
    int i,j=0;
    for(i=0;i<len;i++) 
    {
        if(i<len-1&&str[i]==str[i+1]) 
        {
            while(i<len-1&&str[i]==str[i + 1]) 
            {
                i++;
            }
        } 
        else 
        {
            str[j++]=str[i];  
        }
    }
    str[j]='\0';
    if (strlen(str) != len) 
    {
        removeAdjacentDuplicates(str);
    }
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str);  
    removeAdjacentDuplicates(str);
    printf("String after removing adjacent duplicates: %s\n", str);
    return 0;
}