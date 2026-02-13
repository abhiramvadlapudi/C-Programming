//Find sum of all even numbers from 1 to N
#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("n=");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
}