//Print lowercase a to given letter
#include <stdio.h>
int main() 
{
    char letter;
    printf("Enter a lowercase letter: ");
    scanf("%c",&letter);
    if (letter<'a'||letter>'z') 
    {
        printf("Please enter a valid lowercase letter.\n");
        return 1;
    }
    char current='a';
    do {
        printf("%c ",current); 
        current++;             
    } while (current<=letter);
    printf("\n");
    return 0;
}
