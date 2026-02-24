//Remove from the first string all characters that appear in the second string
#include <stdio.h>
int main() 
{
    char str1[100],str2[100],result[100];
    int i,j,k=0;
    int found;
    printf("Enter the first string:");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the second string:");
    fgets(str2,sizeof(str2),stdin);
    for(i=0;str1[i]!='\0';i++) 
    {
        found=0;
        for(j=0;str2[j]!='\0';j++) 
        {
            if(str1[i]==str2[j]) 
            {
                found=1;
                break;
            }
        }
        if(found==0&&str1[i]!='\n') 
        {
            result[k]=str1[i];
            k++;
        }
    }
    result[k]='\0';
    printf("Resultant string after removal:%s",result);
    return 0;
}