//Find the length of the longest substring with no repeating characters.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int longestUniqueSubstringLength(char* str) 
{
    int n = strlen(str);
    int lastIndex[256];  
    for (int i = 0; i < 256; i++) 
    {
        lastIndex[i] = -1;
    }
    int maxLength=0;  
    int start=0;      
    for (int end=0;end<n;end++) 
    {
        char currentChar=str[end];
        if(lastIndex[currentChar]>=start) 
        {
            start=lastIndex[currentChar]+1;
        }
        lastIndex[currentChar]=end;
        maxLength=(end-start+1)>maxLength?(end-start+1):maxLength;
    }
    return maxLength;
}
int main() 
{
    char str[]="abcabcbb";
    int result=longestUniqueSubstringLength(str);
    printf("Length of the longest substring with no repeating characters: %d\n",result);
    return 0;
}
