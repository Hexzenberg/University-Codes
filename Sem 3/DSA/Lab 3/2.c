//August 4,2022
// WAP to implement the following function on the time value where the time is one 
// structure element containing hour, minutes and second as the data member.
// i.Addition of 2 time value
// ii.Subtraction of 2 time value 
// Note: Check the validity of result after operation
#include<stdio.h>
typedef struct{float h,m,s;}t;
void ad(t a,t b){printf("The sum of the time is: %f in seconds.\n",(3600*(a.h+b.h))+(60*(a.m+b.m))+a.s+b.s);}
void s(t a,t b){printf("The difference of the time is: %f in seconds.\n",(3600*(a.h-b.h))+(60*(a.m-b.m))+a.s-b.s);}
int v(t a,t b){return(((((3600*(a.h+b.h))+(60*(a.m+b.m))+a.s+b.s)<86400&&(3600*(a.h-b.h))+(60*(a.m-b.m))+a.s-b.s)<86400)?1:0);}
int main(){
    t a,b;
    printf("Enter the first time in Hours, minutes and seconds:\n"),scanf("%f%f%f",&a.h,&a.m,&a.s);
    printf("Enter the second time in Hours, minutes and seconds:\n"),scanf("%f%f%f",&b.h,&b.m,&b.s);
    if(v(a,b))printf("Time is valid.\n"),ad(a,b),s(a,b);
    else printf("Given time is inavlid.\n");
    return 0;
}