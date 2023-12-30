#include<stdio.h>
struct add{
    int a,b;
};
struct multiply{
    int c,d;
};
union calc{
    struct add a;
    struct multiply m;   
};
int main ()
{
    union calc x,y,f,g;
    printf("Enter the numbers:");
    scanf("%d%d%d%d",&x.a.a,&y.a.b,&f.m.c,&g.m.d);
    printf("The sum of the numbers:%d",x.a.a+y.a.b);
    printf("\nThe product of two numbers id:%d",f.m.c*g.m.d);
    return 0;
}