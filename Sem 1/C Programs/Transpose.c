/*Q4 14.12.21*/
#include<stdio.h>
int main ()
{
    int a[4][4],i,j,t;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the value of ROW %d and COLUMN %d\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix entered:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",a[i][j]);
        }printf("\n");
    }
    t=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=t;
    printf("The Transpose of the given matrix is:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",a[j][i]);
        }printf("\n");
    }
    return 0;
}