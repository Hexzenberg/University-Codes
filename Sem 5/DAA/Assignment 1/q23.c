// C Program to Check whether a given String is Palindrome or not using recursion
#include <stdio.h>
int isPalindrome(char *s, int start, int end)
{
    if (start >= end)
        return 1;
    if (s[start] != s[end])
        return 0;
    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    int l = 0;
    while (s[l] != '\0')
        l++;
    printf(isPalindrome(s, 0, l - 1) ? ("The string is a palindrome.\n") : ("The string is not a palindrome.\n"));
    return 0;
}
