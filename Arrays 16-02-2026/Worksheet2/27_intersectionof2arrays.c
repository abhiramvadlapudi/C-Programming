//Find the intersection of 2 arrays
#include <stdio.h>

int main() 
{
    int a[100],b[100],intersection[100];
    int n1,n2,i,j,k=0;
    int isDuplicate;
    printf("Enter number of elements in first array: ");
    scanf("%d",&n1);
    printf("Enter elements of first array:\n");
    for(i=0;i<n1;i++) 
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d",&n2);
    printf("Enter elements of second array:\n");
    for(i=0;i<n2;i++) 
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++) 
    {
        for(j=0;j<n2;j++) 
        {
            if(a[i] == b[j]) 
            {
                isDuplicate = 0;
                for(int x=0;x<k;x++) 
                {
                    if(intersection[x]==a[i]) 
                    {
                        isDuplicate = 1;
                        break;
                    }
                }
                if(!isDuplicate) 
                {
                    intersection[k++]=a[i];
                }
            }
        }
    }
    if(k==0) 
    {
        printf("No common elements.\n");
    } 
    else 
    {
        printf("Intersection of the two arrays:\n");
        for(i=0;i<k;i++) 
        {
            printf("%d ",intersection[i]);
        }
    }
    return 0;
}