//How can you count the number of set bits in a floating-point number
#include<stdio.h>
#include<stdint.h>
int countSetBits(uint32_t n) 
{
    int count=0;
    while (n) 
    {
        count+=n&1;
        n>>=1;
    }
    return count;
}
int main() 
{
    float f;
    printf("Enter a float: ");
    scanf("%f",&f);
    union {
        float f;
        uint32_t u;
    } data;
    data.f=f;
    int setBits=countSetBits(data.u);
    printf("No of set bits in the float (%f)=%d\n",f,setBits);
    return 0;
}