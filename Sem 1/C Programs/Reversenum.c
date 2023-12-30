/* 17.11.21 Q5 Reverse of the number*/
#include<stdio.h>
int main()
{
    int n,i,r=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        i=n%10;  
        r=r*10+i;
        n/=10;
    }
    printf("The reverse of the number is:%d",r);
    return 0;
}