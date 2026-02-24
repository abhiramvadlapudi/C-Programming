//Find lowest frequency character in a string
#include <stdio.h>
int main() 
{
    char str[100];
    int freq[256] = {0}; 
    int i;
    char minChar;
    int minFreq = 1000;  
    printf("Enter a string: ");
    scanf("%s", str);  
    for (i = 0; str[i] != '\0'; i++) 
    {
        freq[str[i]]++;  
    }
    for (i = 0; i < 256; i++) 
    {
        if (freq[i] > 0 && freq[i] < minFreq) 
        {
            minFreq = freq[i];  
            minChar = i;        
        }
    }
    printf("Lowest frequency character: '%c' with frequency %d\n", minChar, minFreq);

    return 0;
}
