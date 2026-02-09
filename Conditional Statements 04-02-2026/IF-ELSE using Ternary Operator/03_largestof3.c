//Find the largest of three numbers
#include<stdio.h>
int main()
{
    int m,n,p,num;
    printf("m,n,p=");
    scanf("%d%d%d",&m,&n,&p);
    num=(m>n&&m>p)?m:(n>p)?n:p;
    printf("Largest number:%d",num);
}