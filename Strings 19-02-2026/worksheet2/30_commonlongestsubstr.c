//Find the longest substring common to two given strings.
#include <stdio.h>
#include <string.h>
void longestCommonSubstring(char*A,char*B) 
{
    int m=strlen(A);
    int n=strlen(B);
    int dp[m+1][n+1];
    int maxLen=0;
    int endIndex=0;
    for (int i=0;i<=m;i++) 
    {
        for (int j=0;j<=n;j++) 
        {
            dp[i][j]=0;
        }
    }
    for (int i=1;i<=m;i++) 
    {
        for (int j=1;j<=n;j++) 
        {
            if(A[i-1]==B[j-1]) 
            {
                dp[i][j]=dp[i-1][j-1]+1;

                if (dp[i][j]>maxLen) 
                {
                    maxLen=dp[i][j];
                    endIndex=i;
                }
            } 
            else 
            {
                dp[i][j]=0;
            }
        }
    }
    if (maxLen==0) 
    {
        printf("No common substring found.\n");
    } 
    else 
    {
        printf("Longest Common Substring: ");
        for (int i=endIndex-maxLen;i<endIndex;i++) 
        {
            printf("%c",A[i]);
        }
    }
}
int main()
{
    char A[]="abcdxyz";
    char B[]="xyzabcd";
    longestCommonSubstring(A,B);
    return 0;
}