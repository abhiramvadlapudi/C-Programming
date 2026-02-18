//Find longest consecutive sequence
#include <stdio.h>
#include <stdlib.h>
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
    qsort(arr, n, sizeof(int), (int (*)(const void*, const void*))strcmp);
    int longestSeqLength = 1;
    int currentSeqLength = 1;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] == arr[i - 1] + 1) 
        {
            currentSeqLength++;
        } 
        else if (arr[i] != arr[i - 1]) 
        {
            if (currentSeqLength > longestSeqLength) 
            {
                longestSeqLength = currentSeqLength;
            }
            currentSeqLength = 1; 
        }
    }
    if (currentSeqLength > longestSeqLength) 
    {
        longestSeqLength = currentSeqLength;
    }
    printf("Length of the longest consecutive elements sequence: %d\n", longestSeqLength);
    return 0;
}