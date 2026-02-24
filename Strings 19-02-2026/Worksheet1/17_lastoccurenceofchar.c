//Find last occurrence of a character in a string
#include <stdio.h>
int main() 
{
    char str[100], ch;
    int i, lastIndex = -1;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Enter the character to find: ");
    scanf(" %c", &ch); 
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            lastIndex = i;  
        }
    }
    if (lastIndex != -1) 
    {
        printf("Last occurrence of '%c' is at index: %d\n", ch, lastIndex);
    } 
    else 
    {
        printf("Character '%c' not found in the string.\n", ch);
    }
    return 0;
}
