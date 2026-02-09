//Print the day of the week for numbers 1–7 using switch
#include<stdio.h>
int main()
{
    int d;
    printf("d=");
    scanf("%d",&d);
    switch(d)
    {
        case 1 :
        {
            printf("MONDAY");
            break;
        }
        case 2 :
        {
            printf("TUESDAY");
            break;
        }
        case 3 :
        {
            printf("WEDNESDAY");
            break;
        }
        case 4 :
        {
            printf("THURSDAY");
            break;
        }
        case 5 :
        {
            printf("FRIDAY");
            break;
        }
        case 6 :
        {
            printf("SATURDAY");
            break;
        }
        case 7 :
        {
            printf("SUNDAY");
            break;
        }
        default:
        {
            printf("Invalid");
            break;
        }
    }
}