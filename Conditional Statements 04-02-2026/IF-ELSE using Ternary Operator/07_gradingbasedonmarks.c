//Classify student grade (A/B/C/D/Fail) based on marks
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    char grade = (marks >= 90) ? 'A' :
    (marks >= 75) ? 'B' :
    (marks >= 60) ? 'C' :
    (marks >= 50) ? 'D' : 'F';
    printf("The grade is: %c\n", grade);
    return 0;
}
