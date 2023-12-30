// Write a program to find out the largest difference between two elements A[i] and A[j] ( A[j]-A[i]) of the array of integers A in O(n)
// time such that j > i. For example: Let A is an array of integers:
// int[] a = { 10, 3, 6, 8, 9, 4, 3 };
// if i=1, j=3, then diff = a[j] – a[i] = 8 – 3 = 5
// if i=4, j=6, then diff = a[j] – a[i] = 3 – 9 = -6
// if i=1, j=4, then diff = a[j] – a[i] = 9 – 3 = 6
// 6 is the largest number between all the differences, that is the answer. Find the time complexity of your program.
#include <stdio.h>
int largestDiff(int *a, int n)
{
    int maxDiff = a[1] - a[0], min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] - min > maxDiff)
            maxDiff = a[i] - min;
        if (a[i] < min)
            min = a[i];
    }
    return maxDiff;
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
    printf("The largest difference between two elements where j > i is: %d\n", largestDiff(a, n));
    return 0;
}