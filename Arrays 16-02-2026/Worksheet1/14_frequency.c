//Frequency of elements
#include <stdio.h>

int main() {
    int arr[100], size, i, j, count;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements of the array: ", size);
    for(i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Frequency of each element in the array:\n");
    for(i = 0; i < size; i++) 
    {
        count = 1;  
        if (arr[i] != -1) 
        {
            for(j = i + 1; j < size; j++) 
            {
                if(arr[i] == arr[j]) 
                {
                    count++;
                    arr[j] = -1;  
                }
            }
            printf("%d occurs %d time(s)\n", arr[i], count);
        }
    }
    return 0;
}
