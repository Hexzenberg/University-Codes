// Write program to print the word format of a four digit number.
// Example:-3798 is displayed as - Three Seven Nine Eight
#include<stdio.h>
#include<stdlib.h>
void s(int a760[4]){
    for(int i=0;i<4;i++)printf((a760[i]==1)?"One ":(a760[i]==2)?"Two ":(a760[i]==3)?"Three ":(a760[i]==4)?"Four ":(a760[i]==5)?"Five ":(a760[i]==6)?"Six ":(a760[i]==7)?"Seven ":(a760[i]==8)?"Eight ":(a760[i]==9)?"Nine ":"Zero ");
}
int main(){
    int*a760=malloc(4*sizeof(int));
    printf("Enter the four digit number:\n");
    for(int i=0;i<4;i++)scanf("%d",&a760[i]);
    printf("The entered number in words is:\n");
    s(a760);
    return 0;
}