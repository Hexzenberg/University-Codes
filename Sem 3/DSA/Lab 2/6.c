// 28 July,2022
// WAP to find the minimum number of contiguous elements in Row Major order format of a two dimensional
// matrix whose summation is equal to the required number. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,t,s=0;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("Enter the the elements:\n");
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)scanf("%d",&a[i][j]);
    printf("Enter the desired sum:\n");
    scanf("%d",&t);
    int*p=a;
    return 0;
}