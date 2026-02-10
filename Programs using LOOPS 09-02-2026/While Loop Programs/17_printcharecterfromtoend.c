//Print characters from start letter to end letter
#include <stdio.h>
int main() 
{
    char letter,current;
    printf("Enter a letter:");
    scanf("%c",&letter);
    getchar();
    printf("Enter current letter:");
    scanf("%c",&current);
    while (current<=letter) 
    {
        printf("%c",current);
        current++;
    }
    printf("\n");
    return 0;
}
