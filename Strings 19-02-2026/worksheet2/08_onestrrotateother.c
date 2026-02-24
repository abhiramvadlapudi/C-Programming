//Check if one string is a rotation of another, i.e., one string can be shifted to get the other.
#include<stdio.h>
int main() 
{
    char str1[100],str2[100];
    int i,j,length1=0,length2=0,isRotation=0;
    printf("Enter the first string: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the second string: ");
    fgets(str2,sizeof(str2),stdin);
    while(str1[length1]!='\0') 
    {
        length1++;
    }
    while(str2[length2]!='\0') 
    {
        length2++;
    }
    if (str1[length1-1]=='\n') str1[length1-1]='\0';
    if (str2[length2-1] =='\n') str2[length2-1]='\0';
    if (length1 == length2) 
    {
        char str1Double[200];
        for (i=0;i<length1;i++) 
        {
            str1Double[i]=str1[i]; 
        }
        for (i=0;i<length1;i++) 
        {
            str1Double[length1+i]=str1[i];
        }
        for (i=0;i<length1;i++) 
        {
            isRotation=1;
            for (j=0;j<length2;j++) 
            {
                if (str1Double[i+j]!=str2[j]) 
                {
                    isRotation=0;
                    break;
                }
            }
            if(isRotation) 
            {
                break;
            }
        }
    }
    if(isRotation) 
    {
        printf("The second string is a rotation of the first string.\n");
    } 
    else 
    {
        printf("The second string is NOT a rotation of the first string.\n");
    }
    return 0;
}