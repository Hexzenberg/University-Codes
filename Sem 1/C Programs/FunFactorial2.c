/*Q3 7.12.21*/
#include <stdio.h>
int factorial(int n)
{
    return(n==1?1:n*factorial(n-1));
}
int main ()
{
    int a,f;
    printf("Enter the number:");
    scanf("%d",&a);
    f=factorial(a);
    printf("The factorial of the number is %d",f);
    return 0;
}