//Count number of digits in a number
#include<stdio.h>
int main()
{
    int n,i,rem,count=0;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        rem=n%10;
        n=n/10;
        count++;
    }
    printf("%d",count);
}