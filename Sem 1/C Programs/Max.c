/* 9.11.21 Q4- WAP o print the largest among the numbers (a,b,c,d,e)*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,max;
    printf("\n Enter the 5 nubers:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
     max=a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    if(max<d)
        max=d;
    if(max<e)
        max=e;

    printf("\n the largest number is %d",max);

    return 0;

}