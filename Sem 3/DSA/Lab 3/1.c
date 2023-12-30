//August 4,2022
// Write a program to add two distances (in KM -MTR) represented in the form of structure by passing 
// structure to function.
#include<stdio.h>
struct d{float k,m;};
void ad(struct d a,struct d b){printf("Total distance is %f meter.",(1000*(a.k+b.k)+(a.m+b.m)));}
int main(){
    struct d a,b;
    printf("Enter the first distance in Km and m:\n"),scanf("%f%f",&a.k,&a.m);
    printf("Enter the second distance in Km and m:\n"),scanf("%f%f",&b.k,&b.m);
    ad(a,b);
    return 0;
}