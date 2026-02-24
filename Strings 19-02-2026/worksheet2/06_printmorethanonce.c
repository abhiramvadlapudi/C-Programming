//Print all characters that occur more than once in a string
#include <stdio.h>
int main() 
{
    char str[100];
    int i,j,length=0;
    int foundDuplicate;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    while(str[length]!='\0') 
    {
        length++;
    }
    printf("Characters that occur more than once:\n");
    for(i=0;i<length;i++) 
    {
        foundDuplicate=0;
        for(j=0;j<i;j++) 
        {
            if(str[i]==str[j]) 
            {
                foundDuplicate=1;
                break;
            }
        }
        if(foundDuplicate == 0) 
        {
            int count=0;
            for(j=0;j<length;j++) 
            {
                if(str[i]==str[j]&&str[i]!='\n') 
                {
                    count++;
                }
            }
            if(count>1) 
            {
                printf("%c\n",str[i]);
            }
        }
    }
    return 0;
}