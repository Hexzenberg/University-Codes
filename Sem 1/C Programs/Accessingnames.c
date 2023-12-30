/*Q 11.01.22*/
#include<stdio.h>
int main()
{
    char a[]="Yudhishthir",b[]="Bhim",c[]="Arjun",d[]="Nakul",e[]="Sahadev";
    char *p[5];
    p[0]=a;p[1]=b;p[2]=c;p[3]=d;p[4]=e;
    for(int i=0;i<5;i++)
    printf("%s\n",p[i]);
    return 0;
}