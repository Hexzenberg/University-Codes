/*Q12 14.12.21*/
#include<stdio.h>
int main()
{   int n;
    printf("Enter the order of the matrices:");
    scanf("%d",&n);
    int a[n][n],b[n][n],m[n][n],i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the term a[%d][%d]:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The first matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the term b[%d][%d]:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The second matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }printf("\n");
    }
    printf("The multiplication result is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                m[i][j]=0;
                for(k=0;k<n;k++){
                    m[i][j]+=a[i][k]*b[k][j];
                }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",m[i][j]);
        }printf("\n");
    }
    return 0;
}