#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    if(n>0)
    {
        printf("n is positive number");
    }
    else if(n<0)
    {
        printf("n is negitive number");
    }
    else
    {
        printf("n is zero");
    }
}