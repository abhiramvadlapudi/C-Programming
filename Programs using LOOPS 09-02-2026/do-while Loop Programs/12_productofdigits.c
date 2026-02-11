//Product of digits of a number
#include <stdio.h>
int main() 
{
    int num,rem,product=1;
    printf("num=");
    scanf("%d",&num);
    do{
        rem=num%10;
        product=product*rem;
        num=num/10;
    }while(num!=0);
    printf("Product=%d",product);
}
