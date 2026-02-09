//Convert a lowercase letter to uppercase (and vice‑versa) using switch
#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch (ch) 
    {
        case 'a': case 'b': case 'c': case 'd': case 'e': 
        case 'f': case 'g': case 'h': case 'i': case 'j': 
        case 'k': case 'l': case 'm': case 'n': case 'o': 
        case 'p': case 'q': case 'r': case 's': case 't': 
        case 'u': case 'v': case 'w': case 'x': case 'y': 
        case 'z':
            printf("Uppercase of %c is %c\n",ch,ch-32);
            break;

        case 'A': case 'B': case 'C': case 'D': case 'E': 
        case 'F': case 'G': case 'H': case 'I': case 'J': 
        case 'K': case 'L': case 'M': case 'N': case 'O': 
        case 'P': case 'Q': case 'R': case 'S': case 'T': 
        case 'U': case 'V': case 'W': case 'X': case 'Y': 
        case 'Z':
            printf("Lowercase of %c is %c\n",ch,ch+32);
            break;
        default:
            printf("Please enter an alphabetic character.\n");
            break;
    }
    return 0;
}
