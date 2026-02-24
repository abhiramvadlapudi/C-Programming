//Print all possible interleavings of two strings, preserving the relative order of characters in each string.
#include <stdio.h>
#include <string.h>
void printInterleavings(char* A,char* B,int i,int j,char* result,int k) 
{
    if (A[i]=='\0'&&B[j]=='\0') 
    {
        result[k]='\0';  
        printf("%s\n",result);
        return;
    }
    if (A[i]!='\0') 
    {
        result[k]=A[i]; 
        printInterleavings(A,B,i+1,j,result,k+1);  
    }
    if (B[j]!='\0') 
    {
        result[k]=B[j];  
        printInterleavings(A,B,i,j+1,result,k+1);  
    }
}
int main() 
{
    char A[]="abc";
    char B[]="def";
    int lenA=strlen(A);
    int lenB=stlen(B);
    char result[lenA+lenB+1];
    printf("All possible interleavings of A and B are:\n");
    printInterleavings(A,B,0,0,result,0);
    return 0;
}