//Find sum of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("n=");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}