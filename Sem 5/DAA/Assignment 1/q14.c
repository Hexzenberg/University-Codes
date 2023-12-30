// C Program to find the Length of the String using Recursion
#include <stdio.h>
void len(char *c, int *l)
{
    if (c[*l] != '\0')
    {
        (*l)++;
        len(c, l);
    }
}
int main()
{
    char c[100];
    int l = 0;
    printf("Enter a string(<100 characters):\n");
    fgets(c, 101, stdin);
    len(c, &l);
    printf("The length of the string is: %d", l - 1); // l - 1 because fgets also adds a newline character '\n' to the input string.
    return 0;
}