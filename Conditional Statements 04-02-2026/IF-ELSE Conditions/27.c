#include<stdio.h>
int main()
{
    int marks;
    printf("marks=");
    scanf("%d",&marks);
    if(marks<40)
    {
        printf("FAIL");
    }
    else if(marks<50&&marks>=40)
    {
        printf("D");
    }
    else if(marks<60&&marks>=50)
    {
        printf("C");
    }
    else if(marks<70&&marks>=60)
    {
        printf("B");
    }
    else if(marks<=100&&marks>=70)
    {
        printf("A");
    }
}