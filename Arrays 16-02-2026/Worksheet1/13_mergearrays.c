//Merge two arrays
#include<stdio.h>
int main()
{
    int m,n,a[10],b[10],i,j;
    printf("m=");
    scanf("%d",&m); 
    printf("n=");
    scanf("%d",&n);
    printf("a[m]=");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("b[n]=");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=m,j=0;j<n;i++,j++)
    {
        a[i]=b[j];
    }
    for(i=0;i<m+n;i++)
    {
        printf("%d",a[i]);
    }
}