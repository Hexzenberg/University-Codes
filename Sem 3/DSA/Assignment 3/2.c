// Write a non-recursive function to display the single linked list in the reverse order.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*n;
}sn;
void cr(sn**h,int n){
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        sn*l,*c=malloc(sizeof(sn));
        scanf("%d",&c->a),c->n=NULL;
        (*h==NULL)?*h=l=c:(l->n=c,l=c);
    }
}
void r(sn*h,int n){
    sn*p=h,*q=h;
    while(p->n!=NULL)q=p,p=p->n;
    while(h!=NULL){
        printf("%d ",p->a),free(p),p=q,q=h;
        if(p==q)break;
        while(q->n!=p)q=q->n;
    }printf("%d ",h->a);
}
int main(){
    sn*h=NULL;int n;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),cr(&h,n);
    printf("The elements in reverse order:\n"),r(h,n);
    return 0;
}