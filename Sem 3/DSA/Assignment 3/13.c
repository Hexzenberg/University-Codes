// Write a program to arrange all odd numbers first then all even numbers in a linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n;
}sn;
void c(sn**h,int n){
    int i=0;
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        sn*q=malloc(sizeof(sn)),*l;
        scanf("%d",&q->a),q->n=NULL;
        (*h==NULL)?l=*h=q:(l->n=q,l=q);
    }
}
void disp(sn*h){while(h!=NULL)printf("%d ",h->a),h=h->n;printf("\n");}
void r(sn*h){
    sn*p=h,*q=h;int t;
    for(;q!=NULL;q=q->n)if(q->a%2!=0)(q==p)?p=p->n:(t=p->a,p->a=q->a,q->a=t,p=p->n);
}
int main(){ 
    sn *h=NULL;int n;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),c(&h,n),printf("After rearranging:\n"),r(h),disp(h);
}
