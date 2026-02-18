// Remove duplicate elements
#include<stdio.h>
int main()
{
    int m,a[10],i,j;
    printf("m=");
    scanf("%d",&m); 
    printf("a[m]=");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=a[j+1];
            }
        }
        m--;
    }
    printf("new a[m]=");
    for(i=0;i<m;i++)
    {
        printf("%d",a[i]);
    }
}