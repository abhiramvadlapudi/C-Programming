//Write a C program to check whether a number is a power of 2 using bitwise operations.
#include<stdio.h>
int main()
{
    int num;
    printf("Num=");
    scanf("%d",&num);
    if(num!=0&&(num&(num-1))==0)
    {
        printf("%d is power of 2");
    }
    else
    {
        printf("%d is not power of 2");
    }
}