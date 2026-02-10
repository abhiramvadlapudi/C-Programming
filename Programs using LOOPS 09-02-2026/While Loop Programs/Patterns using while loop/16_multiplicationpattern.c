//print multiplication pattern
#include<stdio.h>
int main() 
{
    int count=1;
    int num;
    printf("num=");
    scanf("%d",&num);  
    while(count<=num) 
    {
        int j=1;  
        while(j<=count) 
        {
            printf("%d",j*count);  
            j++;  
        }
        printf("\n");  
        count++;  
    }
    return 0;
}
