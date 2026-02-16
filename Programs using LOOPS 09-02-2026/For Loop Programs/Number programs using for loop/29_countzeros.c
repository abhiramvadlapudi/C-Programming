//Count no of zeros in number
#include <stdio.h>
int main() 
{
    int num,rem,count=0;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        rem=num%10;
        if(rem==0)
        {
            count++;
        }
        num=num/10;
    }
    printf("no of zeros=%d",count);
}
