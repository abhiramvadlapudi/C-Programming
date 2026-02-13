//Product of digits of a number
#include<stdio.h>
int main()
{
    int num,rem,product=1;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        rem=num%10;
        product*=rem;
        num/=10;
    }
    printf("product= %d",product);
}