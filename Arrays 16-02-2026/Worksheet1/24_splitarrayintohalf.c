//Split array into half
#include<stdio.h>
int main()
{
    int m,a[10],a1[5],a2[5],i,j,k=0;
    printf("m=");
    scanf("%d",&m); 
    printf("a[m]=");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m/2;i++)
    {
        a1[i]=a[i];
    }
    for(j=m/2;j<m;j++)
    {
        a2[k]=a[j];
        k++;
    }
    for(i=0;i<m/2;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(k=m/2;k<m;k++)
    {
        printf("%d",a[k]);
    }
}