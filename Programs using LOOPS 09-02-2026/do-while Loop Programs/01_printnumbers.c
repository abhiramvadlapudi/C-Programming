//Print numbers from 1 to N using a while loop
#include<stdio.h>
int main()
{
    int n,i;
    printf("n=");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("%d ",i);
        i++;
    }while(i<=n);
}