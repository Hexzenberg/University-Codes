// C Program to find the permutation of a String using Recursion
#include <stdio.h>
#include <string.h>
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void permute(char *str, int l, int r)
{
    if (l == r)
    {
        printf("%s\n", str);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(str + l, str + i);
            permute(str, l + 1, r);
            swap(str + l, str + i); // Backtrack
        }
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    printf("Permutations of the string are:\n");
    permute(str, 0, n - 1);
    return 0;
}
