//Find all occurrences of a word in given string
#include <stdio.h>
int main() 
{
    char str[100], word[100];
    int i = 0, j = 0, wordCount = 0;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);  
    printf("Enter the word to find occurrences: ");
    scanf("%s", word);  
    while (str[i] != '\0') 
    {
        if (str[i] == word[0]) 
        {
            j = 0;
            while (word[j] != '\0' && str[i + j] == word[j]) 
            {
                j++;
            }
            if (word[j] == '\0') 
            {
                printf("Found occurrence at index: %d\n", i);
                wordCount++;
            }
        }
        i++;
    }
    if (wordCount == 0) 
    {
        printf("The word '%s' was not found in the string.\n",word);
    }
    return 0;
}