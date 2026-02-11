//Count number of digits in a number
#include <stdio.h>
int main() 
{
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num==0) 
    {
        count=1;
    }
    else
    {
        do {
            num=num/10; 
            count++; 
        } while(num!=0); 
    }
    printf("The number of digits is: %d\n",count);
    return 0;
}

