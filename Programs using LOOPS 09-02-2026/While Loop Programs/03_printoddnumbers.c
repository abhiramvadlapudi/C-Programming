//Print odd numbers from 1 to N
#include<stdio.h>
int main()
{
    int num,i=1;
    printf("num=");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("%d",i);
        i+=2;
    }
}