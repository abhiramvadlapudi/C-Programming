//Reverse a string without using library functions
#include<stdio.h>
int main()
{
    char str[100];
    int i,length=0;
    char temp;
    printf("Enter a string:");
    scanf("%s",str);
    while (str[length]!='\0')
    {
        length++;
    }
    for(i=0;i<length/2;i++)
    {
        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
    printf("reversed string=%s",str);
}