/* 24.11.21 Q1-Find the reverse of a number and cheak weather the original number is a palindrome or not.*/
#include<stdio.h>
int main()
{
    int n,rev=0,a,org;
    printf("enter the number: ");
    scanf("%d",&n);
    org=n;
    do
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }while(n>0);
    if(org==rev)
        printf("\nthe number you entered is a palindrome");
    else
        printf("\nthe number is not a palindrome");
        return 0;

}