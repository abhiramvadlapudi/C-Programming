//Check if number is Perfect Square
#include<stdio.h>
int main() 
{
    int num,i;
    int isPerfectSquare=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<0) 
    {
        printf("Negative numbers cannot be perfect squares.\n");
        return 0;
    }
    for (i=0;i*i<=num;i++) 
    {
        if(i*i==num) 
        {
            isPerfectSquare = 1;
            break;
        }
    }
    if (isPerfectSquare)
        printf("%d is a Perfect Square.\n",num);
    else
        printf("%d is not a Perfect Square.\n",num);

    return 0;
}
