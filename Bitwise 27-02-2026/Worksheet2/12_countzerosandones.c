// Write a C program to count the total number of zeros and ones in the binary representation of a number.
#include <stdio.h>
int main() 
{
    int num;
    int ones=0,zeros=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num>0) 
    {
        if(num&1) 
        {
            ones++;
        } 
        else 
        { 
            zeros++;
        }
        num>>=1;
    }
    zeros+=(sizeof(int)*8)-(ones+zeros);
    printf("Total number of 1's:%d\n",ones);
    printf("Total number of 0's:%d\n",zeros);
    return 0;
}