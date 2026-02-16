//Check Happy Number
#include <stdio.h>
int main() 
{
    int num,temp,digit,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    for(;temp!=1&&temp!=4;) 
    {
        sum=0;
        for(;temp>0;temp/=10) 
        {
            digit=temp%10;
            sum+=digit*digit;
        }
        temp=sum;
    }
    if (temp==1)
        printf("%d is a Happy number.\n",num);
    else
        printf("%d is not a Happy number.\n",num);
    return 0;
}
