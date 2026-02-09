//Check if a character is vowel or consonant
#include<stdio.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    ch=(ch>='A'&&ch<='Z')?ch+32:ch;
    (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') 
    ?printf("Vowel\n")
    :printf("Consonant\n");
    return 0;
}
