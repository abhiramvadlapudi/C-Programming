//Count number of digits in a number
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("num=");
    scanf("%d",&num);
    for(;num!=0;num/10)
    {
        num=num/10;
        count++;
    }
    printf("No of digits:%d",count);
}