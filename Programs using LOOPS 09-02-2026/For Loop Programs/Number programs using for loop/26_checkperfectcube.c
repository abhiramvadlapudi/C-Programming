//Check if number is perfect cube
#include<stdio.h>
int main() 
{
    int num,i;
    int isPerfectCube=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<0) 
    {
        printf("Negative numbers cannot be perfect cubes.\n");
        return 0;
    }
    for (i=0;i*i*i<=num;i++) 
    {
        if(i*i*i==num) 
        {
            isPerfectCube = 1;
            break;
        }
    }
    if (isPerfectCube)
        printf("%d is a Perfect Cube.\n",num);
    else
        printf("%d is not a Perfect Cube.\n",num);
    return 0;
}
