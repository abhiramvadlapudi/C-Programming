//Implement temperature conversion (C→F or F→C) using switch
#include<stdio.h>
void temp(int choice);
int main()
{
    int choice;
    while(1)
    {
    printf("\nCalculate Area Menu:\n");
    printf("1. C to F\n");
    printf("2. F to C\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    temp(choice);
    }
}
    void temp(int choice)
    {
    switch(choice)
    {
        case 1 :
        {
            int c;
            float f;
            printf("C=");
            scanf("%d",&c);
            f=(c*9/5)+32;
            printf("Result=%.2f",f);
            break;
        }
        case 2 :
        {
            int f;
            float c;
            printf("F=");
            scanf("%d",&f);
            c=(f-32)*5/9;
            printf("Result=%.2f",c);
            break;
        }
        default :
        {
            printf("Invalid choice");
        }
    }
}