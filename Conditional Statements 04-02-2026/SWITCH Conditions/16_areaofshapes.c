//Switch menu to calculate area of rectangle, circle, triangle.
#include<stdio.h>
void area(int choice);
int main()
{
    int choice;
    while(1)
    {
    printf("\nCalculate Area Menu:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    area(choice);
    }
}
    void area(int choice)
    {
    switch(choice)
    {
        case 1 :
        {
            int l,b,a1;
            printf("L,B=");
            scanf("%d%d",&l,&b);
            a1=l*b;
            printf("Result=%d",a1);
            break;
        }
        case 2 :
        {
            int r,a2;
            printf("R=");
            scanf("%d",&r);
            a2=3.14*r*r;
            printf("Result=%d",a2);
            break;
        }
        case 3 :
        {
            int b,h,a3;
            printf("B,H=");
            scanf("%d%d",&b,&h);
            a3=0.5*b*h;
            printf("Result=%d",a3);
            break;
        }
        default :
        {
            printf("Invalid choice");
        }
    }
}