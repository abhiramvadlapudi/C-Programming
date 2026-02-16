//Count the prime digits of a number
#include <stdio.h>
int main() 
{
    int num,digit,primeDigitCount=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (;num>0;num/=10) 
    {
        digit=num%10;
        if(digit==2||digit==3||digit==5||digit==7) 
        {
            primeDigitCount++;
        }
    }
    printf("Count of prime digits=%d\n",primeDigitCount);
    return 0;
}
