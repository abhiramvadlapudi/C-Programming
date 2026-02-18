//Find the maximum difference between two elements such that larger element appears after the smaller
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
    int minElement=arr[0];
    int maxDiff=arr[1]-arr[0];

    for (int i=1;i<n;i++) 
    {
        if (arr[i]-minElement>maxDiff) 
        {
            maxDiff=arr[i]-minElement;
        }
        if (arr[i]<minElement) 
        {
            minElement=arr[i];
        }
    }
    printf("The maximum difference is: %d\n",maxDiff);
    return 0;
}
