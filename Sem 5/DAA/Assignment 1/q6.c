// Reverse a string using recursion
#include <stdio.h>
void revstr(char *c, int n)
{
    if (n >= 0)
    {
        printf("%c", c[n - 1]);
        revstr(c, n - 1);
    }
}
int main()
{
    int n;
    printf("Enter the number of characters in the string:\n");
    scanf("%d", &n);
    getchar(); // read the newline character left by the scanf function.
    char c[n + 1];
    printf("Enter the elements of the string:\n");
    fgets(c, n + 1, stdin);
    // fgets() takes newline character as input too so we take in n + 1 elements as our input to compensate, not using gets() because it has been depricated due to scurity concerns.
    printf("The string in reverse is:\n");
    revstr(c, n);
    return 0;
}