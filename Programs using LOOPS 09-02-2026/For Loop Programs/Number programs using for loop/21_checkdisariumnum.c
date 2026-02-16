//Check Disarium Number
#include <stdio.h>
#include <math.h>
int main() 
{
    int num,temp,digit,count=0;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    for(;temp!=0;temp/=10) 
    {
        count++;
    }
    temp=num;
    for(int i=count;i>0;i--) 
    {
        digit=temp%10;
        sum+=pow(digit, i);
        temp/=10;
    }
    if (sum==num)
        printf("%d is a Disarium number.\n",num);
    else
        printf("%d is not a Disarium number.\n",num);
    return 0;
}