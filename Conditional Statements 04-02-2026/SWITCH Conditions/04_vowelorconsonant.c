//Check if a character is a vowel or consonant using switch
#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    ch=(ch>='A'&&ch<='Z')?ch+32:ch;
    switch(ch) 
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch>='a'&&ch<='z')) 
            {
                printf("%c is a consonant.\n",ch);
            } 
            else 
            {
                printf("%c is not an alphabet letter.\n",ch);
            }
    }
    return 0;
}
