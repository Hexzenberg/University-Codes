// Find maximum and minimum elements in an array using recursion.
#include<stdio.h>
#include<stdlib.h>
int min(int a760,int b760){
    return(a760>b760?b760:a760);
}
int max(int a760,int b760){
    return(a760>b760?a760:b760);
}
int mi(int a760[],int n760){
    return((n760==1)?a760[0]:min(a760[n760-1],mi(a760,n760-1)));
}
int ma(int a760[],int n760){
    return((n760==1)?a760[0]:max(a760[n760-1],ma(a760, n760-1)));
}
int main(){
    int n760;
    printf("Enter the length of the array:\n");
    scanf("%d",&n760);
    int*a760=malloc(n760*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n760;i++)scanf("%d",&a760[i]);
    printf("The minimum element of the array is: %d\nThe maximum element of the array is: %d",mi(a760,n760),ma(a760,n760));
    return 0;
}