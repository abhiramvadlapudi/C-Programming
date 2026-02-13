//Find largest digit in number
#include<stdio.h>
int main()
{
    int num,rem,largest;
    printf("num=");
    scanf("%d",&num);
    largest=0;
    for(;num!=0;num/10)
    {
        rem=num%10;
        if(largest<rem)
        {
            largest=rem;
        }
        num/=10;
    }
    printf("largest number=%d",largest);
}