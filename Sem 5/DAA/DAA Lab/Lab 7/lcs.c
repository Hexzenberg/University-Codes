#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int c = 0;
int max(int x, int y)
{
    return x >= y ? x : y;
}
int lcs(int i, int j, char x[], char y[])
{
    if (i == 0 || j == 0)
        return 0;
    if (x[i - 1] == y[j - 1])
        return 1 + lcs(i - 1, j - 1, x, y);
    else
        return max(lcs(i - 1, j, x, y), lcs(i, j - 1, x, y));
}
void printLCS(int i, int j, char x[], char y[], int z[][j])
{
    if (i == 0 || j == 0)
        return;
    if (x[i - 1] == y[j - 1])
    {
        printLCS(i - 1, j - 1, x, y, z);
        printf("%c", x[i - 1]);
        c++;
        if (c == 6)
            exit(0);
    }
    else
    {
        if (z[i - 1][j] >= z[i][j - 1])
            printLCS(i - 1, j, x, y, z);
        if (z[i - 1][j] <= z[i][j - 1])
            printLCS(i, j - 1, x, y, z);
    }
}
int main()
{
    char x[100], y[100];
    printf("Enter the first string:\n");
    scanf("%s", x);
    printf("Enter the second string:\n");
    scanf("%s", y);
    int n = strlen(x);
    int m = strlen(y);
    int z[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            z[i][j] = -1;
    int lc = lcs(n, m, x, y);
    printf("LCS length: %d\n", lc);
    printf("LCS: ");
    printLCS(n, m, x, y, z);
    return 0;
}
