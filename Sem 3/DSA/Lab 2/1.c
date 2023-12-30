//28-07-22
//1.Write a program to remove repeated elements in a given array.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m=0,c=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int*a=malloc(n*sizeof(int));
    int*b=malloc(m*sizeof(int));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)scanf("%d",(a+i));
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c=1;
                break;
            }
        }if(c==0)b[m++]=a[i];
        c=0;
    }
    printf("The array after removing repetitive elements:\n");
    for(int i=0;i<m;i++)printf("%d ",b[i]);
    return 0;
}