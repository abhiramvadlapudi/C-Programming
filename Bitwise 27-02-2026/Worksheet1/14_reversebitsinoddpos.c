//Write a program to reverse: Bits at odd positions
#include<stdio.h>
int main() 
{
    unsigned int num,result;
    printf("Enter an integer: ");
    scanf("%u",&num);
    unsigned int mask=0xAAAAAAAA;
    result=num^mask;
    printf("Original number:%u\n",num);
    printf("After reversing bits at odd positions:%u\n",result);
    return 0;
}

//Bits at even positions
#include<stdio.h>
int main() 
{
    unsigned int num,result;
    printf("Enter an integer: ");
    scanf("%u",&num);
    unsigned int mask=0x55555555;
    result=num^mask;
    printf("Original number:%u\n",num);
    printf("After reversing bits at even positions:%u\n",result);
    return 0;
}