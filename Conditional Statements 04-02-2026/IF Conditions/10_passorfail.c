//Print “PASS” only if marks ≥ 40.
#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    if(n>=40)
    {
        printf("PASS");
    }
    if(n<40)
    {
        printf("FAIL");
    }
}