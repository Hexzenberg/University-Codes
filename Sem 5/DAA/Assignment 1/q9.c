// Find gcd of two numbers using recursion in c program
#include <stdio.h>
int gcd(int n, int m)
{
    if (m == 0)
        return n;
    return gcd(m, n % m);
}
int main()
{
    int n, m;
    printf("Enter the first number:\n");
    scanf("%d", &n);
    printf("Enter the second number:\n");
    scanf("%d", &m);
    printf("The GCD of the two numbers is: %d", gcd(n, m));
    return 0;
}