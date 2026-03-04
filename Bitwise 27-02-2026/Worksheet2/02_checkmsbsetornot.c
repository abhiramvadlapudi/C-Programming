//Check Most Significant Bit (MSB) of a number is set or not
#include <stdio.h>
int main() 
{
    int num;
    printf("Num=");
    scanf("%d",&num);
    if(num&(1<<7))
        printf("MSB is set.\n");
    else
        printf("MSB is not set.\n");
    return 0;
}