//print charecter pyramid
#include <stdio.h>
int main() 
{
    char ch='A';  
    int count=1;  
    while(count<=4) 
    {
        int j=0;  
        while(j<count) 
        {
            printf("%c",ch);  
            j++;            
        }
        printf("\n"); 
        ch++;          
        count++;
    }
    return 0;
}