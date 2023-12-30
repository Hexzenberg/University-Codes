/*Q8 14.12.21*/
#include<stdio.h>
int main ()
{
    int n,i,j,s=1,t;
    printf("Enter the order of the matrix:");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the term of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }printf("\n");
    }
    printf("The matrix entered:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j]);
        }printf("\n");
    }
    printf("The transpose of the entered matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[j][i]);
        }printf("\n");
    }
    t=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=t;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==t){
                s=0;
            }
        }printf("\n");
    }
    if(s==0){
        printf("The matrix is symmetric");
    } else if(s==1)
    printf("The matrix is skew-symmetric");
    return 0;
}