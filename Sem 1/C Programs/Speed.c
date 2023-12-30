/* 3.11.21 Q1- wap to find out the velocity and distance covered by a sone after time 1,2,3,4,5sec if it is thrown with a initial velociy u from top of thhe eiffel tower.*/
#include <stdio.h>
#define g 9.8
int main()
{
int u,t;
float v,s;
printf("Give the initial velocity:");
scanf("%d", &u);
t=0;
t++;
v=u + g*t;
s=u* t + g*t*t/2;
printf("\nVelocity = %f m/s and Distance covered = %f m after %ds",v,s,t);
t++;
v=u + g*t;
s=u* t + g*t*t/2;
printf("\nVelocity = %f m/s and Distance covered = %f m after %ds",v,s,t);
t++;
v=u + g*t;
s=u* t + g*t*t/2;
printf("\nVelocity = %f m/s and Distance covered = %f m after %ds",v,s,t);
t++;
v=u + g*t;
s=u* t + g*t*t/2;
printf("\nVelocity = %f m/s and Distance covered = %f m after %ds",v,s,t);
t++;
v=u + g*t;
s=u* t + g*t*t/2;
printf("\nVelocity = %f m/s and Distance covered = %f m after %ds",v,s,t);
return 0;
}