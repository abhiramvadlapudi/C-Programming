//Check whether a number is a perfect square using if-else
#include <stdio.h>
#include <math.h>  
int main() 
{
    int num;
    double squareRoot;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num<0) {
        printf("%d is not a perfect square (negative numbers cannot be perfect squares).\n", num);
    }
    else 
    {
        squareRoot=sqrt(num);
        if (squareRoot==(int)squareRoot) 
        {
            printf("%d is a perfect square.\n",num);
        }
        else 
        {
            printf("%d is not a perfect square.\n",num);
        }
    }
    return 0;
}