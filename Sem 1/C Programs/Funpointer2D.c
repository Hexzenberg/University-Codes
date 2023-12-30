/*Q 11.01.22*/
#include<stdio.h>
void sum(int a[4][5])
{
    int b[]={0,0,0,0},*pb=b,(*pa)[5]=a,i,j;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            pb[i]+=pa[i][j];
        }
        printf("%d ",pb[i]);
    }
}
int main()
{
    int c[4][5],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Enter Element c[%d][%d]:",i+1,j+1);
            scanf("%d",&c[i][j]);
        }
    }
    printf("The sum of the elements of row:\n");
    sum(c);
    return 0;
}