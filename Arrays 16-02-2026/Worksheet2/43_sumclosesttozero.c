//Find 2 numbers their sum is closest to zero
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), (int (*)(const void*, const void*))strcmp);
    int left = 0, right = n - 1;
    int closestSum = arr[left] + arr[right];
    int minLeft = left, minRight = right;
    while (left < right) 
    {
        int sum = arr[left] + arr[right];
        if (abs(sum) < abs(closestSum)) 
        {
            closestSum = sum;
            minLeft = left;
            minRight = right;
        }
        if (sum < 0) 
        {
            left++;
        } 
        else 
        {
            right--;
        }
    }
    printf("The two elements whose sum is closest to zero are: %d and %d\n", arr[minLeft], arr[minRight]);
    printf("Their sum is: %d\n", closestSum);
    return 0;
}
