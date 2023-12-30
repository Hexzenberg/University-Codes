/* 10.11.21 Q3 wap to display wheather a vechile moves with constant velocity/ acceleration/ desseleration. put:a.*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if(a==0)printf("Vechile has constant velocity");
    else if(a>0)printf("Vechile is accelerating");
    else printf("Vechile is deaccelerating");
    return 0;
}