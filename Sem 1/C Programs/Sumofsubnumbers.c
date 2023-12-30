#include<stdio.h>
int main()
{
    int n,i,m,c=0,j;
    printf("Enter a number of digits of the number:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the number:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nThe entered number is:");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("\nEnter the number to be searched:");
    scanf("%d",&m);
    printf("\nThe subnumbers are:");
    for(i=0;i<n;i++){
        if(a[i]==m){
            for(j=i-1;j>0;j--){
                printf("%d",a[i-j]);
                c+=a[i-j];
            }
        }
    }
    printf("\nThe sum of the subnumbers before the entered number:%d",c);
    return 0;
}