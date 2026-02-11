//Find largest digit in number
#include<stdio.h>
int main()
{
    int num,rem,largest;
    printf("num=");
    scanf("%d",&num);
    largest=0;
    do{
        rem=num%10;
        if(rem>largest)
        {
            largest=rem;
        }
        num=num/10;
    }while(num!=0);
    printf("largest digit is %d",largest);
}