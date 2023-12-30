// Find power of a number using recursion using c program
#include <stdio.h>
int power(int n, int m)
{
    return m == 0 ? 1 : n * power(n, m - 1);
}
int main()
{
    int n, m;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Enter the exponent value:\n");
    scanf("%d", &m);
    printf("%d raised to the power of %d is %d", n, m, power(n, m));
    return 0;
}