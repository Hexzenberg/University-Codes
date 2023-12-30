/*Q1 8.12.21*/
#include <stdio.h>
#define pi 3.14
float area(float);

int main()
{
    float r;
    printf("Enter the Radius of the circle:");
    scanf("%f",&r);
    printf("The area of the circle is %f",area(r));
    return 0;
}
float area(float R)
{
    float A;
    A=pi*R*R;
    return A;
}