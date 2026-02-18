// Insert element at position
#include<stdio.h>
int main()
{
    int a[10],n,i,n1,a1;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("a1,n1=");
    scanf("%d%d",&a1,&n1);
    for(i=n-1;i>=n1;i--)
    {
        a[i+1]=a[i];
    }
    a[n1]=a1;
    for(i=0;i<n+1;i++)
    {
        printf("%d",a[i]);
    }
}