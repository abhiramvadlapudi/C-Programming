//Check whether a person is eligible for voting using if-else.
#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("n can vote");
    }
    else
    {
        printf("n cannot vote");
    }
}