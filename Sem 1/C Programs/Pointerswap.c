/*Q1 11.01.22*/
#include<stdio.h>
void swap(int *n,int *m)
{
    int t;
    t=*n;
    *n=*m;
    *m=t;
}
int main()
{
    int a=10,b=20;
    printf("Before swap:\na=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swap:\na=%d,b=%d\n",a,b);
    return 0;
}