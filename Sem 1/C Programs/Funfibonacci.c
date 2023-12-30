/*Q4 7.12.21*/
#include <stdio.h>
int fibonacci(int n)
{
    return(n==1||n==2?1:fibonacci(n-1)+fibonacci(n-2));
}
int main ()
{
    int a,f;
    printf("Enter the number of the term:");
    scanf("%d",&a);
    f=fibonacci(a-1);
    printf("The fibonacci term %d is %d",a,f);
    return 0;
}