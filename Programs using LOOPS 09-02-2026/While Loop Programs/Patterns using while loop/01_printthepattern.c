//Print the following pattern
#include <stdio.h>
int main() 
{
    int i=1,j;
    while(i<=4) 
    {
        j=1;
        while(j<=i) 
        {
            printf("%c",'A'+j-1);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
