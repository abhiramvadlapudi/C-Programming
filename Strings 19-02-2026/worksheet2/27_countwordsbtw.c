//Count the number of words in a string separated by spaces.
#include<stdio.h>
#include<ctype.h>
int countWords(const char *str) 
{
    int count=0;
    int inWord=0;
    for (int i=0;str[i]!='\0';i++) 
    {
        if (isspace(str[i])) 
        {
            inWord=0;
        } 
        else if(!inWord) 
        {
            count++;
            inWord=1; 
        }
    }
    return count;
}
int main() 
{
    char str[]="Hello world";
    printf("Number of words: %d\n", countWords(str));
    return 0;
}