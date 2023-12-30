// C Program to find the Nth Fibonacci Number using Recursion
#include <stdio.h>
int fib(int n)
{
    return (n == 0 ? 0 : (n == 1 ? 1 : fib(n - 1) + fib(n - 2)));
}
int main()
{
    int n;
    printf("Enter the desired position of the fibonacci series:\n");
    scanf("%d", &n);
    printf("The number at %d position of the fibonacci series is: %d", n, fib(n - 1));
    return 0;
}