//Check if a number is divisible by 3 (without using %)
#include<stdio.h>
int main()
{
    int n,temp;
    printf("n=");
    scanf("%d",&n);
    if (n>3)
    {
        temp=n;
        while(temp>=3)
        {
            temp=temp-3;
        }
        if(temp==0)
        {
            printf("n is divisable by 3");
        }
        else
        {
            printf("n is not divisable by 3");
        }
    }
}