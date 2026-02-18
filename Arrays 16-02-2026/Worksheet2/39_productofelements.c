//Find the product of all elements
#include<stdio.h>
int main()
{
    int m,a[10],i,product=1;
    printf("m=");
    scanf("%d",&m); 
    printf("a[m]=");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        product*=a[i];
    }
    printf("product=%d",product);
}