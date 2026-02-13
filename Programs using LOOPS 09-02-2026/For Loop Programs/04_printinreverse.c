//Print numbers from N to 1
#include<stdio.h>
int main()
{
    int n,i;
    printf("n=");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        printf("%d",i);
    }
}