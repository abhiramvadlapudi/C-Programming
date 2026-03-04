//Write a C program to check whether a number is even or odd using bitwise AND operator.
#include <stdio.h>
int main() 
{
    int num;
    printf("num=");
    scanf("%d",&num);
    if(num&1)
    {
        printf("num is odd");
    }
    else
    {
        printf("num is even");
    }
}