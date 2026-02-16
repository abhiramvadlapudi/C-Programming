//Check Strong Number
#include <stdio.h>
int factorial(int num) 
{
    int fact=1;
    for (int i=1;i<=num;i++) 
    {
        fact*=i;
    }
    return fact;
}
int main() 
{
    int num, originalNum, remainder, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    originalNum=num;
    while(num!=0) 
    {
        remainder=num%10; 
        sum+=factorial(remainder); 
        num/=10; 
    }
    if (sum==originalNum) 
    {
        printf("%d is a Strong Number.\n",originalNum);
    } 
    else 
    {
        printf("%d is not a Strong Number.\n",originalNum);
    }
    return 0;
}
