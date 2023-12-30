// Count the total number of duplicate elements in an array.
#include<stdio.h>
#include<stdlib.h>
int d(int*a760,int n760){
    int s=0;
    for(int i=0;i<n760-1;i++)for(int j=i+1;j<n760;j++)if(*(a760+i)==*(a760+j)){s++;break;}
    return s;
}
int main(){
    int n760;
    printf("Enter the size of the array:\n");
    scanf("%d",&n760);
    int*a760=malloc(n760*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n760;i++)scanf("%d",&a760[i]);
    printf("The number of duplicate elements in the array are: %d",d(a760,n760));
    return 0;
}