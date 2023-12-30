//21 July,2022
// 4. WAP program to do the following operations on matrix.
// a.Find the number of zero’s
// b.Find the sum of all elements above the main diagonal  
// c.Display all the diagonal elements.
// d.Display the matrix in a row major order
// e.Display the matrix in a column major order.
#include<stdio.h>
#include<stdlib.h>
int n;
int z(int a[n][n]){
    int b=0;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(a[i][j]==0)b++;
    return b;
}
int s(int a[n][n]){
    int s=0;
    for(int i=0;i<n-1;i++)for(int j=i+1;j<n;j++)s+=a[i][j];
    return s;
}
void r(int a[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
}
void c(int a[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }printf("\n");
    }
}
void d(int a[n][n]){
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(i==j)printf("%d ",a[i][j]);
}
int main(){
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    printf("The number of Zeroes:%d\n",z(a));
    printf("The sum is:%d\nThe diagonal elements are:\n",s(a));
    d(a);
    printf("\nRow major order:\n");
    r(a);
    printf("Column Major order:\n");
    c(a);
    return 0;
}