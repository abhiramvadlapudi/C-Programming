// Print x pattern using star
#include <stdio.h>
int main() 
{
    int i=1,j,spaces;
    while(i<=3) 
    {
        j=1;
        while(j<i) 
        {
            printf(" ");
            j++;
        }
        printf("*");
        if (i < 3) 
        {
            j = 1;
            while (j<=(5-2*i)) 
            {
                printf(" ");
                j++;
            }
            printf("*");
        }
        printf("\n");
        i++;
    }
    i=2;  
    while (i>=1) 
    {
        j=1;
        while(j<i) 
        {
            printf(" ");
            j++;
        }
        printf("*");
        if(i<3) 
        {
            j=1;
            while(j<=(5-2*i)) 
            {
                printf(" ");
                j++;
            }
            printf("*");
        }
        printf("\n");
        i--;
    }
    return 0;
}