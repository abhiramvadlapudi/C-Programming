//Rearrange positive and negitive numbers
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
    int pos[n], neg[n];
    int posIndex = 0, negIndex = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] >= 0) 
        {
            pos[posIndex++] = arr[i];
        } 
        else 
        {
            neg[negIndex++] = arr[i];
        }
    }
    int i = 0, j = 0, k = 0;
    while (i < posIndex && j < negIndex) 
    {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }
    while (i < posIndex) 
    {
        arr[k++] = pos[i++];
    }
    while (j < negIndex) 
    {
        arr[k++] = neg[j++];
    }
    printf("Array after rearranging: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
