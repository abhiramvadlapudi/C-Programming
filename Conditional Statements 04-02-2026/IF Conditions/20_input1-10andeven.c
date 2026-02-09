//Validate: Input must be 1–10 AND even, using multiple ifs.
#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    if(n>=1&&n<=10)
    {
        if(n%2==0)
        {
            printf("n lies between 1-10 and even");
        }
    }
    if(!(n>=1&&n<=10)||!(n%2==0))
    {
        printf("n doesnt lie between 1-10 and not even");
    }
}