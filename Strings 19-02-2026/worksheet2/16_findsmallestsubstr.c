//Find the smallest substring in a string containing all characters of another string.
#include <stdio.h>
#include <string.h>
#include <limits.h>
#define NO_OF_CHARS 256
void findSmallestSubstring(char *S,char *T) 
{
    int m=strlen(T);
    int n=strlen(S);
    if (m>n) 
    {
        printf("No valid substring exists.\n");
        return;
    }
    int countT[NO_OF_CHARS]={0};
    for (int i=0;i<m;i++) 
    {
        countT[T[i]]++;
    }
    int countS[NO_OF_CHARS]={0};
    int start=0,minLength=INT_MAX,minStart=-1;
    int count=0; 
    for (int end=0;end<n;end++) 
    {
        countS[S[end]]++;
        if (countS[S[end]]<=countT[S[end]]) 
        {
            count++;
        }
        while (count==m) 
        {
            if (end-start+1<minLength) 
            {
                minLength=end-start+1;
                minStart=start;
            }
            countS[S[start]]--;
            if(countS[S[start]]<countT[S[start]]) 
            {
                count--;
            }
            start++;
        }
    }
    if (minStart==-1) 
    {
        printf("No valid substring exists.\n");
    } 
    else 
    {
        printf("Smallest substring: ");
        for (int i=minStart;i<minStart+minLength;i++) 
        {
            printf("%c",S[i]);
        }
        printf("\n");
    }
}
int main() {
    char S[]="this is a test string";
    char T[]="tist";
    findSmallestSubstring(S,T);
    return 0;
}