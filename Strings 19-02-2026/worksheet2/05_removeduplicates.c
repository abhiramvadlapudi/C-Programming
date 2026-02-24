//Remove all duplicate characters from a string, keeping only the first occurrence of each character.
#include<stdio.h>
int main() 
{
    char str[100];
    int i,j,k;
    int length=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while(str[length]!='\0') 
    {
        length++;
    }
    for (i=0;i<length;i++) 
    {
        for (j=i+1;j<length; ) 
        {
            if (str[i]==str[j]) 
            {
                for (k=j;k<length;k++) 
                {
                    str[k]=str[k + 1];
                }
                length--;
            } 
            else 
            {
                j++;
            }
        }
    }
    printf("String after removing duplicates: %s", str);
    return 0;
}
