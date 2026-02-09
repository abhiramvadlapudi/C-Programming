//Check if three sides can form a triangle using only if
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
            }
        }
    }
}