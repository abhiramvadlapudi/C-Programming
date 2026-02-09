//Display traffic signal meaning (Red/Yellow/Green) using switch
#include<stdio.h>
int main()
{
    char s;
    printf("s=");
    scanf("%c",&s);
    switch(s)
    {
        case 'R' :
        {
            printf("Stop");
            break;
        }
        case 'Y' :
        {
            printf("Ready");
            break;
        }
        case 'G' :
        {
            printf("Go");
            break;
        }
        default:
        {
            printf("Invalid");
            break;
        }
    }
}