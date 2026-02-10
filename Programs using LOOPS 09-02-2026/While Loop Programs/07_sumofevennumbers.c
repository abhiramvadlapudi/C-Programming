//Find sum of all even numbers from 1 to N
#include<stdio.h>
int main()
{
    int num,i=2,sum=0;
    printf("num=");
    scanf("%d",&num);
    while(i<=num)
    {
        sum=sum+i;
        i+=2;
    }
    printf("%d",sum);
}