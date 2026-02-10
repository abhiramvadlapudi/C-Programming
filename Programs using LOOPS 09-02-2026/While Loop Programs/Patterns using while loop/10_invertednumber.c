//Print inverted number pattern
#include <stdio.h>
int main() 
{
    int rows;
    printf("rows=");
    scanf("%d",&rows);
    while(rows>=1) 
    {
        int num=rows;  
        while(num>=1) 
        {
            printf("%d",num);
            num--;  
        }
        printf("\n");  
        rows--;  
    }
    return 0;
}
