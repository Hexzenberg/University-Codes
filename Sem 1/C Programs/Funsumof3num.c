/*Q4 8.12.21*/
#include <stdio.h>
int add(int n, int m, int r)
{
    int d;
    d=n+m+r;
    printf("The sum of the three numbers is:%d",d);
    return d;
}
int main()
{
    int f,g,h;
    printf("Enter the numbers:");
    scanf("%d%d%d",&f,&g,&h);
    add(f,g,h);
    return 0;
}