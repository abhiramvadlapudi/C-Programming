//Print numbers from N to 1
#include<stdio.h>
int main()
{
    int num;
    printf("num:");
    scanf("%d",&num);
    while(num>=1)
    {
        printf("%d",num);
        num--;
    }
}