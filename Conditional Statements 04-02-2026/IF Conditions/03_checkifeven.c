//Check if a number is even (only if, no % operator).
#include<stdio.h>
int main()
{
    int n,temp;
    printf("n=");
    scanf("%d",&n);
    if (n>0)
    {
        temp=n;
        while(temp>=2)
        {
            temp=temp-2;
        }
        if(temp==0)
        {
            printf("n is even");
        }
        else
        {
            printf("n is odd");
        }
    }
    else
    {
        printf("n is even");
    }
}