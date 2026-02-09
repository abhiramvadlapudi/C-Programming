//Swap two variables using only if (no temp, no XOR)
#include<stdio.h>
int main()
{
    int m,n;
    printf("m,n=");
    scanf("%d%d",&m,&n);
    if(m!=n)
    {
        m=m+n;
        n=m-n;
        m=m-n;
        printf("After swapping");
        printf("\nm,n=%d,%d",m,n);
    }
    if(m==n)
    {
        printf("No need to swap");
    }
}