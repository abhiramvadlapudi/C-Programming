#include<stdio.h>
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    switch(n)
    {
        case 1 :
        {
            printf("Circle");
            break;
        }
        case 2 :
        {
            printf("Square");
            break;
        }
        case 3 :
        {
            printf("Triangle");
            break;
        }
        default:
        {
            printf("Invalid");
            break;
        }
    }
}