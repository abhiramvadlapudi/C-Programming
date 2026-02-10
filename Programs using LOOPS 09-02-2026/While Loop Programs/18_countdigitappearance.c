//Count how many times a digit appears
#include <stdio.h>
int main() 
{
    int num, digit, count = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the digit to count: ");
    scanf("%d", &digit);
    if (digit < 0 || digit > 9) 
    {
        printf("Please enter a valid digit between 0 and 9.\n");
        return 1;
    }
    while (num != 0) 
    {
        remainder = num % 10;  
        if (remainder == digit) 
        {
            count++;  
        }
        num = num / 10;  
    }
    printf("The digit %d appears %d times.\n", digit, count);
    return 0;
}
