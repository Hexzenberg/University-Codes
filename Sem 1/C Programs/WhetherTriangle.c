/* 10.11.21 Q2  Given 3 pionts (x1,y1)(x2,y2)(x3,y3) in 2D Display wheather they form a triangle or not.*/

#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float m1,m2,m3;
    printf("Enter the values of x1,x2,x3,y1,y2,y3");
    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    m3=(y1-y3)/(x1-x3);

    if(m1!=m2 && m2!=m3 && m3!=m1)
        printf("this 3 points makes a triangle");
    else
        printf("this 3 points do NOT makes a triangle");
    return 0;

}