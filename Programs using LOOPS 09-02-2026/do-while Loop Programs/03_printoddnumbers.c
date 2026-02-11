//Print odd numbers from 1 to N.
#include <stdio.h>
int main() 
{
    int N,i=1;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    do 
    {
        if(i%2!=0) 
        {
            printf("%d ",i);
        }
        i++;
    } while(i<=N);
    return 0;
}
