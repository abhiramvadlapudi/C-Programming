//Print numbers from N to 1
#include <stdio.h>
int main() 
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    do {
        printf("%d ",N);
        N--;
    } while (N>=1);
}
