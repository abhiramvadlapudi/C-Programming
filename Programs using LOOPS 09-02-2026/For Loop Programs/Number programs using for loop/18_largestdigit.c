//Find largest digit in a number
#include<stdio.h>
int main()
{
    int num,largest=0,rem;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        rem=num%10;
        if(rem>largest)
        {
            largest=rem;
        }
        num=num/10;
    }
    printf("largest digit: %d",largest);
}