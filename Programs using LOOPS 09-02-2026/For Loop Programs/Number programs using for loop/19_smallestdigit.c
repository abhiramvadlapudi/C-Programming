//Find smallest digit in a number.
#include<stdio.h>
int main()
{
    int num,smallest=9,rem;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        rem=num%10;
        if(rem<smallest)
        {
            smallest=rem;
        }
        num=num/10;
    }
    printf("smallest digit: %d",smallest);
}