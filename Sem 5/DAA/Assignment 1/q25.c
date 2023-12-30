// C Program to find the First Capital Letter in a String using Recursion
#include <stdio.h>
void firstcap(char *c, int n)
{
    if (c[n] != '\n')
    {
        if (c[n] > 'A' && c[n] < 'Z')
        {
            printf("%c ", c[n]);
            return;
        }
        firstcap(c, n + 1);
    }
}
int main()
{
    int n;
    printf("Enter the number of characters present in the string:\n");
    scanf("%d", &n);
    getchar();
    char c[n];
    printf("Enter the string:\n");
    fgets(c, n + 1, stdin);
    printf("The first capital letter in the string is: ");
    firstcap(c, 0);
    return 0;
}