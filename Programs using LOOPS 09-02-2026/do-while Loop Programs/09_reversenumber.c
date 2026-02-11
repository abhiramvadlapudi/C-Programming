//reverse a number
#include <stdio.h>
int main() 
{
    int num,reversed=0,remainder;
    printf("Enter a number:");
    scanf("%d",&num);
    do {
        remainder=num%10;         
        reversed=reversed*10+remainder; 
        num=num/10;               
    } while(num!=0);                
    printf("The reversed number is: %d\n",reversed);
    return 0;
}
