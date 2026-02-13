//factorial of the number is
#include<stdio.h>
int main()
{
    int num,rem,product=1;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        product*=num;
        num--;
    }
    printf("product= %d",product);
}