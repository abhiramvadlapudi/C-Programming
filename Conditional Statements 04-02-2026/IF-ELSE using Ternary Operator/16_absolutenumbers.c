//Print absolute value of a number
#include<stdio.h>
int main() 
{
    int num;
    printf("num: ");
    scanf("%d", &num);
    (num<0)?printf("Absolute value is %d",-num):printf("Absolute value is %d",num);
    return 0;
}
