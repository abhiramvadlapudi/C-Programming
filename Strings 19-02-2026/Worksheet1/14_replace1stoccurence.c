//Replace first occurrence of a character with another in a string
#include <stdio.h>
int main() 
{
    char str[100],target,replacement;
    int i=0;
    printf("Enter a string:");
    scanf("%[^\n]s",str);  
    printf("Enter the target character: ");
    scanf(" %c",&target);
    printf("Enter the replacement character: ");
    scanf(" %c",&replacement);  
    while (str[i]!='\0') 
    {
        if (str[i]==target) 
        {
            str[i]=replacement;  
            break;
        }
        i++;
    }
    printf("String after replacement: %s\n",str);
    return 0;
}
