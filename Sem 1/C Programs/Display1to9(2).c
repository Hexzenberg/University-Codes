/* 17.11.21 Q2- WAP to display 1to9 and 9to1 in reverse order using if and else statement.*/
#include<stdio.h>
int main()
{
    int i;
    for (i=0;i<10;i++){
        printf("%d\n",i);
    }
    printf("\n\n\n");
    for (i=9;i>=0;i--){
        printf("%d\n",i);
    }
    return 0;
}