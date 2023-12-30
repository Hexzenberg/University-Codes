// Write a C program to extract each byte from a given number and store them in separate character variables and print the content of
// those variables.
#include <stdio.h>
int main()
{
    int a = 300;
    printf("%d\t", (a)&255);
    printf("%d\t", (a >> 8) & 255);
    printf("%d\t", (a >> 16) & 255);
    printf("%d\t", (a >> 24) & 255);
    return 0;
}