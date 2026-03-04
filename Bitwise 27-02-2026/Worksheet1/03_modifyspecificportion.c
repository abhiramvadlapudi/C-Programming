//Write a program to modify specific portions of a given integer:
//Set all bits in the Least Significant Byte (LSB) to 1
#include<stdio.h>
#include<stdint.h>
int main() 
{
    uint32_t number;
    printf("Enter an integer: ");
    scanf("%u",&number);
    number|=0xFF;
    printf("Modified number:%u\n",number);
    printf("Modified number (hex):0x%X\n",number);
    return 0;
}

//Set all bits in the Most Significant Byte (MSB) to 1
#include<stdio.h>
#include<stdint.h>
int main() 
{
    uint32_t number;
    printf("Enter an integer: ");
    scanf("%u",&number);
    number|=(0xFFu<<((sizeof(number)-1)*8));
    printf("Modified number (decimal): %u\n", number);
    printf("Modified number (hex): 0x%X\n", number);
    return 0;
}

//Set all bits in the Least Significant Nibble to 1
#include<stdio.h>
#include<stdint.h>
int main() 
{
    uint32_t number;
    printf("Enter an integer: ");
    scanf("%u",&number);
    number|=0xF;
    printf("Modified number (decimal): %u\n",number);
    printf("Modified number (hex): 0x%X\n",number);
    return 0;
}

//Set all bits in the Most Significant Nibble to 1
#include<stdio.h>
#include<stdint.h>
int main() 
{
    uint32_t number;
    printf("Enter an integer: ");
    scanf("%u",&number);
    number|=(0xF<<((sizeof(number)*8)-4));
    printf("Modified number (decimal): %u\n",number);
    printf("Modified number (hex): 0x%X\n",number);
    return 0;
}

//Set n bits to 1 (user input)
#include<stdio.h>
#include<stdint.h>
int main() 
{
    uint32_t number;
    int n;
    printf("Enter an integer: ");
    scanf("%u",&number);
    printf("Enter the number of bits to set to 1: ");
    scanf("%d",&n);
    uint32_t mask=(1U << n)-1;
    number|=mask;
    printf("Modified number (decimal): %u\n",number);
    printf("Modified number (hex): 0x%X\n",number);
    return 0;
}

//Clear n bits (set to 0), with n as input
#include<stdio.h>
#include<stdint.h>
int main() 
{
    uint32_t number;
    int n;
    printf("Enter an integer: ");
    scanf("%u",&number);
    printf("Enter the number of bits to clear: ");
    scanf("%d",&n);
    uint32_t mask=~((1U<<n)-1);
    number&=mask;
    printf("Modified number (decimal): %u\n",number);
    printf("Modified number (hex): 0x%X\n",number);
    return 0;
}

//Toggle n bits (user input)
#include<stdio.h>
#include<stdint.h>
int main() 
{
    uint32_t number;
    int n;
    printf("Enter an integer: ");
    scanf("%u", &number);
    printf("Enter the number of bits to toggle: ");
    scanf("%d", &n);
    uint32_t mask = (1U << n) - 1;
    number ^= mask;
    printf("Modified number (decimal): %u\n", number);
    printf("Modified number (hex): 0x%X\n", number);
    return 0;
}