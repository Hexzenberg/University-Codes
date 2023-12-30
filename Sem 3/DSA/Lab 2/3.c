// July 28,2022
// In a one dimensional array, user gives a certain range of index with shifting value. 
// You need to right shift and rotate those range of values based on the given shifting value. 
// Given array: 2 9 6 3 5 8 11 3 6 7 13 5 
// Given range: 4th index to 9th index(consider the starting index is 0) and shifting value is 2 
// Output: 2,9,6,3,6,7,5,8,11,3,13,5
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,c,d,x;
    printf("Enter the number of the elements:\n");
    scanf("%d",&n);
    int*a=malloc(n*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Enter the range of index that you want to shift and then how many places to shift:\n");
    scanf("%d%d%d",&c,&d,&x);
    for(int i=0;i<x;i++){
        int t=a[d];
        for(int j=d;j>=c+1;j--){
            int b=a[j-1];
            a[j-1]=a[j];
            a[j]=b;
        }a[c]=t;
    }
    printf("The array after the operation:\n");
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}