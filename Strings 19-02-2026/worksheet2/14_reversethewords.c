//Reverse the order of words in a sentence without reversing the words themselves.
#include<stdio.h>
int main() 
{
    char str[200];
    int i,length=0,start,end;
    printf("Enter a sentence: ");
    fgets(str,sizeof(str),stdin);
    while (str[length]!='\0')
    {
        if (str[length]=='\n') 
        {
            str[length]='\0';
            break;
        }
        length++;
    }
    printf("Sentence after reversing word order:\n");

    end=length-1;

    while(end>=0) 
    {
        while(end>=0&&str[end]==' ') 
        {
            end--;
        }
        if(end<0)
            break;
        start=end;
        while (start>=0&&str[start]!=' ') 
        {
            start--;
        }
        for(i=start+1;i<=end;i++) 
        {
            printf("%c",str[i]);
        }
        printf(" ");
        end=start-1;
    }
    return 0;
}