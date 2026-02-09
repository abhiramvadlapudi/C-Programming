#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<=1) 
    {
        printf("%d is not a prime number.\n", num);
    }
    else if (num==2) 
    {
        printf("%d is a prime number.\n", num);
    }
    else if (num%2==0) 
    {
        printf("%d is not a prime number.\n", num);
    }
    else if (num%3==0) 
    {
        printf("%d is not a prime number.\n", num);
    }
    else if (num%5==0) 
    {
        printf("%d is not a prime number.\n", num);
    }
    else if (num%7==0) 
    {
        printf("%d is not a prime number.\n", num);
    }
    else 
    {
        printf("%d is a prime number.\n", num);
    }
    return 0;
}

