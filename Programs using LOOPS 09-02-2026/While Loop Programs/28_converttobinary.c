//Convert number to binary (no arrays)
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num==0) 
    {
        printf("0");
    } 
    else 
    {
        printf("Binary representation: ");
        while(num>0) 
        {
            printf("%d",num%2);
            num=num/2;
        }
    }
    printf("\n");
    return 0;
}
