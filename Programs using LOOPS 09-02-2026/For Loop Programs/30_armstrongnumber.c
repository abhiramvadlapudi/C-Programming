//Check Armstrong number
#include <stdio.h>
#include <math.h>
int main() 
{
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    for (int temp = num; temp != 0; temp /= 10) 
    {
        n++;
    }
    for (int temp = num; temp != 0; temp /= 10) 
    {
        remainder = temp % 10;
        result += pow(remainder, n);
    }
    if ((int)result == originalNum)
        printf("%d is an Armstrong number.", originalNum);
    else
        printf("%d is not an Armstrong number.", originalNum);
    return 0;
}

