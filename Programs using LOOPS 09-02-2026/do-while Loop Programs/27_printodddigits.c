//Print odd digits only
#include<stdio.h>
int main()
{
    int num,rem;
    printf("num=");
    scanf("%d",&num);
    do{
        rem=num%10;
        if(rem%2!=0)
        {
            printf("%d",rem);
        }
        num=num/10;
    }while(num!=0);
}