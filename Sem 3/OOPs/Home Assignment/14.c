// WAP to return multiple values from a function using pointers.
#include<stdio.h>
#include<stdlib.h>
int*r(int*a760){
    return a760;
}
int main(){
    int n760;
    printf("Enter the size of the array:\n");
    scanf("%d",&n760);
    int*a760=malloc(n760*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n760;i++)scanf("%d",&a760[i]);
    int*b=r(a760);
    printf("The elements of the array:\n");
    for(int i=0;i<n760;i++)printf("%d ",*(b+i));
    return 0;
}