//Check if a number lies between 50 and 100 using if-else
#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    if(n>50&&n<100)
    {
        printf("n is in between 50 and 100");
    }
    else
    {
        printf("n is not in between 50 and 100");
    }
}