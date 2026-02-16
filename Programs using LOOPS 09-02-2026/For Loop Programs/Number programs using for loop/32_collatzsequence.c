//Collatz sequence
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Collatz sequence for %d: ",num);
    for (;num!=1;) 
    {
        printf("%d, ",num);  
        if (num%2==0) 
        {
            num=num/2;  
        } 
        else 
        {
            num=3*num+1; 
        }
    }
    printf("1\n");
    return 0;
}
