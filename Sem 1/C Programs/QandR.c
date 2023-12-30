/*Q1 wap to perform the division of two integers and display the reminder and quoasant. 2.11.21*/

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nThe Quot is: %d\nThe Remainder is:%d",a/b,a%b);
}