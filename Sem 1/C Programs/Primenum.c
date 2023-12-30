/*Q1 23.11.21*/
#include<stdio.h>
int main ()
{   int i,n,p=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==1)printf("The number is neither prime nor composite");
    for(i=2;i<=n/2;i++){
        if(n%i==0)p=0;
    }
    if(p==1)
    printf("The number is prime");
    else
    printf("The number is composite");   
    return 0;
}
