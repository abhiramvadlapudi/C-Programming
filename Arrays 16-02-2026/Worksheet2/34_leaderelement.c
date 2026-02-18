//Find leader elements in the array
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    int maxFromRight=arr[n-1];
    printf("Leader elements:");
    printf("%d ",maxFromRight);
    for (int i=n-2;i>=0;i--)
    {
        if (arr[i]>maxFromRight) 
        {
            maxFromRight=arr[i];
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
    return 0;
}
