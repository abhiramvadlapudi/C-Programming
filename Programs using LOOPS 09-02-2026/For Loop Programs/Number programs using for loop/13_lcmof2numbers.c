//Find LCM of 2 numbers
#include <stdio.h>
int main() 
{
    int n1,n2,max,lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2); 
    max=(n1>n2)?n1:n2; 
    for(lcm=max;;lcm+=max) 
    { 
        if(lcm%n1==0&&lcm%n2==0) 
        { 
            printf("The LCM of %d and %d is %d\n",n1,n2,lcm);
            break;
        }
    }
    return 0;
}

