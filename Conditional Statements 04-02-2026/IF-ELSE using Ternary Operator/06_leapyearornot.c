//Check if a year is a leap year
#include <stdio.h>
int main() 
{
    int year;
    printf("Year: ");
    scanf("%d", &year);
    ((year%4==0&&year%100!= 0)||(year%400==0)) 
    ? printf("%d is a Leap Year\n", year) 
    : printf("%d is not a Leap Year\n", year);
    return 0;
}
