//Check whether a character is alphabet, digit, or special symbol
#include <stdio.h>
#include <ctype.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    (isalpha(ch)) ? printf("alphabet") : (isdigit(ch)) ? printf("digit") : printf("special symbol");
    return 0;
}
