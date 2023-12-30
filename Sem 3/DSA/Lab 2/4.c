// July 28,2022
// WAP to display the triangular matrix of 2D array.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int**a=malloc(n*sizeof(int));
    for(int i=0;i<n;i++)a[i]=malloc(n*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    printf("Pattern 1:\n");
    for(int i=1;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(i>j)printf("%d ",a[i][j]);
            else{
                printf("\n");
                break;
            }
        }
    }
    printf("\nPattern 2:\n");
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++)printf("  ");
        int s=n-i,k=i;
        while(k--)printf("%d ",a[i][s++]);
        printf("\n");
    }
    printf("Pattern 3:\n");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("Pattern 4:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)printf("  ");
        for(int j=i+1;j<n;j++)printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}