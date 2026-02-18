//Sort array in descending order
#include<stdio.h>
int main()
{
    int n,a[10],i,j,high,temp;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        high=i;
        for(j=i+1;j<n;j++)
        {
            if(a[high]<a[j])
            {
                high=j;
            }
        }
        temp=a[i];
        a[i]=a[high];
        a[high]=temp;
    }
    printf("new a[n]=");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}