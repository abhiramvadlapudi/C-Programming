//print odd digits only
#include <stdio.h>
int main() 
{
    int num,digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num>0) 
    {
        digit=num%10;
        if (digit%2!=0) 
        {
            printf("%d ",digit);
        }
        num=num/10;
    }
    return 0;
}