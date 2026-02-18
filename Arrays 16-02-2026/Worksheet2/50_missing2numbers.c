//Find the missing 2 numbers from the array
#include <stdio.h>
int main() 
{
    int n, sum, sum_of_squares, actual_sum, actual_sum_of_squares;
    int i, missing_sum, missing_square_sum, x, y;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array (numbers from 1 to %d, with 2 missing):\n", n, n + 2);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    sum = (n + 2) * (n + 3) / 2; 
    sum_of_squares = (n + 2) * (n + 3) * (2 * (n + 2) + 1) / 6;
    actual_sum = 0;
    actual_sum_of_squares = 0;
    for(i = 0; i < n; i++) 
    {
        actual_sum += arr[i];
        actual_sum_of_squares += arr[i] * arr[i];
    }
    missing_sum = sum - actual_sum;
    missing_square_sum = sum_of_squares - actual_sum_of_squares;
    int temp = missing_sum * missing_sum - missing_square_sum;
    int product_of_missing_numbers = temp / 2;
    for(i = 1; i <= missing_sum; i++) 
    {
        if(i * (missing_sum - i) == product_of_missing_numbers) 
        {
            x = i;
            y = missing_sum - i;
            break;
        }
    }
    printf("The two missing numbers are: %d and %d\n", x, y);

    return 0;
}
