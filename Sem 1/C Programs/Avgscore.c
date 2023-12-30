/* 16.11.21 Q2- WAP to enter the score of 11 cricket players and find the average score*/
#include<stdio.h>
int main()
{
    int i=1,n=0,s;
    again:
    printf("Enter the score of player %d:",i);
    scanf("%d",&s);
    n=n+s;
    i++;
    if(i<=11)
    goto again;
    float avr=n/11;
    printf("\nThe average is:%f",avr);
    return 0;
}