//Find subarray with maximum sum (Kadane’s Algorithm)
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    int max_sum=arr[0];
    int current_sum=arr[0];
    for (int i=1;i<n;i++) 
    {
        current_sum=(current_sum+arr[i]>arr[i])? (current_sum+arr[i]):arr[i];
        if (current_sum>max_sum) 
        {
            max_sum=current_sum;
        }
    }
    printf("The maximum sum of a contiguous subarray is: %d\n", max_sum);
    return 0;
}
