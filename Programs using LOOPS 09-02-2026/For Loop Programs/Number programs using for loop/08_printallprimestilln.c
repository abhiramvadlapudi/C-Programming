//Print all prime numbers up to N
#include <stdio.h>
int main() 
{
    int N, i, j, isPrime;
    printf("Enter a positive integer N:");
    scanf("%d",&N);
    printf("Prime numbers up to %d are:\n",N);
    for (i=2;i<=N;i++) 
    {
        isPrime=1;
        for(j=2;j*j<=i;j++) 
        {
            if (i%j==0) 
            {
                isPrime=0; 
                break;
            }
        }
        if (isPrime) 
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
