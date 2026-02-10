//Print in decreasing alphabetical pattern
#include <stdio.h>
int main() 
{
    char ch;
    int i=4;
    while(i>=1)
    {
        ch='A'+i-1;
        int j=1;
        while(j<=i) 
        {
            printf("%c",ch);
            ch--;  
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}