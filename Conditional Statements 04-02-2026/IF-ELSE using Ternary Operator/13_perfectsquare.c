//Check whether a number is a perfect square
#include <stdio.h>
#include <math.h>
int main() 
{
    int num;
    printf("num: ");
    scanf("%d",&num);
    (sqrt(num)==(int)sqrt(num))?printf("perfect square"):printf("not a perfect square");
    return 0;
}
