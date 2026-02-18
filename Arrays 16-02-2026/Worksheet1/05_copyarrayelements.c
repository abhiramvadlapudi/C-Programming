// Copy array elements
#include<stdio.h>
int main()
{
    int a[10],a1[10],n,i;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        a1[i]=a[i];
        printf("%d",a1[i]);
    }
}
    