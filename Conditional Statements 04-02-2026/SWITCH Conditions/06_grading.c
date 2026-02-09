//Perform grade classification (A, B, C, D, F) using switch
#include<stdio.h>
int main()
{
    char g;
    printf("m=");
    scanf("%c",&g);
    switch(g)
    {
        case 'A' :
        {
            printf("marks are between 71 to 100");
            break;
        }
        case 'B' :
        {
            printf("marks are between 61 to 70");
            break;
        }
        case 'C' :
        {
            printf("marks are between 51 to 60");
            break;
        }
        case 'D' :
        {
            printf("marks are between 41 to 50");
            break;
        }
        case 'F' :
        {
            printf("marks are between 0 to 40");
            break;
        }
        default:
        {
            printf("Invalid");
            break;
        }
    }
}