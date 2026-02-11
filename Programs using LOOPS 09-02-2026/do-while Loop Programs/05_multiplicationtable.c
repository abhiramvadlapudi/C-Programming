//Print multiplication table of a number
#include <stdio.h>
int main() 
{
    int N,i;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    i=1;
    do{
        printf("%d ",N*i);
        i++;
    }while(i<=10);
}
