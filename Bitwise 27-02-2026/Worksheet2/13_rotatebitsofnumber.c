// Write a C program to rotate bits of a number to the left or right by a given number of positions.
#include <stdio.h>
int main() 
{
    unsigned int num,n,rotated_num;
    int direction;
    printf("Enter the number:");
    scanf("%u",&num);
    printf("Enter the number of positions to rotate: ");
    scanf("%u",&n);
    printf("Enter the direction of rotation (1 for left, 0 for right): ");
    scanf("%d",&direction);
    n=n%32;
    if (direction==1) 
    {
        rotated_num=(num<<n)|(num>>(32-n));
    } 
    else if (direction==0) 
    {
        rotated_num=(num>>n)|(num<<(32-n));
    } 
    else 
    {
        printf("Invalid direction input.\n");
        return 1;
    }
    printf("The number after rotation is:%u\n",rotated_num);
    return 0;
}