/* 3.11.21 Q6- Given three inputs a,b,c display  1 if those are sides of a right angle triangle else display 0 onn screen*/

#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    printf("enter the sides for the triangle\n");
    scanf("%d%d%d", &a, &b, &c);
    d = a * a;
    e = b * b;
    f = c * c;
    g = d + e;
    h = d + f;
    i = e + f;
    j = d == i || e == h || f == g;
    printf("this is a right angle triangle if it shows 1 and not if shows 0 :%d", j);
    return 0;
}