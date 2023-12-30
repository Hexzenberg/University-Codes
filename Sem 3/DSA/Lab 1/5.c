//21 July,2022
// 5. WAP to take all odd numbers to the first part and all even numbers to the second part of the array (Use function call). 
// Example:
//  Let a[]={ 11 23 44 21 32 89 4 7 2 9} 
// Then output: {11, 23, 21, 89, 7, 9, 44, 32, 4, 2}
// 6 odd elements and 4 even elements order can be anything as per your logic but they should be in first part and last part of the array respectively.
#include<stdio.h>
#include<stdlib.h>
void g(int a[],int n){
    for(int i=0;i<n;i++)if(a[i]%2!=0)printf("%d ",a[i]);
    for(int i=0;i<n;i++)if(a[i]%2==0)printf("%d ",a[i]);
}
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int*a=malloc(n*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Output:\n");
    g(a,n);
    return 0;
}