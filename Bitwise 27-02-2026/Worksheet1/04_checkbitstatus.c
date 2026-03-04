//Write a program to check bit status in an integer:
//Check if LSB is set (1) or not (0)
#include<stdio.h>
int main() 
{
    unsigned int number;
    printf("Enter an integer: ");
    scanf("%u", &number);
    if (number&1) 
    {
        printf("LSB is set to 1.\n");
    } 
    else 
    {
        printf("LSB is set to 0.\n");
    }
    return 0;
}

//Check if MSB is set (1) or not (0)
#include<stdio.h>
#include<stdint.h>
int main() 
{
    uint32_t number;
    printf("Enter an integer: ");
    scanf("%u",&number);
    unsigned int bits=sizeof(number)*8;
    uint32_t mask=1U<<(bits-1);
    if (number&mask) 
    {
        printf("MSB is set to 1.\n");
    } 
    else 
    {
        printf("MSB is set to 0.\n");
    }
    return 0;
}

//Check if the nth bit is set (1) or not (0) (user input)
#include<stdio.h>
#include<stdint.h>
int main() 
{
    uint32_t number;
    int n;
    printf("Enter an integer: ");
    scanf("%u",&number);
    printf("Enter the bit position to check (0 for LSB): ");
    scanf("%d",&n);
    if (number&(1U<<n)) 
    {
        printf("Bit %d is set to 1.\n", n);
    } 
    else 
    {
        printf("Bit %d is set to 0.\n", n);
    }
    return 0;
}