//Print lowercase a to given letter
#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);

    if (ch < 'a' || ch > 'z') 
    {
        printf("Please enter a lowercase letter between a and z.");
        return 0;
    }
    for (char c = 'a'; c <= ch; c++) 
    {
        printf("%c ", c);
    }
    return 0;
}
