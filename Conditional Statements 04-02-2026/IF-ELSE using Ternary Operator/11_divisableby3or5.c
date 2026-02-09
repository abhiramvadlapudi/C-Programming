//Check if a number is divisible by both 3 and 5
#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    (n%3==0&&n%5==0)?printf("n is divisable by 3 and 5"):
    printf("n is not divisable by 3 and 5");
}