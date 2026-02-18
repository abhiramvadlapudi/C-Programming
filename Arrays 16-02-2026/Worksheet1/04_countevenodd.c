// Count even and odd elements
#include<stdio.h>
int main()
{
    int a[10],n,i,cnteven=0,cntodd=0;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cnteven++;
        }
        else
        {
            cntodd++;
        }
    }
    printf("Even number=%d\n",cnteven);
    printf("Odd number=%d\n",cntodd);
}