//Print continuous number pattern
#include <stdio.h>
int main() 
{
    int i=1;      
    int count=1;  
    while(count<=4) 
    {
        int j=0;  
        while(j<count) 
        {
            printf("%d",i);  
            i++;              
            j++;              
        }
        printf("\n");  
        count++;     
    }
    return 0;
}