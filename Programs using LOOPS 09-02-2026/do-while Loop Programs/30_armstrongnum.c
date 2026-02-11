//Check Armstrong number
#include <stdio.h>
#include <math.h>
int main() 
{
    int num, originalNum, remainder, count = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;  
    do {
        num = num / 10;
        count++;  
    } while (num != 0);
    num = originalNum;
    do {
        remainder = num % 10;  
        sum += pow(remainder, count); 
        num = num / 10;  
    } while (num != 0);  
    if (sum == originalNum) 
    {
        printf("%d is an Armstrong number.\n", originalNum);
    } 
    else 
    {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
    return 0;
}
