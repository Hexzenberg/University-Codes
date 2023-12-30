/* 3.11.21 Q2- Give three inputs a,b.c display 1 if those are sides of a triangle eles display 0 on screen.*/
#include <stdio.h>
int main()
{
  int a,b,c,n;
  printf("Give the values to be checked:");
  scanf("%d%d%d",&a,&b,&c);
  n=((a+b)>c)&&((b+c)>a)&&((c+a)>b);
  printf("\n Do they satisfy triangle property? 1 for yes, 0 for no: %d",n);
  return 0;
}