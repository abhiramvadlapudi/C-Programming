//Print digits of a number
#include<stdio.h>
int main()
{
    int num,rem;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        rem=num%10;
        printf("%d",rem);
        num/=10;
    }
}