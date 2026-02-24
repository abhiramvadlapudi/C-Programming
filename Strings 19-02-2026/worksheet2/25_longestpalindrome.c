//Find the longest palindromic substring inside a given string.
#include<stdio.h>
#include<string.h>
int expandAroundCenter(char*str,int left,int right) 
{
    while(left>=0&&right<strlen(str)&&str[left]==str[right]) 
    {
        left--;
        right++;
    }
    return right-left-1; 
}
char* longestPalindrome(char* s) 
{
    int n = strlen(s);
    if (n == 0) return "";
    int start=0; 
    int maxLength=1; 
    for (int i=0;i<n;i++) 
    {
        int len1=expandAroundCenter(s,i,i);
        int len2=expandAroundCenter(s,i,i+1);
        int len=(len1>len2)?len1:len2;
        if(len>maxLength) 
        {
            maxLength=len;
            start=i-(len-1)/2; 
        }
    }
    char* result=(char*)malloc((maxLength+1)*sizeof(char));
    strncpy(result,s+start,maxLength);
    result[maxLength]='\0';
    return result;
}
int main() 
{
    char s[]="babad";
    char* result=longestPalindrome(s);
    printf("Longest Palindromic Substring: %s\n", result);
    free(result); 
    return 0;
}