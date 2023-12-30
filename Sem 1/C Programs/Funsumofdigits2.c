/*Q2 7.12.21*/
#include <stdio.h>
int sod(int n)
{
    return(n/10?n%10+sod(n/10):n);
}
int main ()
{
    int a,d;
    printf("Enter a number:");
    scanf("%d",&a);
    d=sod(a);
    printf("The sum of the digits of %d is %d",a,d);
    return 0;
}