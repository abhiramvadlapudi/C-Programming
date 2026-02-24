//Implement naive pattern searching to find all occurrences of a pattern in a text
#include <stdio.h>
#include <string.h>
void naivePatternSearch(char *text,char *pattern) 
{
    int n=strlen(text);
    int m=strlen(pattern);
    for (int i=0;i<=n-m;i++) 
    {
        int j;
        for (j=0;j<m;j++) 
        {
            if (text[i+j]!=pattern[j]) 
            {
                break; 
            }
        }
        if (j==m) 
        {
            printf("Pattern found at index %d\n",i);
        }
    }
}
int main() 
{
    char text[] = "hello world";
    char pattern[] = "lo";
    printf("Occurrences of pattern\"%s\"in text\"%s\":\n",pattern,text);
    naivePatternSearch(text,pattern);
    return 0;
}