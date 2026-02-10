//Find largest digit in number
#include <stdio.h>
int main() 
{
    int num, largestDigit = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) 
    {
        largestDigit = 0;
    } 
    else 
    {
        while (num != 0) {
            remainder = num % 10;  
            if(remainder>largestDigit) 
            {
                largestDigit=remainder;
            }
            num = num / 10;  
        }
    }
    printf("Largest digit is: %d\n", largestDigit);
    return 0;
}
