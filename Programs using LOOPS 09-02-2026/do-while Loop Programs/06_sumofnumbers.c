//Find sum of first N natural numbers
#include <stdio.h>
int main() 
{
    int N,i,sum;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    i=1;
    sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=N);
    printf("%d",sum);
}
