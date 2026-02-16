//Sum of squares of digits
#include <stdio.h>
int main() 
{
    int num,sum=0,rem;
    printf("num=");
    scanf("%d",&num);
    for(;num>0;num/=10)
    {
        rem=num%10;
        sum+=rem*rem;
    }
    printf("sum=%d",sum);
}
