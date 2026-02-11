//Convert number to binary
#include<stdio.h>
int main()
{
    int num,rem;
    printf("num=");
    scanf("%d",&num);
    do{
        rem=num%2;
        printf("%d",rem);
        num=num/2;
    }while(num!=0);
}