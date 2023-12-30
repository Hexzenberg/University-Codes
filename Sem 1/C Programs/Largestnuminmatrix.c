/*Q9 14.12.21*/
#include<stdio.h>
int main ()
{   int a[4][4],i,j,n;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the elements of the matrix a[%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }printf("\n");
    }
    printf("The matrix entered by you is:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",a[i][j]);
        }printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a[i][j]>a[i][j-1]){
                n=a[i][j];
                a[i][j]=n;
            }
        }
    }
    printf("The largest term of the matrix is:%d",n);
    return 0;
}