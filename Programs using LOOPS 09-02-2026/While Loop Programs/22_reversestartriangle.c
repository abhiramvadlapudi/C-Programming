//Print reverse star triangle
#include <stdio.h>
int main() 
{
    int i=4;
    while (i>=1) 
    {
        int j=1;
        while(j<=i) 
        {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}