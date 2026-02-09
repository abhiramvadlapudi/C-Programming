//Print season based on month number using switch
#include<stdio.h>
int main()
{
    int m;
    printf("m=");
    scanf("%d",&m);
    switch(m)
    {
        case 1 :
        {
            printf("Winter");
            break;
        }
        case 2 :
        {
            printf("Spring");
            break;
        }
        case 3 :
        {
            printf("Summer");
            break;
        }
        case 4 :
        {
            printf("Summer");
            break;
        }
        case 5 :
        {
            printf("Summer");
            break;
        }
        case 6 :
        {
            printf("Rainy");
            break;
        }
        case 7 :
        {
            printf("Rainy");
            break;
        }
        case 8 :
        {
            printf("Rainy");
            break;
        }
        case 9 :
        {
            printf("Fall");
            break;
        }
        case 10 :
        {
            printf("Fall");
            break;
        }
        case 11 :
        {
            printf("Winter");
            break;
        }
        case 12 :
        {
            printf("Winter");
            break;
        }
        default:
        {
            printf("Invalid");
            break;
        }
    }
}