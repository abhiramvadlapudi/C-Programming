//Sum of n natural numbers
#include <stdio.h>
int main() 
{
    int num,sum=0,i;
    printf("num=");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        sum+=i;
    }
    printf("Sum of n natural numbers is %d",sum);
}
