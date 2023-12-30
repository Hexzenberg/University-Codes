// Given a singly linked list
// L: L0 → L1 → … → Ln-1 → Ln, L0 → Ln → L1 → Ln-1 → L2 → Ln-2 → …
// You must do this in-place without altering the nodes’ values. 
// For example, Given {1,2,3,4,5,6}, reorder it to {1,6,2,5,3,4}
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
void f(sn*h){
    if(h==NULL||h->n==NULL||h->n->n==NULL)return;
    sn*p=h,*q,*r;
    while(p->n!=NULL){
        for(q=p;q->n!=NULL;r=q,q=q->n);
        if(q==p->n)return;
        q->n=p->n,p->n=q,r->n=NULL,p=p->n->n;
    }
}
int main(){ 
    sn*h=NULL;int n;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),c(&h,n),f(h),printf("After changing:\n"),disp(h);
}