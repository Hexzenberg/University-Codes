/*Q5 7.12.21*/
#include <stdio.h>
int gcd(int n1, int n2)
{
    int t;
    t=n1%n2;
    return(n1%n2?t:gcd(n2,n1%n2));
}
int main()
{
    int a,b,g;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    g=(a>b?gcd(a,b):gcd(b,a));
    printf("The gcd of the two numbers is %d",g);
    return 0;
}