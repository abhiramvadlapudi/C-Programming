//Implement Boyer-Moore pattern searching algorithm with bad character heuristic to search a pattern in a text
#include <stdio.h>
#include <string.h>
#define NO_OF_CHARS 256 
void badCharacterHeuristic(char *pattern,int m,int badCharTable[]) {
    for (int i=0;i<NO_OF_CHARS;i++) 
    {
        badCharTable[i]=-1;
    }
    for (int i=0;i<m;i++) 
    {
        badCharTable[(int)pattern[i]]=i;
    }
}
void boyerMooreSearch(char *text,char *pattern) 
{
    int m=strlen(pattern);
    int n=strlen(text);
    int badCharTable[NO_OF_CHARS]; 
    badCharacterHeuristic(pattern,m,badCharTable);
    int s = 0;
    while(s<=(n-m)) 
    {
        int j=m-1;
        while(j>=0&&pattern[j]==text[s+j]) 
        {
            j--;
        }
        if (j<0) 
        {
            printf("Pattern found at index %d\n",s);
            s+=(s+m<n)?m-badCharTable[text[s+m]]:1;
        } 
        else
        {
            s+=(j-badCharTable[text[s+j]]>0)?j-badCharTable[text[s+j]]:1;
        }
    }
}
int main() 
{
    char text[]="here is a simple example";
    char pattern[]="example";
    boyerMooreSearch(text, pattern);
    return 0;
}