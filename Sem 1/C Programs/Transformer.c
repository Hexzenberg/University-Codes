/*Q3- wap to find the secondary voltage of a transfer if primary voltage turns of primary and secondary are given (input)2.11.21*/
#include <stdio.h>
int main()
{
   int pt,st,pv;
   printf("Enter the primary voltage,primary turns and secondary turns:");
   scanf("%d%d%d",&pv,&pt,&st);
   printf("\n Seconday voltage is %d volts",(pv*st)/pt);
   return 0;
}
