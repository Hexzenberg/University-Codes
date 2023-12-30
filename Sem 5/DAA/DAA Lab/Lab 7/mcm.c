#include <stdio.h>
#include <limits.h>
void output(int n, int s[][n], int i, int j)
{
    if (i == j)
        printf("A[%d]", i);
    else
    {
        printf("(");
        output(n, s, i, s[i][j]);
        output(n, s, s[i][j] + 1, j);
        printf(")");
    }
}
void mcm(int p[], int n)
{
    int m[n][n], s[n][n];
    for (int i = 1; i < n; i++)
        m[i][i] = 0;
    for (int l = 2; l < n; l++)
    {
        for (int i = 1; i < n - l + 1; i++)
        {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
    printf("M Table:\n");
    for (int i = 1; i < n; i++, printf("\n"))
        for (int j = 1; j < n; j++)
            printf(j > i ? "%d\t" : "0\t", m[i][j]);
    printf("S Table:\n");
    for (int i = 1; i < n; i++, printf("\n"))
        for (int j = 1; j < n; j++)
            printf(j > i ? "%d\t" : "0\t", s[i][j]);
    printf("Minimum number of operations performed: %d\n", m[1][n - 1]);
    printf("Optimal Parenthesis: ");
    output(n, s, 1, n - 1);
}
int main()
{
    int n;
    printf("Enter number of matrices:\n");
    scanf("%d", &n);
    int p[++n];
    for (int i = 1; i < n; i++)
    {
        printf("Enter row and column size of A[%d]: ", i);
        scanf("%d %d", &p[i - 1], &p[i]);
    }
    mcm(p, n);
    return 0;
}
