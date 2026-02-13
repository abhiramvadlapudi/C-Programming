//Find smallest digit in number
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
        if(smallest>rem)
        {
            smallest=rem;
        }
        num/=10;
    }
    printf("smallest number=%d",smallest);
}