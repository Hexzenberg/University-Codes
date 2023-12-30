/* 9.11.21 Q6- write a program to convert lowercase string to uppercase*/
#include <stdio.h>
int main()
{
    char o;
    printf("Enter an alphabet:");
    scanf("%c",&o);
    if(o>=97 && o<=122)
    {
        o=o-32;
        printf("%c",o);
    }
    return 0;
}