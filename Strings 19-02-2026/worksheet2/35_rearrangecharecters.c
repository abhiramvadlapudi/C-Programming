//Rearrange characters in a string so that the same characters are at least d distance apart.
#include<stdio.h>
#include<string.h>
#define MAX_CHAR 256
int main() 
{
    char str[100];
    int freq[MAX_CHAR]={0};
    int i,j,k,d;
    printf("Enter a string: ");
    gets(str); 
    printf("Enter the minimum distance (d): ");
    scanf("%d",&d);
    int len=strlen(str);
    for(i=0;i<len;i++) 
    {
        freq[(int)str[i]]++;
    }
    char result[len+1];  
    int pos[len];stdin;
    for(i=0;i<len;i++) 
    {
        pos[i]=-1;
    }
    int index=0;
    for(i=0;i<MAX_CHAR;i++) 
    {
        while(freq[i]>0) 
        {
            if(index+d<=len) 
            {
                result[index]=(char)i;
                freq[i]--;
                index+=d;  
            } 
            else 
            {
                index=0;
            }
        }
    }
    result[len]='\0';  
    printf("Rearranged string: %s\n", result);
    return 0;
}