//Rotate array by k positions
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
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;  
    if (k != 0) {
        int temp[k];
        for (int i = 0; i < k; i++) 
        {
            temp[i] = arr[n - k + i];
        }
        for (int i = n - 1; i >= k; i--) 
        {
            arr[i] = arr[i - k];
        }
        for (int i = 0; i < k; i++) 
        {
            arr[i] = temp[i];
        }
    }
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
