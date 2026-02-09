//Display unit conversion choices (km→m, m→cm, etc.) using switch
#include<stdio.h>
void case1(int choice);
int main()
{
    int choice;
    while(1)
    {
    printf("\nUnit Conversion Menu:\n");
    printf("1. Kilometer to Meter\n");
    printf("2. Meter to Centimeter\n");
    printf("3. Centimeter to Millimeter\n");
    printf("4. Meter to Kilometer\n");
    printf("5. Centimeter to Meter\n");
    printf("6. Millimeter to Centimeter\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    case1(choice);
    }
}
    void case1(int choice)
    {
        float value;
    printf("Enter the value:");
    scanf("%f",&value);
    switch(choice)
    {
        case 1 :
        {
            printf("Result=%.2f",value*1000);
            break;
        }
        case 2 :
        {
            printf("Result=%.2f",value*100);
            break;
        }
        case 3 :
        {
            printf("Result=%.2f",value*10);
            break;
        }
        case 4 :
        {
            printf("Result=%.2f",value/1000);
            break;
        }
        case 5 :
        {
            printf("Result=%.2f",value/100);
            break;
        }
        case 6 :
        {
            printf("Result=%.2f",value/10);
            break;
        }
        default :
        {
            printf("Invalid choice");
        }
    }
}