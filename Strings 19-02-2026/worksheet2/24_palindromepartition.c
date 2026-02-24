//Partition a string into the minimum number of palindromic substrings (Palindrome Partitioning).
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_LENGTH 100
bool isPalindrome(char *str,int i,int j)
{
    while (i<j) 
    {
        if(str[i]!=str[j]) 
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int minPalPartitions(char *str) 
{
    int n=strlen(str);
    if (n<=1) 
    {
        return 0;
    }
    int dp[n];
    for (int i=0;i<n;i++) 
    {
        dp[i]=i;
    }
    for (int i=1;i<n;i++) 
    {
        if (isPalindrome(str,0,i)) 
        {
            dp[i]=0;
        } 
        else 
        {
            for(int j=i;j>=1;j--) 
            {
                if (isPalindrome(str,j,i)) 
                {
                    dp[i]=(dp[i]<dp[j-1]+1)?dp[i]:dp[j-1]+1;
                }
            }
        }
    }
    return dp[n-1];
}
int main() 
{
    char str[MAX_LENGTH];
    printf("Enter the string: ");
    scanf("%s",str);
    int result=minPalPartitions(str);
    printf("Minimum number of palindromic partitions:%d\n",result);
    return 0;
}