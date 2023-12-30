// Write a program to reverse the even index position and odd index
// position for even element array and odd element array.
#include<stdio.h>
#include<stdlib.h>
struct al{
    int n,m,*a;
}typedef al;
void r(al p){
    if(p.m%2!=0){
        for(int i=0;i<p.m-2;i+=2){
            for(int j=0;j<p.m-i-2;j+=2){
                int t=p.a[j+2];
                p.a[j+2]=p.a[j];
                p.a[j]=t;
            }
        }
    }else{
        for(int i=0;i<p.m-2;i+=2){
            for(int j=1;j<p.m-i-2;j+=2){
                int t=p.a[j+2];
                p.a[j+2]=p.a[j];
                p.a[j]=t;
            }
        }
    }
}
int main(){
    al p;
    printf("Enter the size of the array:\n");
    scanf("%d",&p.n);
    p.a=malloc(p.n*sizeof(int));
    printf("Enter the usable size of the array:\n");
    scanf("%d",&p.m);
    printf("Enter elements of the array:\n");
    for(int i=0;i<p.m;i++)scanf("%d",&p.a[i]);
    r(p);
    printf("The array after reversal:\n");
    for(int i=0;i<p.m;i++)printf("%d ",p.a[i]);
    return 0;
}
