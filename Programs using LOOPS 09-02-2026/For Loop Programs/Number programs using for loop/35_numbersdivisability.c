//Numbers divisable by 3 and 5
#include <stdio.h>
int main() 
{
    int num;
    printf("num=");
    scanf("%d",&num);
    if(num%3==0&&num%5==0)
    {
        printf("%d is divisable by 3,5",num);
    }
    else
    {
        printf("%d is not divisable by 3,5",num);
    }
}
