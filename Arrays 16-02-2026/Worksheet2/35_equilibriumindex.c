// Find equilibrium index
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
    int totalSum=0;
    for (int i=0;i<n;i++) 
    {
        totalSum+=arr[i];
    }
    int leftSum=0;
    for (int i=0;i<n;i++) 
    {
        totalSum-=arr[i];
        if (leftSum==totalSum) 
        {
            printf("Equilibrium index is: %d\n",i);
            return 0;
        }
        leftSum+=arr[i];
    }
    printf("No equilibrium index found.\n");
    return 0;
}
