// Sum of n numbers using recursion in c
#include <stdio.h>
int sum(int *a, int n)
{
    if (n > 0)
        return a[n - 1] + sum(a, n - 1);
    return 0;
}
int main()
{
    int n;
    printf("Enter the number of numbers:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int s = sum(a, n);
    printf("The sum of n numbers: %d", s);
}