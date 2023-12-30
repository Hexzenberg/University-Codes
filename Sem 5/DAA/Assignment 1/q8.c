// Find factorial of a number using recursion in c program
#include <stdio.h>
int fact(int n)
{
    return n == 0 || n == 1 ? 1 : n * fact(n - 1);
}
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("The factorial of the number is: %d", fact(n));
    return 0;
}