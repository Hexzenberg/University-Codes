// Given an array of size n find the suffix sum of the array
#include <stdio.h>
void sufSum(int *a, int n)
{
    for (int i = n - 2; i >= 0; i--)
        a[i] += a[i + 1];
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    sufSum(a, 6);
    for (int i = 0; i < 6; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}