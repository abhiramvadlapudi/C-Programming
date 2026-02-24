//Print all permutations of a given string. All possible arrangements of characters should be printed.
#include<stdio.h>
void swap(char str[],int i,int j) 
{
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
void permute(char str[],int l,int r) 
{
    if (l==r) 
    {
        printf("%s\n",str);
    } 
    else 
    {
        for (int i=l;i<=r;i++) 
        {
            swap(str,l,i); 
            permute(str,l+1,r); 
            swap(str,l,i);
        }
    }
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int len=0;
    while (str[len]!='\0') 
    {
        len++;
    }
    if (str[len-1]=='\n') 
    {
        str[len-1] ='\0';
    }
    printf("All permutations of the string:\n");
    permute(str,0,len-1);
    return 0;
}