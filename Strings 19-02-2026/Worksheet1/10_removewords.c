//Remove all occurrence of a word in given string
#include <stdio.h>
int main() 
{
    char str[100],word[100],temp[100];
    int i=0,j=0,k=0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);  
    printf("Enter the word to remove: ");
    scanf("%s", word);
    while (str[i] != '\0') 
    {
        j=0;
        while(str[i+j]==word[j]&&word[j]!='\0') 
        {
            j++;
        }
        if (word[j]=='\0') 
        {
            i+=j;
            while(str[i]==' ') 
            {
                i++;
            }
        } 
        else 
        {
            temp[k++]=str[i++];
        }
    }
    temp[k]='\0';
    for (i=0;temp[i]!='\0';i++) 
    {
        str[i]=temp[i];
    }
    str[i]='\0';
    printf("String after removing the word: %s\n", str);
    return 0;
}
