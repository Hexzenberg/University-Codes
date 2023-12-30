/*Q5 30.11.21*/
#include <stdio.h>
int character()
{
    char ch;
    printf("\nEnter the alphabet:");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    return (ch);
    else
    return(ch-32);
    }
int main()
{
    int a;
    a=character();
    printf("%c",a);
    return 0;
}