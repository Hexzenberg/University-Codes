#include<stdio.h>
#include<math.h>
int main(){
    int n,a=1,i,r=0,x=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("The entered number:%d\n",n);
    int s=n;
    r=log10(n)+1;
    printf("The number of digits in the entered number is:%d\n",r);
    while(n>0){
        int b=n%10;
        a+=pow(b,r);
        n/=10;
    }
    if(a==s)printf("The entered number is a Armstrong number");
    else printf("The entered number is not a Armstrong number");
    return 0;
}