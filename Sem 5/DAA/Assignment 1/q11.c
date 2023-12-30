// Binary search through recursion using c program
#include <stdio.h>
int bs(int *a, int l, int h, int k)
{
    int m = (h + l) / 2;
    if (a[m] == k)
        return m;
    else if (a[m] > k)
        return bs(a, l, m - 1, k);
    else if (a[m] < k)
        return bs(a, m + 1, h, k);
    return 0;
}
int main()
{
    int n, k, r;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the element to search:\n");
    scanf("%d", &k);
    r = bs(a, 0, n - 1, k);
    printf(r == 0 ? "The element was not found or the entered values are not sorted." : "The element was found at %d position.", r + 1);
    return 0;
}