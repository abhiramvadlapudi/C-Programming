//Print absolute value of a number using if-else.
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if (num<0) 
    {
        num=-num;
    }
    printf("The absolute value is:%d\n",num);
    return 0;
}
