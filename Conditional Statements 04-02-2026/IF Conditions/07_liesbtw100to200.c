//Check if a number lies between 100 and 200 using two if statements.
#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    if(n>100&&n<200)
    {
        printf("n is in between 100 and 200");
    }
    if(n<=100||n>=200)
    {
        printf("n doesnt lies between 100 and 200");
    }
}