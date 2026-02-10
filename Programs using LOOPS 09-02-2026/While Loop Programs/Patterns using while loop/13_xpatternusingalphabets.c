//print x pattern using alphabets
#include <stdio.h>

int main() 
{
    int i=1,j,spaces;
    char ch;
    while (i<=3) 
    {
        j=1;
        while (j<i) 
        {
            printf(" ");
            j++;
        }
        ch='A'+(i - 1);  
        printf("%c",ch);
        if (i!=3) 
        {
            j=1;
            while(j<=(5-2*i)) 
            {
                printf(" ");
                j++;
            }
            printf("%c",ch);
        }
        printf("\n");
        i++;
    }
    i=2;  
    while(i>=1) 
    {
        j=1;
        while(j<i) 
        {
            printf(" ");
            j++;
        }
        ch='A'+(i-1);
        printf("%c",ch);
        if (i!=3) 
        {
            j=1;
            while(j<=(5-2*i)) 
            {
                printf(" ");
                j++;
            }
            printf("%c",ch);
        }
        printf("\n");
        i--;
    }
    return 0;
}
