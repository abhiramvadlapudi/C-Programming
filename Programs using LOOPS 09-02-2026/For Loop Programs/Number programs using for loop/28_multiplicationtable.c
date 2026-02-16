//Print multiplication table of number from user
#include<stdio.h>
int main()
{
    int n,i,p;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        p=n*i;
        printf("%d ",p);
    }
}