//Check if a string is an interleaving of two other strings, i.e., formed by merging them maintaining order.
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isInterleaving(char* A, char* B, char* C) 
{
    int m=strlen(A);
    int n=strlen(B);
    int p=strlen(C);
    if (m+n!=p) 
    {
        return false;
    }
    bool dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    dp[0][0]=true;
    for(int j=1;j<=n;j++) 
    {
        dp[0][j]=dp[0][j-1]&&(B[j-1]==C[j-1]);
    }
    for(int i=1;i<=m;i++) 
    {
        dp[i][0]=dp[i-1][0]&&(A[i-1]==C[i-1]);
    }
    for(int i=1;i<=m;i++) 
    {
        for(int j=1;j<=n;j++) 
        {
            dp[i][j]=(dp[i-1][j]&&A[i-1]==C[i+j-1])||(dp[i][j-1]&& B[j-1]==C[i+j-1]);
        }
    }
    return dp[m][n];
}
int main() 
{
    char A[]="abc";
    char B[]="def";
    char C[]="adbcef";
    if(isInterleaving(A,B,C)) 
    {
        printf("Yes, C is an interleaving of A and B.\n");
    } 
    else
    {
        printf("No, C is not an interleaving of A and B.\n");
    }
    return 0;
}