// WAP to print the numbers which are divisible by 7 and 13 within a range.
#include<stdio.h>
void m(int a760,int b760){
    for(int i=a760;i<b760;i++)if(i%7==0&&i%13==0&&i!=0)printf("%d ",i);
}
int main(){
    int a760,b760;
    printf("Enter the range:\n");
    scanf("%d%d",&a760,&b760);
    m(a760,b760);
    return 0;
}