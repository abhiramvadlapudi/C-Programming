//Group a list of words so that anagrams are together.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_WORD_LENGTH 100
int compareStrings(const void *a,const void *b) 
{
    return strcmp(*(const char **)a,*(const char **)b);
}
void sortString(char *str) 
{
    int len=strlen(str);
    qsort(str,len,sizeof(char),compareStrings);
}
void groupAnagrams(char *words[],int n) 
{
    char *hashTable[100][MAX_WORD_LENGTH];
    int hashTableSize[100]={0};
    int groupIndex=0;
    for (int i=0;i<n;i++) 
    {
        char sortedWord[MAX_WORD_LENGTH];
        strcpy(sortedWord,words[i]);
        sortString(sortedWord);
        int found=-1;
        for (int j=0;j<groupIndex;j++) 
        {
            if (strcmp(sortedWord,hashTable[j][0])==0) 
            {
                found=j;
                break;
            }
        }
        if (found==-1) 
        {
            found=groupIndex;
            groupIndex++;
            strcpy(hashTable[found][0],sortedWord); 
        }
        hashTable[found][hashTableSize[found]+1]=words[i];
        hashTableSize[found]++;
    }
    for(int i=0;i<groupIndex;i++) 
    {
        for(int j=1;j<=hashTableSize[i];j++) 
        {
            printf("%s ",hashTable[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    char *words[]={"cat", "tac", "act", "dog"};
    int n = sizeof(words)/sizeof(words[0]);
    printf("Grouped Anagrams:\n");
    groupAnagrams(words,n);
    return 0;
}