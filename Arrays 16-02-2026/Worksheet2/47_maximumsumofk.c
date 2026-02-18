//Find maximum sum of k consecutive elements
#include <stdio.h>
int main() 
{
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of consecutive elements (k): ");
    scanf("%d", &k);
    if (k > n) {
        printf("k should not be greater than the size of the array\n");
        return 1;
    }
    int currentSum = 0;
    for (int i = 0; i < k; i++) 
    {
        currentSum += arr[i];
    }
    int maxSum = currentSum;
    for (int i = k; i < n; i++) 
    {
        currentSum = currentSum - arr[i - k] + arr[i];

        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }
    printf("Maximum sum of %d consecutive elements: %d\n", k, maxSum);
    return 0;
}
