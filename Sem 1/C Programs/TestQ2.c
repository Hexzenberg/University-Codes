#include <stdio.h>
int main()
{
   int k;
   printf("Enter the number of spaces:");
   scanf("%d",&k);
   char s[100]="Nikhil";
   int nic=0,nicount=0;
   while(s[nic]){
      if (s[nic]=='a'||s[nic]=='A'||s[nic]=='e'||s[nic]=='E'||s[nic]=='i'||s[nic]=='I'||s[nic]=='o'||s[nic]=='O'||s[nic]=='u'||s[nic]=='U')
      nicount++;
      nic++;
   }
   char ni[100];
   int i=0;nic=0;
   while(i<100){
      ni[i]=s[nic];
      nic++;
      int j;
      for( j=1;j<=k;j++)
      ni[i+j]=' ';
      i+=j;
   }
   char nar[100];
   i=0;nic=0;
   while(i<100){
      nar[i]=s[nic];
      nic++;
      int j;
      for( j=1;j<=k;j++)
      nar[i+j]='N';
      i+=j;
   }
   printf("No. of vowels: %d\n",nicount);
   printf("%s\n",ni);
   printf("%s",nar);
}