// Write a C program to check whether the Host machine is in Little Endian or Big Endian. Enter a number, print the content of each byte
// location and Convert the Endianness of the same i.e. Little to Big Endian and vice-versa.
#include <stdio.h>
int main()
{
    int a = 2, n;
    char b = (char)&a, *c, d[4];
    printf((int)b == 2 ? "Host machine is Little Endian System\n" : "Host machine is Big Endian System\n");
    printf("Enter a number:\n"), scanf("%d", &n);
    c = (char *)&n;
    printf("Each byte:\n");
    for (int i = 0; i < 4; i++)
        printf("%d\t", *(c + i));
    for (int i = 0; i < 4; i++)
        d[i] = c[3 - i];
    printf("\nAfter changing the Endianness:\n");
    for (int i = 0; i < 4; i++)
        printf("%d\t", *(d + i));
}