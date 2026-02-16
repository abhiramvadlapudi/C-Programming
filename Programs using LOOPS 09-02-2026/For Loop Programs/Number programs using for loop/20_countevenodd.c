//Count even and odd digits
#include<stdio.h>
int main()
{
    int num,rem,even=0,odd=0;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        rem=num%10;
        if(rem%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        num=num/10;
    }
    printf("even=%d",even);
    printf("odd=%d",odd);
}