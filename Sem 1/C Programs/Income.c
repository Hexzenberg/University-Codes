/* 10.11.21 Q1 if basic salary is $ 1500, the HRA=10% and DA=40% of basic salary else HRA= $ 500 and DA=50% of basic salary. find the gross salary.*/


#include <stdio.h>

int main()
{
    float bs, gs, da, hra;
    printf("Enter the basic salay:");
    scanf("%f",&bs);

    if (bs<1500)
        gs=bs+((bs*10)/100)+((bs*40)/100);
    else
        gs=bs+500+((bs*40)/100);

    printf("gross salary= $ %f",gs);

    return 0;
}
