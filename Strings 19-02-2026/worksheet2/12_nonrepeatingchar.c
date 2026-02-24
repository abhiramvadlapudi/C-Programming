//Find the first non-repeating character in a string and print it
#include<stdio.h>
int main() 
{
    char str[100];
    int i,j,length=0;
    int count;
    int found=0;
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
    for (i=0;i<length;i++) 
    {
        count=0;
        for (j=0;j<length;j++) 
        {
            if (str[i]==str[j]) 
            {
                count++;
            }
        }
        if (count==1) 
        {
            printf("First non-repeating character:%c\n",str[i]);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No non-repeating character found.\n");
    }
    return 0;
}
