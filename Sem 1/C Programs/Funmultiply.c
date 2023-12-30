/*Q2 8.12.21*/
#include <stdio.h>
int multi(int a, int b)
{
    int c;
    c=a*b;
    return c;
}
int main ()
{
    int f,d;
    printf("Enter two nuumbers:");
    scanf("%d%d",&f,&d);
    printf("The multiplication of the numbers is: %d",multi(f,d));
    return 0;
}