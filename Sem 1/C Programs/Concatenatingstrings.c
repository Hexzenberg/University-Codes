/*Concanetation of strings 12.01.22*/
#include<stdio.h>
int length(char *s)
{
    int k=-1;
    while(s[++k]);
    return k;
}
int main()
{
    char a[100],b[100],ch;
    int i=0,j;
    printf("Enter the first string:");
    gets(a);
    printf("\nEnter the second string:");
    gets(b);
    j=length(a);
    a[j++]=' ';
    while(a[j++]=b[i++]);
    printf("After concatenation:%s",a);
    return 0;
}