// WAP to enter a five digit number and print the below structure 
// For example the no is :45678
// 4 5 6 7 8 
// 5 6 7 8 4 
// 6 7 8 4 5 
// 7 8 4 5 6 
// 8 4 5 6 7
#include<stdio.h>
#include<stdlib.h>
void c(int a760[5]){
    int t=a760[0];
    for(int i=0;i<4;i++)a760[i]=a760[i+1];
    a760[4]=t;
}
int main(){
    int*a760=malloc(5*sizeof(int)),t760=4;
    printf("Enter any 5 digit number:\n");
    for(int i=0;i<5;i++)scanf("%d",&a760[i]);
    printf("The structure for the entered number is:\n");
    for(int i=0;i<5;i++)printf("%d ",a760[i]);
    printf("\n");
    while(t760--){
        c(a760);
        for(int i=0;i<5;i++)printf("%d ",a760[i]);
        printf("\n");
    }
    return 0;
}