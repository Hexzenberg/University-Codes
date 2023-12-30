/*Q4 04.01.22*/
#include<stdio.h>
int main()
{
    int sum=0,n,i,j;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)sum+=a[i][j];
        }
    }
    printf("Addition of the right diagonal elements is:%d",sum);
    return 0;
}