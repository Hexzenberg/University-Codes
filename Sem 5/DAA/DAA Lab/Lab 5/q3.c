// Find the GCD and LCM of n numbers where (n >= 2).
#include <stdio.h>
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Enter the size of the of the array >= 2!\n");
        return 0;
    }
    int a[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int gc = a[0], lc = a[0];
    for (int i = 1; i < n; i++)
    {
        gc = gcd(gc, a[i]);
        lc = lcm(lc, a[i]);
    }
    printf("The GCD of the entered numbers is %d and the lcm is %d", gc, lc);
    return 0;
}
