//Find the union of 2 arrays
#include <stdio.h>
int main() 
{
    int a[100],b[100],unionArr[200];
    int n1,n2,i,j,k=0;
    int isDuplicate;
    printf("Enter number of elements in first array: ");
    scanf("%d",&n1);
    printf("Enter elements of first array:\n");
    for(i=0;i<n1;i++) 
    {
        scanf("%d",&a[i]);
        unionArr[k++]=a[i];  
    }
    printf("Enter number of elements in second array: ");
    scanf("%d",&n2);
    printf("Enter elements of second array:\n");
    for(i=0;i<n2;i++) 
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n2;i++) 
    {
        isDuplicate=0;
        for(j=0;j<k;j++)
        {
            if(b[i]==unionArr[j]) 
            {
                isDuplicate=1;
                break;
            }
        }
        if(!isDuplicate) 
        {
            unionArr[k++]=b[i];
        }
    }
    printf("Union of the two arrays:\n");
    for(i=0;i<k;i++) 
    {
        printf("%d ",unionArr[i]);
    }
    return 0;
}
