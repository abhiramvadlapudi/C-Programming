//Find the missing number
#include<stdio.h>
int main()
{
    int n,a[10],i,sum=0,expected,missing;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    expected=(n+1)*(n+2)/2;
    missing=expected-sum;
    printf("missing number=%d",missing);
}