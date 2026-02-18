//Find frequency of each element
#include <stdio.h>
int main() 
{
    int n,count;
    printf("Enter the size of the array (n): ");
    scanf("%d",&n);
    int arr[n];  
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) 
    {
        count = 1; 
        if (arr[i]!=-1) 
        {  
            for(int j=i+1;j<n;j++) 
            {
                if(arr[i]==arr[j]) 
                {
                    count++;
                    arr[j]=-1;  
                }
            }
            printf("Element %d appears %d times\n",arr[i],count);
        }
    }
    return 0;
}
