//Find first occurrence of a character in a given string
#include <stdio.h>
int main() 
{
    char str[100], ch;
    int i, firstIndex = -1;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);  
    printf("Enter the character to find: ");
    scanf(" %c", &ch);  
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            firstIndex = i;  
            break;           
        }
    }
    if (firstIndex != -1) 
    {
        printf("First occurrence of '%c' is at index: %d\n", ch, firstIndex);
    } 
    else 
    {
        printf("Character '%c' not found in the string.\n", ch);
    }
    return 0;
}
