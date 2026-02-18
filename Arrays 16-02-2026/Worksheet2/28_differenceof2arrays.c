//Find the difference of 2 arrays
#include <stdio.h>
int main() 
{
    int n1,n2;
    printf("Enter the size of the first array: ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter %d elements for the first array: ",n1);
    for (int i=0;i<n1;i++) 
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter %d elements for the second array: ",n2);
    for (int i=0;i<n2;i++) 
    {
        scanf("%d",&arr2[i]);
    }
    printf("Elements in the first array but not in the second array: ");
    for (int i=0;i<n1;i++) 
    {
        int isPresent=0;
        for (int j=0;j<n2;j++) 
        {
            if (arr1[i]==arr2[j]) 
            {
                isPresent=1;
                break;
            }
        }
        if (!isPresent) 
        {
            printf("%d ",arr1[i]);
        }
    }
    return 0;
}