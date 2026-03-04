//Write a C program to find the position of the highest set bit in a number.
#include <stdio.h>
int main() 
{
    int num;
    int pos=-1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i=31;i>=0;i--) 
    {
        if(num&(1<<i)) 
        {
            pos=i;
            break; 
        }
    }
    if (pos==-1) 
    {
        printf("The number is 0, so no bits are set.\n");
    } 
    else 
    {
        printf("The position of the highest set bit is:%d\n",pos);
    }
    return 0;
}