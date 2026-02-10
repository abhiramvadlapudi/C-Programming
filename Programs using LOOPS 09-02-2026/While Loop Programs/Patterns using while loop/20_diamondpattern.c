//Print diamond pattern
#include <stdio.h>
int main() 
{
    int n=3;  
    int i=1;  
    while (i<=n) 
    {
        int j=0;
        while(j<(n-i)) 
        {
            printf(" ");
            j++;
        }
        j=1;
        while (j<=i) 
        {
            printf("%d",j);
            j++;
        }
        j=i-1;
        while(j>=1) 
        {
            printf("%d",j);
            j--;
        }

        printf("\n");  
        i++;
    }
    i=n-1; 
    while (i>=1)
    {
        int j = 0;
        while(j<(n-i))
        {
            printf(" ");
            j++;
        }
        j=1;
        while (j<=i) 
        {
            printf("%d",j);
            j++;
        }
        j=i-1;
        while(j>=1) 
        {
            printf("%d",j);
            j--;
        }
        printf("\n");  
        i--;
    }
    return 0;
}
