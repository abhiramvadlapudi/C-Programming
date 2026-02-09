//Check if a number is positive, negative, or zero
#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    (n>0)?printf("Positive"):
    (n<0)?printf("Negitive"):
    printf("Zero");
}