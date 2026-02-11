//Find smallest digit in number
#include<stdio.h>
int main()
{
    int num,rem,smallest;
    printf("num=");
    scanf("%d",&num);
    smallest=9;
    do{
        rem=num%10;
        if(rem<smallest)
        {
            smallest=rem;
        }
        num=num/10;
    }while(num!=0);
    printf("smallest digit is %d",smallest);
}