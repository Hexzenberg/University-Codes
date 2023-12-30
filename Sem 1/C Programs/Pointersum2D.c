/*Q 11.01.22*/
#include<stdio.h>
int main(){
    int a[4][5],b[]={0,0,0,0},(*pa)[5],*pb,i,j;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Enter Element for a[%d][%d]:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    pb=b;
    pa=a;
    printf("The sum of rows of the array:\n");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            pb[i]+=pa[i][j];
        }
        printf("%d ",pb[i]);
    }
    return 0;
}