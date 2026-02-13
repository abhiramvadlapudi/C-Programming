//Print characters from start letter to end letter
#include <stdio.h>
int main() 
{
    char start, end;
    printf("Enter the start letter: ");
    scanf(" %c", &start);
    printf("Enter the end letter: ");
    scanf(" %c", &end);
    if ((start<'a'||start>'z')&&(start<'A'||start>'Z')||(end<'a'||end>'z')&&(end<'A'||end>'Z')) 
    {
        printf("Please enter valid alphabetic characters.\n");
    }
    for(char ch=start;ch<=end;ch++) 
    {
        printf("%c",ch);
    }
    return 0;
}
