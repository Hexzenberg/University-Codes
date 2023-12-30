/*Q6 14.12.21*/
#include<stdio.h>
int main ()
{
    int a[4][4],b[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the term of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",a[i][j]);
        }printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Enter the term of b[%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",b[i][j]);
        }printf("\n");
    }
    printf("The sum of the matrices is:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d",a[i][j]+b[i][j]);
        }printf("\n");
    }
    return 0;
}