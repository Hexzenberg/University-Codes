// Write a function to reverse the nodes of a double linked list.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n,*p;
}sn;
void c(sn**h,int n){
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        sn*q=malloc(sizeof(sn)),*l;
        scanf("%d",&q->a),q->n=q->p=NULL;
        (*h==NULL)?l=*h=q:(q->n=l->n,q->p=l,l->n=q,l=q);
    }
}
void r(sn**h){
    if(*h==NULL||(*h)->n==NULL)return;
    sn *r,*q,*l=*h;
    while(l->n!=NULL)l=l->n;r=l;
    while(r!=*h){
        for(q=*h;q->n!=r;q=q->n);
        r->n=q,r=q;
    }r->n=NULL,*h=l;
}
void disp(sn *h){while(h!=NULL)printf("%d ",h->a),h=h->n;printf("\n");}
int main(){
    sn*h=NULL;
    int n;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),c(&h,n),r(&h),printf("After reversal:\n"),disp(h);
    return 0;
}