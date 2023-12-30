/* 3.11.21 Q3- Give three inputs a,b,c display sum of all sides if those are sides of a triangle eles display 0 on the screen*/

#include <stdio.h>
int main()
{
    int a,b,c,t,s;

    printf("Give value of side A:");
    scanf("%d",&a);

    printf("Give value of side B:");
    scanf("%d",&b);

    printf("Give value of side C:");
    scanf("%d",&c);

    t=((a+b)>c)&&((b+c)>a)&&((c+a)>b);
    s=t*(a+b+c);

    printf("Do they satisfy the triangle property?");
    printf("\n Display: 0 fo No, sum of all sides for Yes: %d",s);
   return 0;
}