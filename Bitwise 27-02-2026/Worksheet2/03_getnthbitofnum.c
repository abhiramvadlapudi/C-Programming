//Write a C program to get the value of the nth bit of a number.
#include<stdio.h>
int main() 
{
    int num,n;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the bit position (n):");
    scanf("%d",&n);
    if (n<0||n>=sizeof(int)*8) 
    {
        printf("Invalid bit position!\n");
        return 1;
    }
    int nthBit=(num>>(n-1))&1;
    printf("The value of the %d-th bit is:%d\n",n,nthBit);
    return 0;
}