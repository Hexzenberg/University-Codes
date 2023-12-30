//21 July,2022
// WAP to arrange first half of the array in ascending order and second half of the 
// array in descending order. Use dynamic memory allocation and function call.
// Example:
//  Let a[]={ 11 23 44 21 32 89 4 7 2 9} 
// 1
// st half contains 5 elements as {11, 23, 44, 21, 32} and 2nd half contains 5 
// elements as {89, 4, 7, 2, 9}.
// Output: a[]= {11, 21, 23, 32, 44, 89, 9, 7, 4,2} 
#include<stdio.h>
#include<stdlib.h>
void q(int a[],int n){
    for(int i=0;i<n/2-1;i++){
        for(int j=i+1;j<n/2;j++){
            if(a[i]>a[j]){
                int b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for(int i=n/2;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for(int i=0;i<n/2;i++)printf("%d ",a[i]);
    for(int i=n-1;i>=n/2;i--)printf("%d ",a[i]);
}
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int*a=malloc(n*sizeof(int));
    printf("Enter the elements of your array:\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Output:\n");
    q(a,n);
    return 0;
}