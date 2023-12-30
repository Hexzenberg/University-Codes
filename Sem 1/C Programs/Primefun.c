/*Q7 04.01.22*/
#include<stdio.h>
int isPrime(int n)
{
    int b=0,j;
    for(j=2;j<=n/2;j++){
        if(n%j==0)b=1;
    }
    if(b==0 && n!=0 && n!=1)
    printf("\nThe number is prime");
    else
    printf("\nThe number is composite");   
}
int main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    isPrime(a);
    return 0;
}