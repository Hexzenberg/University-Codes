//August 25,2022
//Write a menu driven program for two sorted arrays to merge them w/ and w/o using extra space.
#include<stdio.h>
#include<stdlib.h>
void swap(int a,int b){int t=b;b=a,a=t;}
void sort(int*a,int n){for(int i=0;i<n-1;i++)for(int j=0;j<n-i-1;j++)if(a[j]>a[j+1]){int t=a[j];a[j]=a[j+1],a[j+1]=t;}}
void ms(int*a,int*b,int n,int m){
    int k=0,l=0,s=0,*c=malloc(s*sizeof(int));
    while(k<n&&l<m){
        if(a[k]<b[l])c[s++]=a[k++];
        else if(a[k]>b[l])c[s++]=b[l++];
        else c[s++]=a[k++],c[s++]=b[l++];
    }
    printf("Merged array:\n");
    while(k<n)c[s++]=a[k++];
    while(l<m)c[s++]=b[l++];
    for(int i=0;i<s;i++)printf("%d ",c[i]);
}
void mn(int*a,int*b,int n,int m){
    int i=n-1,j=0;
    while(i>=0&&j<m){if(a[i]>b[j])swap(a[i],b[j]);i--;j++;}
    sort(a,n),sort(b,m);
    printf("Merged array:\n");
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    for(int i=0;i<m;i++)printf("%d ",b[i]);
}
void me(int*a,int*b,int n,int m){
    int d;
    printf("Enter 1 for merging with extra space, 2 for merging without using extra space:\n"),scanf("%d",&d);
    (d==1)?ms(a,b,n,m):mn(a,b,n,m);
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