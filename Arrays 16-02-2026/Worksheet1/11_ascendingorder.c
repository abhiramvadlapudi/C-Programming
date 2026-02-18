//Sort array in ascending order
#include<stdio.h>
int main()
{
    int n,a[10],i,j,least,temp;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        least=i;
        for(j=i+1;j<n;j++)
        {
            if(a[least]>a[j])
            {
                least=j;
            }
        }
        temp=a[i];
        a[i]=a[least];
        a[least]=temp;
    }
    printf("new a[n]=");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}