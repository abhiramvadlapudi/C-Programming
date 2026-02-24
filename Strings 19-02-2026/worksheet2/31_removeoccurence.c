//Remove all occurrences of character 'b' and substring "ac" from a string.
#include <stdio.h>
#include <string.h>
void removeOccurrences(char *str, char target_char, const char *target_substring) 
{
    int i=0,j=0;
    int len=strlen(str);
    int sub_len=strlen(target_substring);
    while(i<len) 
    {
        if(i<=len-sub_len&&str[i]==target_substring[0]&&str[i + 1]==target_substring[1]) 
        {
            i+=sub_len;  
        }
        else if (str[i]==target_char) 
        {
            i++;
        }
        else 
        {
            str[j++]=str[i++];
        }
    }
    str[j]='\0';
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str);  
    removeOccurrences(str,'b',"ac");
    printf("Modified string: %s\n",str);
    return 0;
}