// C Program to find Sum of Digits of a Number using Recursion
#include <stdio.h>
void sod(int n, int *s)
{
    if (n > 0)
    {
        *s += n % 10;
        sod(n / 10, s);
    }
}
int main()
{
    int n, s = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    sod(n, &s);
    printf("The sum of digits of %d is %d", n, s);
    return 0;
}