// Print elements of an array
#include<stdio.h>
int main()
{
    int a[10],n,i;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("display array a[n]:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}