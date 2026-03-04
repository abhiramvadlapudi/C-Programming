//Write a program to reverse all bits in an integer.
#include<stdio.h>
int main() 
{
    unsigned int num,reversedNum=0;
    printf("Enter an integer: ");
    scanf("%u",&num);
    for(int i=0;i<32;i++) 
    {
        reversedNum<<=1;
        reversedNum|=(num & 1);
        num>>=1;
    }
    printf("Original number: %u\n",num);
    printf("Reversed bits: %u\n",reversedNum);
    return 0;
}