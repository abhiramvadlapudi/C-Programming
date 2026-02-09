#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch (1) 
    {
        case 1:
            if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')) 
            {
                printf("'%c' is an alphabet.\n",ch);
            } 
            else if (ch>='0'&&ch<='9') 
            {
                printf("'%c' is a digit.\n",ch);
            } 
            else 
            {
                printf("'%c' is a symbol.\n",ch);
            }
            break;
    }
    return 0;
}
