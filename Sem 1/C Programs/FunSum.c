/*Q6 30.11.21*/
#include <stdio.h>
int sum(int a, int b)
{
    int c;
    printf("ENTER THE NUMBERS:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d IS THE SUM OF THE TWO NUMBERS",c);
    return c;
}
int main ()
{
    int c,d;
    sum(c,d);
    return 0;
}