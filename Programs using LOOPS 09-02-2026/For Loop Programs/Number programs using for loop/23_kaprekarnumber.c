//Check If the number is kaprekar or not
#include <stdio.h>
#include <math.h>
int countDigits(int num) 
{
    int count=0;
    while (num>0) 
    {
        num/=10;
        count++;
    }
    return count;
}
int main() 
{
    int num,square,leftPart,rightPart,numDigits;
    printf("Enter a number: ");
    scanf("%d",&num);
    square=num*num; 
    numDigits=countDigits(num); 
    rightPart=square%(int)pow(10,numDigits);
    leftPart=square/(int)pow(10,numDigits);
    if (leftPart+rightPart==num) 
    {
        printf("%d is a Kaprekar number.\n", num);
    } 
    else 
    {
        printf("%d is not a Kaprekar number.\n", num);
    }
    return 0;
}