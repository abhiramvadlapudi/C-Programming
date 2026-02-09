//Check whether three sides form a triangle using if-else.
#include<stdio.h>
int main()
{
    int m,n,p;
    printf("m,n,p=");
    scanf("%d%d%d",&m,&n,&p);
    if(m>0&&n>0&&p>0)
    {
        if(m+n>p)
        {
            if(n+p>m)
            {
                if(p+m>n)
                {
                    printf("m,n,p form a triangle");
                }
                else
                {
                    printf("m,n,p doesnt form a triangle");
                }
            }
        }
    }
}