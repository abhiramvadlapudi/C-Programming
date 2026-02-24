//Remove all repeated charecters from a given string
#include <stdio.h>
int main() 
{
    char str[100];
    int i, j, k;
    int isRepeated;
    printf("Enter a string: ");
    scanf("%s",str);  
    for (i=0;str[i]!='\0';i++) 
    {
        isRepeated = 0;
        for (j=0;j<i;j++) 
        {
            if (str[i]==str[j]) 
            {
                isRepeated=1;  
                break;  
            }
        }
        if (isRepeated==0) 
        {
            str[k]=str[i];
            k++;
        }
    }
    str[k]='\0';
    printf("String after removing repeated characters: %s\n", str);
    return 0;
}
