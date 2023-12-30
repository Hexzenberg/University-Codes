/*Q4- wap to find the equivalent resistance of three resistance for srial and parallel connections. find the current through the circuit if they are connected to a voltage source 2.11.21*/
#include <stdio.h>
int main()
{
    float r1,r2,r3,rs,rp,is,ip,vo;
    printf("Enter resistance r1,resistance r2,resistance r3 and voltage:");
    scanf("%f%f%f%f",&r1,&r2,&r3,&vo);
    rs=(r1+r2+r3);
    rp=r1*r2*r3/((r1*r2)+(r2*r3)+(r3*r1));
    is=vo/rs;
    ip=vo/rp;
    printf("\nRes in series:%.2f\nRes in parallel:%.2f\nCurrent in series:%.2f\nCurrent in parallel:%.2f",rs,rp,is,ip);
    return 0;
}