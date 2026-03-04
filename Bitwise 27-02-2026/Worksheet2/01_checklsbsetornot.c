//Check Least Significant Bit (LSB) of a number is set or not
#include <stdio.h>
int main() 
{
    int num;
    printf("Num=");
    scanf("%d",&num);
    if(num&1)
        printf("LSB is set.\n");
    else
        printf("LSB is not set.\n");
    return 0;
}