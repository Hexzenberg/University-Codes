// Using recursion in c find the largest element in an array
#include <stdio.h>
int max(int *a, int n, int *m)
{
    if (n > 0)
    {
        *m = (*m > a[n - 1] ? *m : a[n - 1]);
        return max(a, n - 1, m);
    }
    return *m;
}
int main()
{
    int n, m = 0;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max(a, n, &m);
    printf("The maximum element is: %d", m);
    return 0;
}