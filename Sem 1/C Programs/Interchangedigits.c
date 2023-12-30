#include<stdio.h>
int main()
{
    int n,i,x,j;
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
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i%2==0 && j%2==0){
               a[i]=a[n-j];
               a[n-j]=a[i];
            }else if(i%2!=0 && j%2!=0){
               a[i]=a[n-j];
               a[n-j]=a[i];
            }
        }
    }
    printf("\nThe number after interchanging:");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}