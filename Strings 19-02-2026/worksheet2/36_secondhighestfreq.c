//Find the character with the second highest frequency in a string.
#include<stdio.h>
#include<string.h>
int main() 
{
    char str[100];
    int freq[256]={0};
    int i,highest=0,second_highest=0;
    char highest_char,second_highest_char;
    printf("Enter a string: ");
    gets(str);  
    for(i=0;str[i]!='\0';i++) 
    {
        freq[(int)str[i]]++;  
    }
    for(i=0;i<256;i++) 
    {
        if (freq[i]>highest) 
        {
            second_highest=highest;
            second_highest_char=highest_char;
            highest=freq[i];
            highest_char=(char)i;
        } 
        else if (freq[i]>second_highest&&freq[i]<highest) 
        {
            second_highest=freq[i];
            second_highest_char=(char)i;
        }
    }
    if (second_highest>0) 
    {
        printf("Character with the second highest frequency: '%c'\n", second_highest_char);
    } 
    else 
    {
        printf("No second-highest frequency found.\n");
    }
    return 0;
}