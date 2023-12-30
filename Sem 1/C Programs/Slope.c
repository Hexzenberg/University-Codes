/*Q2- wap to find the slope of a line with two given point 2.11.21*/
#include <stdio.h>
int main()
{
    float x1,y1,x2,y2;
    printf("Enter coordinates x1,y1,x2 and y2: ");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    printf("\nThe Slope is:%f",(y2-y1)/(x2-x1));
}