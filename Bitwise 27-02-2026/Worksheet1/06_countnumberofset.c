//Write a C program to count the number of set bits in an unsigned integer.
#include<stdio.h>
#include<stdint.h>
int main() 
{
    uint32_t number;
    int count=0;
    printf("Enter an unsigned integer:");
    scanf("%u",&number);
    uint32_t temp=number; 
    while (temp) 
    {
        count+=temp&1; 
        temp>>=1;        
    }
    printf("No of set bits in %u(0x%X)=%d\n",number,number,count);
    return 0;
}