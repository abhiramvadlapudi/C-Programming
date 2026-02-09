#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    if(n%3==0&&n%5==0)
    {
        printf("n is divisable by 3 and 5");
    }
    else
    {
        printf("n is not divisable by 3 and 5");
    }
}