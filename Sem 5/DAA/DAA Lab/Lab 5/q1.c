// Write a C program to find the sum of contiguous sub-array within a one dimensional (1-D) array of numbers which has the largest sum.
// Find the time complexity of your program.
// 23/08/23
#include <stdio.h>
int maxSum(int *a, int n)
{
    int max = a[0], curmax = a[0];
    for (int i = 0; i < n; i++)
    {
        curmax = (curmax + a[i] > a[i]) ? curmax + a[i] : a[i];
        max = (curmax > max) ? curmax : max;
    }
    return max;
}
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The max sum of contiguous sub array is: %d\n", maxSum(a, n));
    return 0;
}
