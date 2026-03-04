//Write a C program to find the position of the lowest set bit in a number.
#include <stdio.h>
int main() 
{
    int num;
    int pos=-1;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num==0) 
    {
        printf("The number is 0, so no bits are set.\n");
    } 
    else 
    {
        int lowestSetBit=num&(-num);
        for (int i=0;i<32;i++) 
        {
            if (lowestSetBit&(1<<i)) 
            {
                pos=i;
                break;
            }
        }
        printf("The position of the lowest set bit is: %d\n", pos);
    }
    return 0;
}