// Print digits of a number
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) 
    {
        num = -num;  
        printf("-"); 
    }
    do {
        int digit = num % 10;    
        printf("%d ", digit);     
        num = num / 10;           
    } while (num != 0);          
    printf("\n");
    return 0;
}
