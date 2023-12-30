/*Q 11.01.22*/
#include <stdio.h>
int main()
{
   char a[]="yudhishtir",b[]="Bhim",c[]="Arjun",d[]="Nakul",e[]="Sahadev";
   int count=0;
   char *p[5];
   p[0]=a;p[1]=b;p[2]=c;p[3]=d;p[4]=e;
   for(int i=0;i<5;i++){
      for(int j=0;p[i][j];j++){
         count+=p[i][j]=='a';
      }
   }
   printf("Number 'a' in the string %d",count);
}