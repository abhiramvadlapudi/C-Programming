//Count occurrence of a number
#include<stdio.h>
int main()
{
    int n,a[10],i,p,count=0;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("p=");
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(a[i]==p)
        {
            count++;
        }
    }
    printf("count=%d",count);
}