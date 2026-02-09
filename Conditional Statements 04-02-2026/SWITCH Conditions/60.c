#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int choice;
    while(1)
    {
    printf("\nChoose a data type category:\n");
    printf("1. Withdraw\n");
    printf("2. Deposit\n");
    printf("3. Balance\n");
    printf("4. EXIT\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            int w;
            printf("W=");
            scanf("%d",&w);
            printf("%d is withdrawn.\n");
            break;

        case 2:
            int d;
            printf("D=");
            scanf("%d",&d);
            printf("%d is deposited.\n");
            break;

        case 3:
            int b;
            printf("B=");
            scanf("%d",&b);
            printf("%d is balance.\n");
            break;
            
        case 4:
             exit(0);

        default:
            printf("Invalid choice");
    }
    }
}
