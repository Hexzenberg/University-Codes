// C Program to find the Biggest Number in an Array of Numbers using Recursion
#include <stdio.h>
void max(int *a, int n, int *m)
{
    if (n > 0)
    {
        if (a[n - 1] > *m)
            (*m) = a[n - 1];
        max(a, n - 1, m);
    }
}
int main()
{
    int n, m = 0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max(a, n, &m);
    printf("The max element of the array is: %d", m);
    return 0;
}