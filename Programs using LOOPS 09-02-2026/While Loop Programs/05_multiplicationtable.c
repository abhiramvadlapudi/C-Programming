//Print multiplication table of a number
#include<stdio.h>
int main()
{
    int num,i=1;
    printf("num=");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("%d",num*i);
        i++;
    }
}