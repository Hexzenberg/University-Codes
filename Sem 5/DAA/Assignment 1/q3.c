// Decimal to binary conversion in c using recursion
#include <stdio.h>
void dtob(int n, int *a, int *k)
{
    if (n > 0)
    {
        a[(*k)++] = n % 2;
        dtob(n / 2, a, k);
    }
}
int main()
{
    int n, k = 0;
    printf("Enter a decimal number:\n");
    scanf("%d", &n);
    int a[100];
    dtob(n, a, &k);
    printf("The binary equivalent is: ");
    for (int i = 0; i < k; i++)
        printf("%d", a[i]);
    return 0;
}