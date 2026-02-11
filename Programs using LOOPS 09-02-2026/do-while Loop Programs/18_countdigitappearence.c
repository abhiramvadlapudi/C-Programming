//Count how many times a digit appears
#include<stdio.h>
int main()
{
    int num,digit,rem,count=0;
    printf("num=");
    scanf("%d",&num);
    printf("Digit=");
    scanf("%d",&digit);
    do{
        rem=num%10;
        if(rem==digit)
        {
            count++;
        }
        num=num/10;
    }while(num!=0);
    printf("Digit appears %d times",count);
}