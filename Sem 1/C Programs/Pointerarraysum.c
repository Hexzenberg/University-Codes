/*Q 11.01.22 */
#include<stdio.h>
int main()
{
   int a[5],s=0,*p;
   printf("Enter elements of the array:");
   for(int i=0;i<5;i++){
       scanf("%d",&a[i]);
   }
   p=a;
   for(int i=0;i<5;i++) {
      s+=*p;
      p++;
   }
   printf("sum:%d",s);
}