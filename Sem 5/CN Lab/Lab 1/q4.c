// Write a C Program to enter a number and store the number across the following structure and print the content of each member of the
// structure.Then aggregate each member of the structure to form the original number and print the same.
// struct pkt
// {
//     char ch1;
//     char ch2[2];
//     char ch3;
// };
#include <stdio.h>
typedef struct pkt
{
    char ch1;
    char ch2[2];
    char ch3;
} pkt;
int main()
{
    int a;
    scanf("%d", &a);
    pkt p;
    p.ch1 = a & 255;
    p.ch2[0] = a >> 8 & 255;
    p.ch2[1] = a >> 16 & 255;
    p.ch3 = a >> 24 & 255;
    printf("1st Byte:%d\n2nd Byte:%d\n3rd Byte:%d\n4th Byte:%d\n", p.ch1, p.ch2[0], p.ch2[1], p.ch3);
    printf("1st member of the given structure:%d\n", p.ch1);
    printf("2nd member=%d,%d\n", p.ch2[0], p.ch2[1]);
    printf("3rd member=%d\n", p.ch3);
    a = (int)p.ch1 | (int)p.ch2[0] << 8 | (int)p.ch2[1] << 16 | (int)p.ch3 << 24;
    printf("The original number is %d", a);
    return 0;
}