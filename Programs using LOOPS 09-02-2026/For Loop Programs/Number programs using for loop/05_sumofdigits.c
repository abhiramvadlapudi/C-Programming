//Find sum of digits
#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("sum of digits:%d",sum);
}