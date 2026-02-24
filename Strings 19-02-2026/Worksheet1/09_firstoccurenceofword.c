//Find first occurrence of a word in a given string
#include <stdio.h>
int main() 
{
    char str[100],word[50];
    int i,j,found;
    printf("Enter the string: ");
    scanf("%[^\n]s",str);  
    printf("Enter the word to search for: ");
    scanf("%s",word);  
    found=-1; 
    for(i=0;str[i]!='\0';i++) 
    {
        j=0;
        while(word[j]!='\0'&&str[i+j]==word[j]) 
        {
            j++;
        }
        if (word[j]=='\0') 
        {
            found=i;
            break;  
        }
    }
    if (found!=-1) 
    {
        printf("The first occurrence of the word is at index: %d\n",found);
    } 
    else
    {
        printf("The word was not found in the string.\n");
    }
    return 0;
}
