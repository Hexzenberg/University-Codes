#include<stdio.h>
int main()
{
    int n,i,x;
    printf("Enter the number of digits of the number:");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the number:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The number entered by you:");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("Enter the number to be searched:");
    scanf("%d",&x);
    return 0;
}