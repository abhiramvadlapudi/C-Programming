//Check if it is in palindrome or not
#include<stdio.h>
int main()
{
    int m,a[10],i,ispalindrome=1;
    printf("m=");
    scanf("%d",&m); 
    printf("a[m]=");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m/2;i++)
    {
        if(a[i]!=a[m-i-1])
        {
            ispalindrome=0;
            break;
        }
    }
    if(ispalindrome)
    {
        printf("The array is palindrome");
    }
    else
    {
        printf("The array is not palindrome");
    }
}