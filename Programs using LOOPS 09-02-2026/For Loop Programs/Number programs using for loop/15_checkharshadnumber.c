//Check harshad Number
#include <stdio.h>
int main() 
{
    int num,sum=0,originalNum,remainder;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    originalNum=num;
    while(num!=0) 
    {
        remainder=num%10;  
        sum+=remainder;      
        num/=10;              
    }
    if (originalNum%sum==0) 
    {
        printf("%d is a Harshad Number.\n",originalNum);
    } 
    else 
    {
        printf("%d is not a Harshad Number.\n",originalNum);
    }
    return 0;
}
