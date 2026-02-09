//Check whether a number is prime or not
#include <stdio.h>
#include <math.h>
int main() 
{
    int num,i;
    printf("num: ");
    scanf("%d",&num);
    printf("The number is %s prime.\n", 
    (num<=1)?"not a": 
    (num==2)?"a": 
    ((num%2==0)?"not a": 
    ((int)sqrt(num)+1)?"not a":"a"));
    return 0;
}
