//Count number of digits in a number
#include<stdio.h>
int main()
{
    int num,count=0;
    printf("num=");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    printf("%d",count);
}
