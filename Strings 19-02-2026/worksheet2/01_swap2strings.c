//Swap the contents of two strings without using any extra temporary string variables. The strings' values should be exchanged completely.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="Hello";
    char str2[]="World";
    int i;
    if (strlen(str1)!=strlen(str2)) 
    {
        printf("Strings must be of equal length.\n");
        return 0;
    }
    for (i=0;str1[i]!='\0';i++) 
    {
        str1[i]=str1[i]^str2[i];
        str2[i]=str1[i]^str2[i];
        str1[i]=str1[i]^str2[i];
    }
    printf("After swapping:\n");
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);
    return 0;
}