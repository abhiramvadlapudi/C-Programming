//Sort an array of strings in alphabetical order. The sorted array should list strings from A to Z.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[10][100],temp[100];
    int n,i,j;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();  
    printf("Enter strings:\n");
    for(i=0;i<n;i++) 
    {
        fgets(str[i],sizeof(str[i]),stdin);
    }
    for(i=0;i<n-1;i++) 
    {
        for(j=i+1;j<n;j++) {
            if(strcmp(str[i],str[j]) > 0) 
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nStrings in alphabetical order:\n");
    for(i=0;i<n;i++) 
    {
        printf("%s",str[i]);
    }
    return 0;
}