//Count prime numbers and display them
#include<stdio.h>
#include<math.h>
int is_prime(int num) 
{
    if(num<=1) return 0;  
    for(int i=2;i<=sqrt(num);i++) 
    {
        if(num%i==0) 
        {
            return 0;
        }
    }
    return 1;  
}
int main() 
{
    int a[10],n,i,count=0;
    printf("n=");
    scanf("%d", &n);
    printf("a[n]=");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) 
    {
        if(is_prime(a[i])) 
        {
            printf("%d ",a[i]);
            count++;
        }
    }
    printf("\ncount=%d",count);
    return 0;
}
