/*Q4 30.11.21*/
#include <stdio.h>
void display4 (int n,char ch)
{
    int i;
    for(i=0;i<n;i++)
    printf("%c",ch);
    printf("\n");
    return;
}

int main()
{
    int a=10,b=5;
    display4(20,'$');
    printf("Hello World\n");
    printf("Just another program\n");
    display4(a,'+');
    printf("I can't even think of any random sentences right now\n");
    printf("Welp, I'll just type anything\n");
    display4(a+b*2,'Y');
    printf("All right that's it\n");

    return 0;
}