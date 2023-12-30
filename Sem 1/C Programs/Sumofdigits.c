/* 17.11.21 Q8- WAP to calculae the sum of digits of a given number*/
#include<stdio.h>
void main()
{
    int n,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    printf("The sum of digits is %d",s);
}