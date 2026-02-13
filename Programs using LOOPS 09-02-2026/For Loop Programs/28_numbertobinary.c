//Convert number to binary (no arrays)
#include<stdio.h>
int main()
{
    int num,rem;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        rem=num%2;
        printf("%d",rem);
        num/=2;
    }
}