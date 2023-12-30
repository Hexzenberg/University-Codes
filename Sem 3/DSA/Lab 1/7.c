// In a one dimensional array find out all the elements, which is the summation of
// its immediate previous contiguous elements and those previous elements including
// that element are in ascending order.
// Ex: Given array: 2 9 3 6 9 8 17 3 6 4 13 5
// Output: output is 9, which is a summation of it’s previous elements 3 and 6
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,t=0,m=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int*a=malloc(n*sizeof(int));
    int*b=malloc(m*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            for(int j=i-1;j>=0;j--){
                if(a[j]>a[j-1]){
                    t+=a[j];
                    b[m++]=a[j];
                }else{                    
                    t+=a[j];
                    b[m++]=a[j];
                    break;
                }
            }
        }
        if(a[i]==t){
            printf("%d is the summation of: ",a[i]);
            for(int i=0;i<m;i++)printf("%d ",b[i]);
            printf("in ascending order.\n");
        }t=0,m=0;
    }
    return 0;
}