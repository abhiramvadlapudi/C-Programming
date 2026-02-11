//Factorial of a number
#include <stdio.h>
int main() 
{
    int num,fact=1;
    printf("num=");
    scanf("%d",&num);
    do{
        fact*=num;
        num--;
        
    }while(num!=0);
    printf("factorial=%d",fact);
}
