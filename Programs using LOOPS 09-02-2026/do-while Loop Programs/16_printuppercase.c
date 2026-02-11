//Print uppercase A–Z
#include <stdio.h>
int main() 
{
    char current='A';
    do {
        printf("%c ",current); 
        current++;             
    } while (current<='Z');
    printf("\n");
    return 0;
}
