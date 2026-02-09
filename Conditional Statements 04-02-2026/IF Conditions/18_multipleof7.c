//Check if a number is a multiple of 7 using only subtraction.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("n=");
    scanf("%d",&n);
    if(n>7)
    {
        temp=n;
        while(temp>=7)
        {
            temp=temp-7;
        }
        if (temp==0)
        {
            printf("n is multiple of 7");
        }
        if (temp!=0)
        {
            printf("n is not multiple of 7");
        }
    }
}