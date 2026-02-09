//Check if an input character is lowercase or uppercase
#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);
    printf("The character is %s.\n",
    (ch>='A'&&ch<='Z')?"uppercase":
    (ch>='a'&&ch<='z')?"lowercase" :
    "neither uppercase nor lowercase");
    return 0;
}
