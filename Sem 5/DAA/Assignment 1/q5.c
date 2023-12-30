// C program for fibonacci series using recursion
#include <stdio.h>
int fib(int n)
{
    return (n == 0 ? 0 : (n == 1 ? 1 : fib(n - 1) + fib(n - 2)));
}
void fibo(int n)
{
    int k = 0;
    while (k < n)
    {
        printf("%d ", fib(k));
        k++;
    }
}
int main()
{
    int n;
    printf("Enter the number of fibonacci elements you want to extract:\n");
    scanf("%d", &n);
    printf("The fibonacci series till %d index is:\n", n);
    fibo(n);
    return 0;
}