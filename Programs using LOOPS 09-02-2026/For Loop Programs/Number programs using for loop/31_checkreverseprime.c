//Check if reverse of number is prime or not
#include <stdio.h>
int isPrime(int n) 
{
    if (n<=1) 
    {
        return 0; 
    }
    for (int i=2;i*i<=n;i++) 
    {
        if (n%i==0) 
        {
            return 0;
        }
    }
    return 1; 
}
int main() 
{
    int num,reversedNum=0,digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp=num;
    while (temp!=0) 
    {
        digit=temp%10;  
        reversedNum=reversedNum*10+digit;  
        temp/=10;  
    }
    printf("Reverse of %d is %d.\n",num,reversedNum);
    if (isPrime(reversedNum)) 
    {
        printf("The reverse of number %d is prime.\n", num);
    } 
    else 
    {
        printf("The reverse of number %d is not prime.\n", num);
    }
    return 0;
}
