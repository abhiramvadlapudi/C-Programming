//Given two integers A and B, write a program to count the number of bits that need to be flipped to convert A into B.
#include<stdio.h>
int main() 
{
    int A,B;
    int xor_result,count=0;
    printf("Enter two integers A and B: ");
    scanf("%d%d",&A,&B);
    xor_result=A^B;
    while(xor_result) 
    {
        count+=xor_result&1;
        xor_result>>=1;
    }
    printf("The no of bits needed to be flipped to convert %d to %d is:%d\n",A,B,count);
    return 0;
}