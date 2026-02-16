//Trailing zeros in a factorial
#include <stdio.h>
int main() 
{
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i=5; num/i>=1;i*=5) 
    {
        count+=num/i;
    }
    printf("Number of trailing zeros in %d! is %d\n", num, count);
    return 0;
}
