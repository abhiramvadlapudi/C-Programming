//Check whether three sides form a triangle
#include<stdio.h>
int main()
{
    int m,n,p;
    printf("m,n,p=");
    scanf("%d%d%d",&m,&n,&p);
    ((m>0&&n>0&&p>0)&&(m+n>p)&&(n+p>m)&&(p+m>n))?printf("Forms a triangle"):
    printf("Doesnot form a triangle");
}