/*Q3 8.12.21*/
#include <stdio.h>
#include <math.h>
int power(int, int);
int main()
{
    int n,m;
    printf("Enter the number and the power:");
    scanf("%d%d",&n,&m);
    printf("%d raised to the power %d is %d",n,m,power(n,m));
}
int power(int a,int b)
{
    int c;
    c=pow(a,b);
    return c;
}