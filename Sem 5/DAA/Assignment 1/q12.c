// Reverse a number using recursion in c program
#include <stdio.h>
void rev(int *a, int n)
{
    if (n > 0)
    {
        printf("%d", a[n - 1]);
        rev(a, n - 1);
    }
}
int main()
{
    int n;
    printf("Enter the number digits in the number:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the number digit by digit:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("The entered number in reverse is: ");
    rev(a, n);
    return 0;
}