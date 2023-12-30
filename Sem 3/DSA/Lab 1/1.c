//21 July, 2022
//WAP to find the smallest & largest number in the array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,a=0,b;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int*p=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array:\n");
    b=p[0];
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
        if(p[i]>a)a=p[i];
        if(p[i]<b)b=p[i];
    }
    printf("The maximum element: %d and the minimum element: %d",a,b);
    return 0;
}