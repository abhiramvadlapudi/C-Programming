//Find sum of all even numbers from 1 to N
#include <stdio.h>
int main() 
{
    int N,i,sum;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    i=1;
    sum=0;
    do{
        if(i%2==0)
        {
            sum+=i;
        }
        i++;
    }while(i<=N);
    printf("%d",sum);
}
