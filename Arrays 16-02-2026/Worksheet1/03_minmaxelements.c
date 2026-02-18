// Find maximum and minimum element
#include<stdio.h>
int main()
{
    int a[10],n,i,j,min,max;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[n-1];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
            }
            if(a[j]>max)
            {
                max=a[j];
            }
        }
    }
    printf("min=%d",min);
    printf("max=%d",max);
}
    