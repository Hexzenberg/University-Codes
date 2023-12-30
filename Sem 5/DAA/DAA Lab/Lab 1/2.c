// Given an array of size n find the prefix sum of the array
#include <stdio.h>

void presum(int *a, int n)
{
    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    presum(a, 6);
    for (int i = 0; i < 6; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}