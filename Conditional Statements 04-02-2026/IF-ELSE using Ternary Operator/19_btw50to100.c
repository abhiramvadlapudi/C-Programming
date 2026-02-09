//Check if a number lies between 50 and 100
#include<stdio.h>
int main()
{
    int num;
    printf("num=");
    scanf("%d",&num);
    (num>=50&&num<=100)?printf("lies between 50 to 100"):
    printf("Doesnot lie between 50 to 100");
}