/*Q 12.01.22 reverse of a string without library functions*/
#include <stdio.h>
int main()
{
   char s[100],r[100];
   int i,j,c= 0;
   printf("Input a string:");
   gets(s);
   while (s[c]!='\0')
      c++;
   j=c-1;
   for(i=0;i<c;i++){
      r[i]=s[j];
      j--;
   }
   r[i]='\0';
   printf("In Reverse order:%s\n",r);
   return 0;
}