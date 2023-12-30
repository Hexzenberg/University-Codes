#include<stdio.h>
int main()
{
    unsigned int a=60;
    unsigned int b=13;
    int c=0;
    c=a&b;
    printf("%d",c);
    c=a|b;
    printf("\n%d",c);
    c=a^b;
    printf("\n%d",c);
    c=~a;
    printf("\n%d",c);
    c=a<<2;
    printf("\n%d",c);
    c=a>>2;
    printf("\n%d",c);
    return 0;
}