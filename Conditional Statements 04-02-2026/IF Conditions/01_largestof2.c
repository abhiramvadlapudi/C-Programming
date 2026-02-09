//Find the largest of two numbers using only if.
#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter i:");
    scanf("%d",&i);
    printf("Enter j:");
    scanf("%d",&j);
    if(i>j)
    {
        printf("i is greater than j");
    }
    if(j>i)
    {
        printf("j is greater than i");
    }
}