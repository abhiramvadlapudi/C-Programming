//Print even digits only
#include<stdio.h>
int main()
{
    int num,rem,smallest;
    printf("num=");
    scanf("%d",&num);
    smallest=9;
    for(;num!=0;num/10)
    {
        rem=num%10;
        if(rem%2==0)
        {
            printf("%d",rem);
        }
        num/=10;
    }
}