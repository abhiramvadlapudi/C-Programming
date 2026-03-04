//Write a program to multiply a number by 9 using bitwise shift operations.
#include <stdio.h>
int main() 
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d",&num);
    result=(num<<3)+num;
    printf("%d multiplied by 9 is: %d\n",num,result);
    return 0;
}
