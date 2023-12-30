//November 17,2022
//WA menu driven program to do:
//Insertion
//Selection
//Bubble
//Merge
//Quick
//Do the experiment of the complexity with increasing,normal and decreasing type of the elements
#include<stdio.h>
void b(int*a,int p,int q){
    for(int i=p,t,f=0;i<q;i++,f=0){
        for(int j=p;j<q-(i-p);j++)if(a[j]>a[j+1])t=a[j],a[j]=a[j+1],a[j+1]=t,f=1; 
    if(f==0)return;}
}
void in(int*a,int p,int q){
    for(int i=p+1,t=a[i],j;i<=q;i++,t=a[i]){
        for(j=i-1;j>=p;j--)if(a[j]>t)a[j+1]=a[j];else break; 
        a[j+1]=t;}
}
void se(int*a,int p,int q){
    for(int i=p,min=i,t;i<q;i++,min=i){
        for(int j=i+1;j<=q;j++)if(a[j]<a[min])min=j;
        if(min!=i)t=a[min],a[min]=a[i],a[i]=t;}
}
void merge(int*a,int min,int mid,int max){
    int i=min,j=mid+1,b[max-min+1],k=0;
    while(i<=mid&&j<=max)a[i]<a[j]?b[k++]=a[i++]:(b[k++]=a[j++]);
    while(i<=mid)b[k++]=a[i++];while(j<=max)b[k++]=a[j++];
    for(i=0;i<k;i++)a[min+i]=b[i];
}
void me(int*a,int min,int max){
    if(min<max){
        int mid=(max+min)/2;
        me(a,min,mid),me(a,mid+1,max),merge(a,min,mid,max);}
}
int part(int*a,int p,int q){
    int d=p+1,u=q,t;
    while(d<=u){
        while(a[d]<=a[p]||a[u]>a[p]){if(a[d]<=a[p])d++;if(a[u]>a[p])u--;}
        if(d<u)t=a[d],a[d]=a[u],a[u]=t;
    }t=a[u],a[u]=a[p],a[p]=t;return(u);
}
void qui(int*a,int p,int q){if(p<q){int m=part(a,p,q);qui(a,p,m-1),qui(a,m+1,q);}}
void dis(int*a,int n){for(int i=0;i<n;i++)printf("%d ",a[i]);printf("\n");}
int main(){
    int a[]={5,4,3,1,2,6},i=0,n=6,t;
    printf("Enter:\n1 for buble sort\n2 for insertion sort\n3 for selection sort\n");
    printf("4 for merge sort\n5 for quick sort in the array:\n"),dis(a,n),scanf("%d",&t);
    (t==1)?b(a,0,n-1):(t==2)?in(a,0,n-1):(t==3)?se(a,0,n-1):(t==4)?me(a,0,n-1):(t==5)?qui(a,0,n-1):printf("Invalid!\n");
    dis(a,n);
    return 0;
}
