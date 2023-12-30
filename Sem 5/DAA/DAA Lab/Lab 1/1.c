// 26/7/23
// WAP to find the second smallest and second largest element stored in an array of integers.
#include <stdio.h>
#include <limits.h>

int max(int *a, int n)
{
    int m = 0, e, l = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[m] < a[i])
            m = i;
    }
    e = a[m], a[m] = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[l] < a[i])
            l = i;
    }
    a[m] = e;
    return a[l];
}

int min(int *a, int n)
{
    int m = 0, e, l = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[m] > a[i])
        {
            m = i;
        }
    }
    e = a[m], a[m] = INT_MAX;
    l = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[l] > a[i])
            l = i;
    }
    a[m] = e;
    return a[l];
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    printf("The 2nd largest element of the array:%d\nThe 2nd smallest element of the array:%d\n", max(a, 6), min(a, 6));
    return 0;
}