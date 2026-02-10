//Find sum of first N natural numbers
#include<stdio.h>
int main()
{
    int num,i=1,sum=0;
    printf("num=");
    scanf("%d",&num);
    while(i<=num)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
}