/*Q8 30.11.21*/
#include<stdio.h>
int Sum(int n)
{
    int s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
        }
    printf("The sum of the digits of the given number is:%d",s);
    return s;
}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    Sum(a);
    return 0;

}