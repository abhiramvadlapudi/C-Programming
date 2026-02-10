//Power of a^b using while loop
#include <stdio.h>
int main() 
{
    int a,b,result=1;
    printf("Enter the base (a): ");
    scanf("%d",&a);
    printf("Enter the exponent (b): ");
    scanf("%d",&b);
    while (b>0) 
    {
        result*=a;
        b--;      
    }
    printf("%d raised to the power %d is %d\n",a,b,result);
    return 0;
}
