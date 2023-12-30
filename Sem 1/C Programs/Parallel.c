/*3.11.21 Q5- WAP to display two lines in 2D are parallal to each other or not.*/

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
    if(m1==m2)
    printf("\n\nPARALLEL");
    else
    printf("\n\nNOT PARALLER");
    return 0;
}
