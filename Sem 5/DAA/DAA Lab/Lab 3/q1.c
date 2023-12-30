// 9/8/23
// WAP to implement Binary search to give the leftmost appearnce of an element
#include <stdio.h>
int binarySearch(int *a, int n, int k, int *c)
{
    int l = 0, h = n - 1, result = -1;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (a[m] == k)
        {
            result = m;
            h = m - 1;
            (*c)++;
        }
        else if (a[m] < k)
        {
            l = m + 1;
            (*c)++;
        }
        else
        {
            h = m - 1;
            (*c)++;
        }
    }
    return result;
}
int main()
{
    int n, k, c = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the key to search:\n");
    scanf("%d", &k);
    int index = binarySearch(a, n, k, &c);
    printf(index == -1 ? "Element not found\n" : "%d found at index %d, number of comparisons made are %d\n", k, index, c);
    return 0;
}