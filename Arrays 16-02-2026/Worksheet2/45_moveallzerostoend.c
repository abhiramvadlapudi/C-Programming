//Move all zeros to end of the array
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int lastNonZeroIndex = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != 0) 
        {
            arr[lastNonZeroIndex] = arr[i];
            if (lastNonZeroIndex != i) 
            {
                arr[i] = 0;  
            }
            lastNonZeroIndex++;
        }
    }
    printf("Array after moving zeros to the end: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
