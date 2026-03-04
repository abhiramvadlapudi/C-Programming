//Write a C program to toggle (flip) the nth bit of a number.
#include <stdio.h>
int main() 
{
    int num,n;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Enter the bit position (n) to toggle:");
    scanf("%d",&n);
    if (n<0||n>=sizeof(int)*8) 
    {
        printf("Invalid bit position!\n");
        return 1;
    }
    num=num^(1<<n);
    printf("The number after toggle the %d-th bit is:%d\n",n,num);
    return 0;
}