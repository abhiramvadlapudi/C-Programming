//Write a C program to flip all bits of a number using bitwise operators.
#include <stdio.h>
int main() 
{
    unsigned char num;
    printf("Enter number:");
    scanf("%hhu",&num);  
    unsigned char flipped_num=~num;
    flipped_num=flipped_num&0xFF;
    printf("The number after flipping is: %d\n",flipped_num);
    return 0;
}