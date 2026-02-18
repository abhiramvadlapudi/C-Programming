//Sum of even numbers
#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum+=a[i];
        }
    }
    printf("Sum of even numbers=%d",sum);
}