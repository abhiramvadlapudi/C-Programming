//Print uppercase A–Z
#include <stdio.h>
int main() 
{
    char current ='A';
    while(current<='Z') 
    {
        printf("%c",current);
        current++;
    }
    printf("\n");
    return 0;
}