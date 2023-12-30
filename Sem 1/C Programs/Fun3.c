/*Q3 30.11.21*/
#include <stdio.h>
void display3(int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("=");
    printf("\n");
    return;
}

int main()
{
    int a=10,b=5;
    display3(15);
    printf("Hello Everyone\n");
    printf("I am Batman\n");
    display3(a+2*b);
    printf("Yes I am the knight\n");
    display3(a+b+2);
    printf("Don't tell this to anyone please\n");

    return 0;
}