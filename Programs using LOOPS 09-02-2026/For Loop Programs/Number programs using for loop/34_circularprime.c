//Circular Prime (single rotation)
#include <stdio.h>
int isPrime(int num) 
{
    if (num<=1) return 0; 
    for(int i=2;i*i<=num;i++) 
    {
        if (num%i==0) return 0; 
    }
    return 1; 
}
int rotateNumber(int num) 
{
    int numDigits=0,rotatedNum,lastDigit;
    int temp=num;
    while(temp > 0) 
    {
        numDigits++;
        temp/=10;
    }
    lastDigit=num%10; 
    rotatedNum=lastDigit*pow(10,numDigits-1)+num/10; 
    return rotatedNum;
}
int main() 
{
    int num,rotatedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (!isPrime(num)) 
    {
        printf("%d is not a prime number, so it cannot be a circular prime.\n", num);
        return 0;
    }
    rotatedNum=rotateNumber(num);
    if (isPrime(rotatedNum))
    {
        printf("%d is a Circular Prime.\n", num);
    } 
    else 
    {
        printf("%d is not a Circular Prime.\n", num);
    }
    return 0;
}
