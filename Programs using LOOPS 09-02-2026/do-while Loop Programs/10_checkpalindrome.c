//Check palindrome number
#include <stdio.h>
int main() 
{
    int num, originalNum, reversed=0, remainder;
    printf("Enter a number: ");
    scanf("%d",&num);
    originalNum=num;  
    do {
        remainder=num%10;         
        reversed=reversed*10+remainder;
        num=num/10;               
    }
    while (num!=0);               
    if (originalNum==reversed) 
    {
        printf("%d is a palinrome.\n",originalNum);
    } 
    else 
    {
        printf("%d is not a palindrome.\n",originalNum);
    }
    return 0;
}
