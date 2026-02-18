//Find the minimum and maximum element
#include <stdio.h>

int main() 
{
    int arr[100], size, i;
    int min, max;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements of the array: ", size);
    for(i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for(i = 1; i < size; i++) 
    {
        if(arr[i] < min) 
        {
            min = arr[i];  
        }
        if(arr[i] > max) 
        {
            max = arr[i]; 
        }
    }
    printf("Minimum element in the array: %d\n", min);
    printf("Maximum element in the array: %d\n", max);
    return 0;
}
