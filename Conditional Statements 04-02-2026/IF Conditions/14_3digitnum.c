//Check if a number is a 3‑digit number using if
#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    if(n>=100&&n<=999)
    {
        printf("n is 3 digit number");
    }
    if(n<100||n>999)
    {
        printf("n is not 3 digit number");
    }
}