#include <stdio.h>
int main()
{
    int choice,num,i;
    long long int fact=1,first=0,second=1,next;
    printf("Choose an option:\n");
    printf("1. Compute Factorial\n");
    printf("2. Compute Fibonacci Series\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter a number:");
    scanf("%d", &num);
    switch (choice) 
    {
        case 1:
            fact=1;  
            for(i=1;i<=num;i++) 
            {
                fact*=i;
            }
            printf("Factorial of %d is %lld\n",num,fact);
            break;
        case 2:
            printf("Fibonacci Series:");
            first=0;
            second=1;
            printf("%lld %lld ",first,second);
            for (i=3;i<=num;i++) 
            {
                next=first+second;
                printf("%lld ",next);
                first=second;
                second=next;
            }
            printf("\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
