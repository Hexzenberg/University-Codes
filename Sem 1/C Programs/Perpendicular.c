/*Q4- WAP to display two lines in 2D are perpendicular to each other or not.*/

#include <stdio.h>
int main()
{
    int x1,y1,x2,y2;
    float m1,m2;
    printf("FOR FIRST LINE\n");
    printf("Enter x1 co-ordinate: ");
    scanf("%d",&x1);
    printf("Enter y1 co-ordinate: ");
    scanf("%d",&y1);
    printf("Enter x2 co-ordinate: ");
    scanf("%d",&x2);
    printf("Enter y2 co-ordinate: ");
    scanf("%d",&y2);
    m1=(y2-y1)/(x2-x1);
    printf("\nFOR SECOND LINE\n");
    printf("Enter x1 co-ordinate: ");
    scanf("%d",&x1);
    printf("Enter y1 co-ordinate: ");
    scanf("%d",&y1);
    printf("Enter x2 co-ordinate: ");
    scanf("%d",&x2);
    printf("Enter y2 co-ordinate: ");
    scanf("%d",&y2);
    m2=(y2-y1)/(x2-x1);
    if((m1*m2)==-1)
    printf("\n\nPERPENDICULAR");
    else
    printf("\n\nNot PERPENDICULAR");
    return 0;
}