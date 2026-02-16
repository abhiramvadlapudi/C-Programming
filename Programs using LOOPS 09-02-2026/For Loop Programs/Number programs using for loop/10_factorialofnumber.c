//Factorial of number
#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("num=");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of number=%d",fact);
}