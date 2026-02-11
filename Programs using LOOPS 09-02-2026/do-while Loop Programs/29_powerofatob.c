//Power of a^b
#include <stdio.h>
int main() {
    int a, b, result = 1, count = 0;
    printf("a,b= ");
    scanf("%d%d",&a,&b);
    if (b<0) 
    {
        printf("Exponent must be a non-negative integer.\n");
        return 1;
    }
    do {
        result*=a; 
        count++;     
    } while (count<b);
    printf("%d raised to the power of %d is: %d\n", a, b, result);
    return 0;
}

