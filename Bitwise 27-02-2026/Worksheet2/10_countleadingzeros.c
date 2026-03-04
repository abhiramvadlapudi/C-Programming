//Write a C program to count the number of leading zeros in the binary representation of a number (assuming 32-bit integer)
#include <stdio.h>
int main() 
{
    int num;
    int count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    if (num==0) 
    {
        printf("The number of leading zeros in the binary representation is: 32\n");
        return 0;
    }
    for(int i=31;i>=0;i--) 
    {
        if ((num&(1<<i))!=0) 
        {
            break; 
        }
        count++;
    }
    printf("The number of leading zeros is:%d\n",count);
    return 0;
}