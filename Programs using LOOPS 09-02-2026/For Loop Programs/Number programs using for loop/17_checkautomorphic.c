//Check Automorphic Number
#include<stdio.h>
#include<math.h>
int main() 
{
    int num,square,tempNum,digitCount=0;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    square=num*num;  
    tempNum=num;
    while (tempNum!=0) 
    {
        digitCount++;
        tempNum/=10;
    }
    int lastDigits=square%(int)pow(10,digitCount);
    if (lastDigits==num) 
    {
        printf("%d is an Automorphic Number.\n",num);
    }
    else
    {
        printf("%d is not an Automorphic Number.\n",num);
    }
    return 0;
}
