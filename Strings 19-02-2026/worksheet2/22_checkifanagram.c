//Check if two strings are anagrams of each other by comparing character counts.
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool areAnagrams(char* str1, char* str2) 
{
    if (strlen(str1)!=strlen(str2)) 
    {
        return false;
    }
    int count[256]={0}; 
    for (int i=0;str1[i]!='\0';i++) 
    {
        count[(int)str1[i]]++;
    }
    for (int i=0;str2[i]!='\0';i++) 
    {
        count[(int)str2[i]]--;
    }
    for (int i=0;i<256;i++) 
    {
        if (count[i] != 0) 
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    char str1[]="listen";
    char str2[]="silent";
    if (areAnagrams(str1, str2)) 
    {
        printf("The strings are anagrams.\n");
    } 
    else 
    {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}