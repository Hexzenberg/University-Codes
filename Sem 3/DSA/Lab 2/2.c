// 28 July 2022
// WAP to find the maximum number of group of consecutive elements present in ascending order.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,b=1;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int*a=malloc(n*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)if(a[i]>a[i+1])b++;
    printf("Number of consecutive groups in ascending order: %d",b);
    return 0;
}