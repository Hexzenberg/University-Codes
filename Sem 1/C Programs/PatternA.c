/* 23.11.21 Q3- dispay the pattern on the screen

AAAAAAAAAAAAAAAAAAAAA
AAAAAA AAAAAA AAAAAA
AAAAA  AAAAA  AAAAA
AAAA   AAAA   AAAA
AAA    AAA    AAA
AA     AA     AA
A      A      A*/

#include <stdio.h>

int main()
{
    int sp=0;
    for(int i=7;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        printf("A");
        for(int j=1;j<=sp;j++)
        printf(" ");
        for(int j=1;j<=i;j++)
        printf("A");
        for(int j=1;j<=sp;j++)
        printf(" ");
        for(int j=1;j<=i;j++)
        printf("A");
        printf("\n");
        sp++;
    }

}

