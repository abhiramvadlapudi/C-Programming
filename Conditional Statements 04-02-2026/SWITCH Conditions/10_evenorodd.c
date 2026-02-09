//Check even/odd using switch on (num % 2).
#include<stdio.h>
int main()
{
    int n,r;
    printf("n=");
    scanf("%d",&n);
    switch(n%2)
    {
        case 1 :
        {
            printf("Odd");
            break;
        }
        case 0 :
        {
            printf("Even");
            break;
        }
        default:
        {
            printf("Invalid");
            break;
        }
    }
}