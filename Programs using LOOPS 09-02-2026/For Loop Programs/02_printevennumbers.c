//Print even numbers from 1 to N
#include<stdio.h>
int main()
{
    int n,i;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
        }
    }
}