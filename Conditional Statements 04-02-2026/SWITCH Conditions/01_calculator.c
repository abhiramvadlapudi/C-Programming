//Build a basic calculator (+, -, *, /) using switch.
#include<stdio.h>
int main()
{
    int m,n,x;
    printf("m,n=");
    scanf("%d%d",&m,&n);
    int o=getchar();
    char p;
    printf("p=");
    scanf("%c",&p);
    switch(p)
    {
        case '+' :
        {
            x=m+n;
            printf("Result:%d",x);
            break;
        }
        case '-' :
        {
            x=m-n;
            printf("Result:%d",x);
            break;
        }
        case '*' :
        {
            x=m*n;
            printf("Result:%d",x);
            break;
        }
        case '/' :
        {
            if(n!=0)
            {
                x=m/n;
                printf("Result:%d",x);
            }
            else
            {
                printf("not valid");
            }
            break;
        }
        default:
        {
            printf("Invalid operater");
            break;
        }
    }
}