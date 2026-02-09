#include<stdio.h>
int main()
{
    int m,count=0;
    printf("pass=");
    scanf("%d",&m);
    while(m!=0)
    {
        m=m%10;
        count++;
        m=m/10;
    }
    if(count>=6)
    {
        printf("password is greater than 6");
    }
    else
    {
        printf("password is lesser than 6");
    }
}