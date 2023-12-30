/*Q7 30.11.21*/
#include <stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    printf("The factorial of the number is:%d",f);
    return f;
}
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    fact(a);
    return 0;
}