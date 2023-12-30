// Write a program for palindrome using recursion
#include <stdio.h>
int isPalindrome(int *a, int start, int end)
{
    if (start >= end)
        return 1;
    if (a[start] != a[end])
        return 0;
    return isPalindrome(a, start + 1, end - 1);
}

int main()
{
    int n;
    printf("Enter the size of the number:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter a number digit by digit:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf(isPalindrome(a, 0, n - 1) ? ("The number is a palindrome.\n") : ("The number is not a palindrome.\n"));
    return 0;
}
