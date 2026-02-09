//Find the largest of three numbers using nested if only.

#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter i,j,k:");
    scanf("%d%d%d",&i,&j,&k);
    if(i>j)
    {
        if(i>k)
        {
            printf("i is greatest");
        }
    }
    if(i<j)
    {
        if(j>k)
        {
            printf("j is greatest");
        }
    }
    if(k>i)
    {
        if(k>j)
        {
            printf("k is greatest");
        }
    }
}