//Write a C program to count the number of trailing zeros in the binary representation of a number.
#include <stdio.h>
int main() 
{
    int num;
    int count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num>0&&(num&1)==0) 
    {
        count++;            
        num>>=1;
    }
    printf("The number of trailing zeros:%d\n",count);
    return 0;
}