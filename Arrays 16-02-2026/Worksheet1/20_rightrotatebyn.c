//Right rotate array by n
#include <stdio.h>
int main() 
{
    int arr[100], n, i, j, temp, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements of the array: ", size);
    for(i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &n);
    n = n % size;
    for(i = 0; i < n; i++) 
    {
        temp = arr[size - 1]; 
        for(j = size - 1; j > 0; j--) 
        {
            arr[j] = arr[j - 1]; 
        }
        arr[0] = temp;  
    }
    printf("Array after rotation: ");
    for(i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
