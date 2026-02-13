//Power of a^b using while loop
#include <stdio.h>
int main() 
{
    int a,b;
    long long result=1;
    printf("Enter base (a): ");
    scanf("%d",&a);
    printf("Enter exponent (b): ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++) 
    {
        result=result*a;
    }
    printf("%d^%d = %lld",a,b,result);
    return 0;
}
