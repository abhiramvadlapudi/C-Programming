//Find highest frequency character in a string
#include <stdio.h>
int main() 
{
    char str[100];
    int freq[256]={0};
    int i;
    char maxChar;
    int maxFreq=0;

    printf("Enter a string: ");
    scanf("%s",str);  
    for (i=0;str[i]!='\0';i++) 
    {
        freq[str[i]]++;
    }
    for (i=0;i<256;i++) 
    {
        if (freq[i]>maxFreq) 
        {
            maxFreq=freq[i];  
            maxChar=i;
        }
    }
    printf("Highest frequency character: '%c' with frequency %d\n", maxChar,maxFreq);
    return 0;
}
