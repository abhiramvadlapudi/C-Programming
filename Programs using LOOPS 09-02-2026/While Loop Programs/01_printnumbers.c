//Print numbers from 1 to N using a while loop
#include<stdio.h>
int main()
{
    int num,i=1;
    printf("num:");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("%d",i);
        i++;
    }
}