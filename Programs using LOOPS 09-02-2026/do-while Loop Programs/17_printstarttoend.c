//Print characters from start letter to end letter
#include <stdio.h>
int main() 
{
    char start, end;
    printf("Enter the start letter: ");
    scanf("%c", &start);  
    getchar();  
    printf("Enter the end letter: ");
    scanf("%c", &end);  
    if (start > end) {
        printf("Start letter must be less than or equal to the end letter.\n");
        return 1; 
    }
    char current = start;  
    do {
        printf("%c ", current);  
        current++;  
    } while (current <= end); 
    printf("\n");
    return 0;
}
