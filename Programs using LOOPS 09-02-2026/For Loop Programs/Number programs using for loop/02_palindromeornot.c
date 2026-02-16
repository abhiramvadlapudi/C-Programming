//Check whether a number is Palindrome
#include<stdio.h>
int main()
{
    int num,originalnum,rem,reversenum=0;
    printf("num=");
    scanf("%d",&num);
    originalnum=num;
    for(;num!=0;num/10)
    {
        rem=num%10;
        reversenum=reversenum*10+rem;
        num=num/10;
    }
    if (reversenum==originalnum)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
}