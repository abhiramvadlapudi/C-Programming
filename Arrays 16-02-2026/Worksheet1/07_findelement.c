//Find for an element
#include<stdio.h>
int main()
{
    int a[10],n,i,f;
    printf("n=");
    scanf("%d",&n);
    printf("a[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Find=");
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        if(a[i]==f)
        {
            printf("index=%d",i);
        }
    }
}