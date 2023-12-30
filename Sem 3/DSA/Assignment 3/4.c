// Write a program to swap every two consecutive nodes in a linked list without swappingdata.
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
void r(sn**h){
    if(*h==NULL||(*h)->n==NULL)return;
    sn*p=(*h)->n,*q=p->n,*r;
    (*h)->n=p->n,p->n=*h,*h=p,p=p->n;
    if(q==NULL)return;
    for(;q->n!=NULL;q=q->n){
        r=q->n;
        if(r->n==NULL){p->n=r,r->n=q,q->n=NULL;return;}
        p->n=r,p=r->n,r->n=q,q->n=p,p=q;
    }
}
void d(sn*h){for(sn*p=h;p!=NULL;p=p->n)printf("%d ",p->a);}
int main(){
    sn*h=NULL;
    int n;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),c(&h,n),r(&h),printf("After swapping:\n"),d(h);
    return 0;
}