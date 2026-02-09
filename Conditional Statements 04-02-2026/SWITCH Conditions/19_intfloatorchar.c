//Identify data type category from user choice (int/float/char) using switch
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int choice;
    while(1)
    {
    printf("\nChoose a data type category:\n");
    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Charecter\n");
    printf("4. EXIT\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) 
    {
        case 1:
            printf("Datatype='int'.\n");
            break;

        case 2:
            printf("Datatype='float'.\n");
            break;

        case 3:
            printf("Datatype='char'.\n");
            break;
            
        case 4:
             exit(0);

        default:
            printf("Invalid choice");
    }
    }
}
