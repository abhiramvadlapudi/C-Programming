//Check whether a person is eligible for voting
#include<stdio.h>
int main()
{
    int age;
    printf("age=");
    scanf("%d",&age);
    (age>=18)?printf("Eligible to vote"):
    printf("Not eligible to vote");
}