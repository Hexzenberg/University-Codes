// Consider an n × n matrix A = (a ij ), each of whose elements a ij is a non-negative real number, and suppose that each row and column of
// A sums to an integer value. We wish to replace each element a ij with either ˥aij˥ or ˩aij˩ without disturbing the row and column sums.
// Write a program by defining an user defined function that is used to produce the rounded matrix as described in the above example.
// Find out the time complexity of your algorithm/function.
#include <stdio.h>
#include <math.h>
void roundMatrix(double a[][4], int r[][4], int n)
{
    int rowSum[n], colSum[n];
    for (int i = 0; i < n; i++)
        rowSum[i] = 0, colSum[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            r[i][j] = round(a[i][j]); // round function estimates the floating point number to the closest integer.
            rowSum[i] += r[i][j];
            colSum[j] += r[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int diff = rowSum[i] - r[i][j];
            if (diff)
                diff > 0 ? r[i][j]++ : r[i][j]--;
            rowSum[i] -= diff;
            colSum[j] += diff;
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of the square matrix:\n");
    scanf("%d", &n);
    double a[n][n];
    printf("Enter the elements of the square matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%lf", &a[i][j]);
    int r[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            r[i][j] = 0;
    roundMatrix(a, r, n);
    printf("The rounded matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", r[i][j]);
        printf("\n");
    }
    return 0;
}
