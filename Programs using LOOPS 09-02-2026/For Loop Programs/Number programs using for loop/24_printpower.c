//Print Power of number without using pow()
#include <stdio.h>
int main() 
{
    int num,power,res=1,i;
    printf("num=");
    scanf("%d",&num);
    printf("power");
    scanf("%d",&power);
    for(i=1;i<=power;i++)
    {
        res=res*num;
    }
    printf("res=%d",res);
}
