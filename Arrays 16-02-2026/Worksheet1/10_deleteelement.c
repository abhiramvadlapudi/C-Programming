//Delete element at position
#include<stdio.h>
int main()
{
    int n,a[10],i,n1;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("n1=");
    scanf("%d",&n1);
    for(i=n1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
}