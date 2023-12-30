//August 25,2022
//Write a menu driven program for 2 sorted arrays to find their union and intersection.
#include<stdio.h>
#include<stdlib.h>
void u(int*a,int*b,int n,int m){
    int k=0,l=0,s=0,*c=malloc(s*sizeof(int));
    while(k<n&&l<m){
        if(a[k]<b[l])c[s++]=a[k++];
        else if(a[k]>b[l])c[s++]=b[l++];
        else c[s++]=a[k++],l++;
    }
    printf("The union:\n");
    while(k<n)c[s++]=a[k++];
    while(l<m)c[s++]=b[l++];
    for(int i=0;i<s;i++)printf("%d ",c[i]);
}
void i(int*a,int*b,int n,int m){
    int k=0,l=0,s=0,*c=malloc(s*sizeof(int));
    while(k<n&&l<m){
        if(a[k]<b[l])k++;
        else if(a[k]>b[l])l++;
        else c[s++]=a[k++],l++;
    }
    printf("The intersection:\n");
    for(int i=0;i<s;i++)printf("%d ",c[i]);
}
void me(int*a,int*b,int n,int m){
    int d;
    printf("Enter 1 for union, 2 for insertion:\n"),scanf("%d",&d);
    (d==1)?u(a,b,n,m):i(a,b,n,m);
    printf("\nEnd of the program.");
}
int main(){
    int n,m;
    printf("Enter the size of the first and the second array:\n"),scanf("%d%d",&n,&m);
    int*a=malloc(n*sizeof(int)),*b=malloc(m*sizeof(int));
    printf("Enter elements of the arrays:\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<m;i++)scanf("%d",&b[i]);
    me(a,b,n,m);
    return 0;
}