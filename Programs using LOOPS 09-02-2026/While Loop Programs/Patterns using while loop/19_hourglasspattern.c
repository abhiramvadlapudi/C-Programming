//Print hourglass pattern
#include <stdio.h>
int main() 
{
    int i=0; 
    int n=4; 
    while (i<n) 
    {
        int j=0;
        while(j<i) 
        {
            printf(" ");
            j++;
        }
        j = 0;
        while(j<(n-i)) 
        {
            printf("*");
            j++;
        }
        printf("\n");  
        i++;
    }
    i=n-2;  
    while(i>=0) 
    {
        int j=0;
        while(j<i) 
        {
            printf(" ");
            j++;
        }
        j=0;
        while(j<(n-i)) 
        {
            printf("*");
            j++;
        }
        printf("\n");  
        i--;
    }
    return 0;
}