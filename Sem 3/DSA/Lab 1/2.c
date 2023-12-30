// 21 July,2022
// WAP to reverse the array.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int *p=malloc(n*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)scanf("%d",&p[i]);
    printf("The array after reversal:\n");
    for(int i=n-1;i>=0;i--)printf("%d ",p[i]);
    return 0;
}