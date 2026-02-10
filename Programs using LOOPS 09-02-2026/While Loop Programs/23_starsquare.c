//Print NxN star square
#include <stdio.h>
int main() 
{
    int n;
    printf("n=");
    scanf("%d", &n);
    int i=1;
    while(i<=n) 
    {
        int j=1;
        while(j<=n) 
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
