//Print the smallest of three numbers
#include<stdio.h>
int main()
{
    int m,n,p;
    printf("m,n,p=");
    scanf("%d%d%d",&m,&n,&p);
    (m<n&&m<p)?printf("m is smallest"):
    (m>n&&n<p)?printf("n is smallest"):
    printf("p is smallest");
}
