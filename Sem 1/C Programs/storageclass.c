#include<stdio.h>
int x=98;
int main()
{
    {
        int x=78;
        printf("%d",x);
    }
    printf("\n%d",x);
}