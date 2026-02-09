//Check if the sum of two numbers is greater than 100 using if-else
#include<stdio.h>
int main()
{
    int m,n;
    printf("m,n=");
    scanf("%d%d",&m,&n);
    if(m+n>100)
    {
        printf("Sum of 2 numbers is greater than 100");
    }
    else
    {
        printf("Sum of 2 numbers is less than 100");
    }
}