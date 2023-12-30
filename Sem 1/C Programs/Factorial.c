/* 17.11.21 Q6- WAp to calculate the factorial of a given number*/

#include<stdio.h>
int main()
{
    int i,f=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)f*=i;
    printf("Factorial of %d is:%d",n,f);
    return 0;
}