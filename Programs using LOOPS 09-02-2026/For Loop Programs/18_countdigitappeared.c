//Count how many times a digit appears.
#include<stdio.h>
int main()
{
    int num,digit,rem,count=0;
    printf("num=");
    scanf("%d",&num);
    printf("digit=");
    scanf("%d",&digit);
    for(;num!=0;num/10)
    {
        rem=num%10;
        if(rem==digit)
        {
            count++;
        }
        num/=10;
    }
    printf("Count=%d",count);
}