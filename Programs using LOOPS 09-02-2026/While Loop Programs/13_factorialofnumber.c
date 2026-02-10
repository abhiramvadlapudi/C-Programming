//Factorial of a number
#include<stdio.h>
int main()
{
    int num,product=1;
    printf("num=");
    scanf("%d",&num);
    while(num!=0)
    {
        product=product*num;
        num--;
    }
    printf("factorial=%d",product);
}