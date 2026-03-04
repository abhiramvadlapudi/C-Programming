//Write a C program to determine whether a number is odd or even using bitwise operators.
#include<stdio.h>
int main()
{
    int num;
    printf("Num=");
    scanf("%d",&num);
    if(num&1)
    {
        printf("odd number");
    }
    else
    {
        printf("even number");
    }
}