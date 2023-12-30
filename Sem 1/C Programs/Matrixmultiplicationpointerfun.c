#include<stdio.h> 
void mul(int a[3][3], int b[3][3])
{
    int i,j,k,m=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            m=0;
            for(k=0;k<3;k++){
                m+=*(*(a+i)+k)**(*(b+k)+j);
            }
        }
    }
    printf("The product is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",m);
        }printf("\n");
    }
    return;
}
int main()
{
    int x[3][3],y[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element a[%d][%d]:",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    }
    printf("The first matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",x[i][j]);
        }printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element b[%d][%d]:",i+1,j+1);
            scanf("%d",&y[i][j]);
        }
    }
    printf("The second matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",y[i][j]);
        }printf("\n");
    }
    mul(x,y);
    return 0;
}