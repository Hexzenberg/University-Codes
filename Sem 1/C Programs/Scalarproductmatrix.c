/*Q5 14.12.21*/
#include<stdio.h>
int main ()
{
    int a[3][4],i,j,n,c;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Enter the terms a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }printf("\n");
    }
    printf("The matrix entered:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d",a[i][j]);
        }printf("\n");
    }
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The scalar product is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d",c=n*a[i][j]);
        }printf("\n");
    }
    return 0;
}    