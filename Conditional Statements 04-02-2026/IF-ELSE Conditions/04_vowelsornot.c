//Check if a character is vowel or consonant using if-else.
#include<stdio.h>
int main()
{
    char ch;
    printf("ch=");
    scanf("%c",&ch);
    if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
    {
        printf("ch is vowel");
    }
    else
    {
        printf("ch is consonant");
    }
}