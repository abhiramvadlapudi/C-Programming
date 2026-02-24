//Count occurrences of a word in a given string
#include <stdio.h>
int main() 
{
    char str[100], word[100];
    int i = 0, j = 0, count = 0, start;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);  
    printf("Enter the word to count occurrences: ");
    scanf("%s", word);  
    while (str[i] != '\0') 
    {
        if (str[i] == word[0]) 
        {
            start = i;
            j = 0;
            while (word[j] != '\0' && str[i + j] == word[j]) 
            {
                j++;
            }
            if (word[j] == '\0') 
            {
                count++;  
                i = start + j - 1;  
            }
        }
        i++;
    }
    printf("The word '%s' occurs %d times in the string.\n", word, count);
    return 0;
}