//Check if a year is a leap year using separate if’s
#include <stdio.h>

int main() 
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if (year%4==0) 
    {
        printf("%d is divisible by 4.\n",year);
        if (year%100==0) 
        {
            printf("%d is divisible by 100.\n",year);
            if (year%400==0) 
            {
                printf("%d is divisible by 400.\n",year);
                printf("%d is a leap year.\n",year);
            }
            if (year%400!=0) 
            {
                printf("%d is not divisible by 400.\n",year);
                printf("%d is not a leap year.\n",year);
            }
        }
        if (year%100!=0) 
        {
            printf("%d is not divisible by 100.\n",year);
            printf("%d is a leap year.\n",year);
        }
    }
    if (year%4!=0) {
        printf("%d is not divisible by 4.\n",year);
        printf("%d is not a leap year.\n",year);
    }
    return 0;
}