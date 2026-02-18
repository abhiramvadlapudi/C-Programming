//Find the majority element
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    if (n==0) 
    {
        printf("No majority element.\n");
        return 0;
    }
    int arr[n];
    printf("Enter %d elements for the array: ", n);
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    int majorityCandidate=arr[0],count=1;
    for (int i=1;i<n;i++) 
    {
        if (arr[i]==majorityCandidate) 
        {
            count++;
        } 
        else 
        {
            count--;
            if (count==0) 
            {
                majorityCandidate=arr[i];
                count=1;
            }
        }
    }
    count=0;
    for (int i=0;i<n;i++) 
    {
        if (arr[i]==majorityCandidate) {
            count++;
        }
    }
    if (count>n/2) 
    {
        printf("The majority element is: %d\n", majorityCandidate);
    } 
    else 
    {
        printf("No majority element exists.\n");
    }
    return 0;
}

