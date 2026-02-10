//Print pattern of squares
#include <stdio.h>
int main() 
{
    int i=1;      
    int count=1;
    int num;
    printf("num=");
    scanf("%d",&num);  
    while(count<=num) 
    {
        int j=0;  
        while(j<count) 
        {
            printf("%d",i*i);  
            i++;              
            j++;              
        }
        printf("\n");  
        count++;     
    }
    return 0;
}