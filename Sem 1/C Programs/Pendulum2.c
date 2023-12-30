/* 17.11.21 Q4- Display the period of a simple pendulum for different values of length starting from 10 with an instrumnet length of 10*/


#include <stdio.h>
#include <math.h>
#define g 9.8
#define pi 3.14

int main()
{
    float l, t;
    for(l=10;l<=50;l=l+10)
    {t=2*pi*sqrt(l/g);
    printf("\nThe time period is : %.3f\n",t);}
}