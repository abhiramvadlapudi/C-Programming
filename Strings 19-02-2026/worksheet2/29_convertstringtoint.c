//Convert a numeric string to an integer without using built-in functions.
#include<stdio.h>
int stringToInt(char *str) 
{
    int result=0;
    int i=0;
    int sign=1;
    if (str[i]=='-') 
    {
        sign=-1;
        i++;  
    }
    while (str[i]!='\0') 
    {
        if (str[i]<'0'||str[i]>'9') 
        {
            printf("Invalid character detected: %c\n", str[i]);
            return -1;  
        }
        result=result*10+(str[i]-'0');
        i++;
    }
    return sign*result;  
}
int main()
{
    char str[100];
    printf("Enter a numeric string: ");
    gets(str);  
    int num=stringToInt(str);
    if (num!=-1) 
    {
        printf("The integer value is: %d\n",num);
    }
    return 0;
}