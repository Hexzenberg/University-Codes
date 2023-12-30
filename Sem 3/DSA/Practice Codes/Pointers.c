#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=1;
    char *p=(char*)&a;
    char **q=&p;
    printf("%p\n",q);
    printf("%p\n",*q);
    printf("%d\n",**q);
    char c[]="ABC";
    printf("%c",*(c+0));
    return 0;
}