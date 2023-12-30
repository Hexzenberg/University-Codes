/*Q6 04.01.22*/
#include<stdio.h>
int Pal(int n)
{
  int t,a,r=0;
  t=n;
  while(n!=0)
    {
    a=n%10;
    r=r*10+a;
    n/=10;
    }
  if(r==t)
  return 0;
  return 1;
}

int main (){
  int m;
  printf ("Enter the number:");
  scanf ("%d", &m);
  if(Pal(m)==0)
  printf("%d is a palindrome number",m);
  else
  printf("%d is not a palindrome number",m);
  return 0;
}