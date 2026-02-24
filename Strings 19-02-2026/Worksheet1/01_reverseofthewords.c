//Reverse order of words in a given string
#include <stdio.h>
int main() 
{
    char str[100],temp[100];
    int i=0,j=0,start,end;
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    while(str[i]!='\0') {
        while(str[i]==' '&&str[i]!='\0') 
        {
            i++;
        }
        start=i;
        while(str[i]!=' '&&str[i]!='\0') 
        {
            i++;
        }
        end=i-1;
        for (j=start;j<=end;j++) 
        {
            temp[j-start]=str[j];
        }
        temp[j-start]='\0';  
        if(start!=0) 
        {
            printf(" ");
        }
        printf("%s",temp);
    }
    printf("\n");
    return 0;
}
