//Print alphabet increasing order
#include <stdio.h>
int main() 
{
    char ch='A';
    int num;
    printf("num=");
    scanf("%d",&num);  
    int count=1;  
    while(count<=num) 
    {
        int j=0;  
        while(j<count) 
        {
            printf("%c",ch);  
            ch++;              
            j++;              
        }
        printf("\n");  
        count++;      
    }
    return 0;
}
