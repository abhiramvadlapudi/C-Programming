#include<stdio.h>
int main()
{
    int m,n,p;
    printf("m,n,p=");
    scanf("%d%d%d",&m,&n,&p);
    if(m>n)
    {
        if(m>p)
        {
            printf("m is largest num");
        }
        else
        {
            printf("p is largest num");
        }
    }
    else
    {
        printf("n is largest num");
    }
}