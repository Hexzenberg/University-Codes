//21 July,2022
//WAP to find kth smallest & kth largest element in the array.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,k;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int *p=malloc(n*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)scanf("%d",&p[i]);
    printf("Enter the desired kth position of maxima and minima:\n");
    scanf("%d",&k);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(p[i]>p[j]){
                int b=p[i];
                p[i]=p[j];
                p[j]=b;
            }
        }
    }
    printf("The number %d minima is %d, and maxima is:%d",k,p[k-1],p[n-k]);
    return 0;
}