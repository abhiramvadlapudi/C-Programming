//print right angled star pattern
#include <stdio.h>
int main() 
{
    int i=1,j;
    while(i<=4) 
    {
        j=1;
        while(j<=4-i) 
        {
            printf(" ");
            j++;
        }
        j=1;
        while(j<=i) 
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
