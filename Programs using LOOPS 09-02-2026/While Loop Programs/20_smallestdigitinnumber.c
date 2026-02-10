//Find smallest digit in number.
#include <stdio.h>
int main() 
{
    int num, smallestDigit = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) 
    {
        smallestDigit = 0;
    } 
    else 
    {
        while (num != 0) {
            remainder = num % 10;  
            if(remainder < smallestDigit) 
            {
                smallestDigit = remainder;
            }
            num = num / 10;  
        }
    }
    printf("smallest digit is: %d\n", smallestDigit);
    return 0;
}