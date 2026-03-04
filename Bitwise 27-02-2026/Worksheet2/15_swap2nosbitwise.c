//Write a C program to swap two numbers using bitwise XOR operator without using a temporary variable.
#include <stdio.h>
int main() 
{
    int a,b;
    printf("a,b=");
    scanf("%d%d",&a,&b);
    printf("Before swapping: %d,%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping: %d,%d",a,b);
}