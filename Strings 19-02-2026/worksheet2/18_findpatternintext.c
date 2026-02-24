//Implement Rabin-Karp algorithm using hashing to find patterns in a text efficiently.
#include <stdio.h>
#include <string.h>
#include <math.h>
#define d 256 
#define q 101 
long long hashValue(char* str,int length) 
{
    long long hash=0;
    for (int i=0;i<length;i++)
    {
        hash=(hash*d+str[i])%q;
    }
    return hash;
}
void rabinKarpSearch(char* text, char* pattern) 
{
    int n = strlen(text);
    int m = strlen(pattern);
    if (m>n) 
    {
        printf("Pattern length is greater than text length.\n");
        return;
    }
    long long patternHash=hashValue(pattern, m);  
    long long textHash=hashValue(text, m);        
    long long h = 1;
    for (int i = 0; i < m - 1; i++) 
    {
        h=(h*d)%q;
    }
    for (int i=0;i<=n-m;i++) 
    {
        if (patternHash==textHash) 
        {
            if (strncmp(text+i,pattern,m)==0) 
            {
                printf("Pattern found at index %d\n",i);
            }
        }
        if (i<n-m) 
        {
            textHash = (d *(textHash-text[i]*h)+text[i+m])%q;
            if (textHash<0) 
            {
                textHash+=q;  
            }
        }
    }
}
int main()
{
    char text[]="abcxabcdabcdabcy";
    char pattern[]="abcdabcy";
    printf("Searching for pattern \"%s\" in text \"%s\":\n",pattern,text);
    rabinKarpSearch(text,pattern);
    return 0;
}