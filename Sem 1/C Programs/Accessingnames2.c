/*Q 11.01.22*/
#include<stdio.h>
int main()
{
    char a[]="My",b[]="Name",c[]="Is",d[]="Nikhil",e[]="Hi";
    char *p[5];
    p[0]=a;p[1]=b;p[2]=c;p[3]=d;p[4]=e;
    for(int i=0;i<5;i++)
    printf("%s\n",*(p+i));
    return 0;
}
