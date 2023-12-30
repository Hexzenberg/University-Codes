/*Q3 14.12.21*/
#include<stdio.h>
int main ()
{
    int a[5][5],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Enter the value of ROW %d and COLUMN %d\n",i,j);
            scanf("%d",&a[i][j]);
            }
    }
    printf("\nThe matrix entered by you is:");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d",a[i][j]);
        }printf("\n");
    }
    return 0;
}