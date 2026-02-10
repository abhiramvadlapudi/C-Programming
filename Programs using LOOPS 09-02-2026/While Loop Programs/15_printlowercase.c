//Print lowercase a to given letter
#include <stdio.h>
int main() 
{
    char letter;
    printf("Enter a letter: ");
    scanf("%c",&letter);
    char current ='a';
    while(current<=letter) 
    {
        printf("%c",current);
        current++;
    }
    printf("\n");
    return 0;
}
