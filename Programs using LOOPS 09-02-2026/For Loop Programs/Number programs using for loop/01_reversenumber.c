//Read an integer and reverse its digits using a for loop.
#include<stdio.h>
int main()
{
    int num,rem,rnum=0;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        rem=num%10;
        rnum=rnum*10+rem;
        num=num/10;
    }
    printf("reverse=%d",rnum);
}