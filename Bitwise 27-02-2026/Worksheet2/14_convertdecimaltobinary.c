//Write a C program to convert a decimal number to binary representation using bitwise operators.
#include <stdio.h>
int main() 
{
    unsigned int num;
    int i;
    printf("Enter a decimal number: ");
    scanf("%u",&num);
    if (num==0) 
    {
        printf("Binary representation: 0\n");
        return 0;
    }
    printf("Binary representation: ");
    for (i=31;i>=0;i--) 
    {
        if (num&(1<<i)) 
        {
            printf("1");
        } 
        else 
        {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}