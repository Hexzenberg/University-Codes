// WAP in C using ternary operator to find the Greatest Among Three Numbers.
#include<stdio.h>
int r(int a760,int b760,int c760){
    return((a760>b760)?((a760>c760)?a760:c760):((b760>c760)?b760:c760));
}
int main(){
    int a760,b760,c760;
    printf("Enter any three numbers:\n");
    scanf("%d%d%d",&a760,&b760,&c760);
    printf("The greatest number is: %d",r(a760,b760,c760));
    return 0;
}