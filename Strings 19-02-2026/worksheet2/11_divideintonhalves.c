//Divide a string into N equal parts and print each part separately.
#include <stdio.h>
int main() 
{
    char str[200];
    int i,j,length=0,n,partLength;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while (str[length]!='\0') 
    {
        if (str[length]=='\n') 
        {
            str[length]='\0';
            break;
        }
        length++;
    }
    printf("Enter number of parts: ");
    scanf("%d",&n);
    if (length%n!=0) 
    {
        printf("String cannot be divided into %d equal parts.\n", n);
        return 0;
    }
    partLength=length/n;
    printf("The string divided into %d equal parts:\n", n);
    for (i=0;i<n;i++) 
    {
        for(j=i*partLength;j<(i+1)*partLength;j++) 
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}
