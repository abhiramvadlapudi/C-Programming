//Check if array is subset to another or not
#include<stdio.h>
int main()
{
    int m,n,a1[10],a2[10],i,j,issubset=1;
    printf("m=");
    scanf("%d",&m); 
    printf("a1[m]=");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("n=");
    scanf("%d",&n);
    printf("a2[n]=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0;i<n;i++)
    {
        int found=0;
        for(j=0;j<m;j++)
        {
            if(a2[i]==a1[j])
            {
                found=1;
                break;
            }
        }
        if(!found)
        {
            issubset=0;
            break;
        }
    }
    if(issubset)
    {
        printf("Array2 is subset of array1");
    }
    else
    {
        printf("Array2 is not subset of array1");
    }
}