//Count pairs with given sum
#include<stdio.h>
int main()
{
    int m,a[10],i,j,sum,count=0;
    printf("m=");
    scanf("%d",&m); 
    printf("a[m]=");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sum=");
    scanf("%d",&sum);
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]+a[j]==sum)
            {
                count++;
            }
        }
    }
    printf("Pairs=%d",count);
}