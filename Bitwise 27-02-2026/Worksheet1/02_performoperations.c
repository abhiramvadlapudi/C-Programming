//Write a program to perform the following operations on the Least and Most Significant Bits (LSB/MSB) of a given integer
//Set the LSB to 1
#include<stdio.h>
int main()
{
    int num;
    printf("Num=");
    scanf("%d",&num);
    num|=1;
    printf("Set=%d",num);
}

//Clear the LSB
#include<stdio.h>
int main()
{
    int num;
    printf("Num=");
    scanf("%d",&num);
    num&=~1;
    printf("Clear=%d",num);
}

//Toggle the LSB
#include<stdio.h>
int main()
{
    int num;
    printf("Num=");
    scanf("%d",&num);
    num^=1;
    printf("Toggle=%d",num);
}

//Set the MSB to 1
#include<stdio.h>
int main()
{
    int num;
    printf("Num=");
    scanf("%d",&num);
    num|=(1U<<(sizeof(num)*8-1));
    printf("Set MSB=%d",num);
}

//Clear the MSB
#include<stdio.h>
int main()
{
    int num;
    printf("Num=");
    scanf("%d",&num);
    num&=~(1U<<(sizeof(num)*8-1));
    printf("Clear MSB=%d",num);
}

//Toggle the MSB
#include<stdio.h>
int main()
{
    int num;
    printf("Num=");
    scanf("%d",&num);
    num^=(1U<<(sizeof(num)*8-1));
    printf("Clear MSB=%d",num);
}

//Set a specific bit to 1
#include<stdio.h>
int main()
{
    int num,pos;
    printf("Num=");
    scanf("%d",&num);
    printf("pos=");
    scanf("%d",&pos);
    num|=(1<<pos);
    printf("Set pos=%d",num);
}

//Clear a specific bit
#include<stdio.h>
int main()
{
    int num,pos;
    printf("Num=");
    scanf("%d",&num);
    printf("pos=");
    scanf("%d",&pos);
    num&=~(1<<pos);
    printf("Clear pos=%d",num);
}

//Toggle a specific bit
#include<stdio.h>
int main()
{
    int num,pos;
    printf("Num=");
    scanf("%d",&num);
    printf("pos=");
    scanf("%d",&pos);
    num^=(1<<pos);
    printf("Toggle pos=%d",num);
}