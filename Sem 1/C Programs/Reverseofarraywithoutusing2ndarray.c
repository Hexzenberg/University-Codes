#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("The size of the array is %d",n);
    int a[n];
    for(i=0;i<n;i++){
        printf("\nEnter the term a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("\nThe term entered for a[%d] is:%d",i+1,a[i]);
    }
    printf("\nThe reverse of the array:");
    for(i=n-1;i>=0;i--){
        printf(" %d",a[i]);
    }
    return 0;
}