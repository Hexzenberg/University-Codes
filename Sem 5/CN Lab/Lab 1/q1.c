// Write a C program to swap the content of 2 variables entered through the command line using function and pointer.
#include <stdio.h>
void swap(char *a, char *b)
{
    char c = *a;
    *a = *b, *b = c;
}
int main(int arg, char *argv[])
{
    printf("Before Swap: %s %s", argv[1], argv[2]);
    swap(argv[1], argv[2]);
    printf("\nAfter Swap: %s %s", argv[1], argv[2]);
    return 0;
}