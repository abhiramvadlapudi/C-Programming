//print hollow square pattern
#include <stdio.h>
int main() 
{
    int i=1,j;
    while(i<=5) 
    {
        j=1;
        while(j<=5) 
        {
            if(i==1||i==5||j==1||j==5) 
            {
                printf("*");
            } else {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
