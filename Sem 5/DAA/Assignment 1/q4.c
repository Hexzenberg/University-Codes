// Multiplication using recursion
#include <stdio.h>
void mul(int *a, int n, int *b, int m, int *c, int *t)
{
    if (m > 0)
    {
        int k = n - 1, l = 10;
        while (k >= 0)
        {
            if (k == n - 1)
                (*c) += (a[k--] * b[m - 1] * (*t));
            else
            {
                (*c) += (a[k--] * b[m - 1] * l * (*t));
                l *= 10;
            }
        }
        (*t) *= 10;
        mul(a, n, b, m - 1, c, t);
    }
}
int main()
{
    int n, m, c = 0, t = 1;
    printf("Enter the number of digits in the first number:\n");
    scanf("%d", &n);
    printf("Enter the number of digits in the second number:\n");
    scanf("%d", &m);
    int a[n], b[m];
    printf("Enter the first number:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the second number:\n");
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);
    mul(a, n, b, m, &c, &t);
    printf("The product of the two numbers: %d", c);
    return 0;
}