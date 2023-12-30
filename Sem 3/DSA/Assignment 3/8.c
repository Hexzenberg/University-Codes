// Given a sorted linked list, delete all duplicates such that each element appear only once. 
// For example, Given 1->1->2, return 1->2. Given 1->1->2->3->3, return 1->2->3
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
void disp(sn*h){while(h!=NULL)printf("%d ",h->a),h=h->n;}
void d(sn*h){
    sn*p,*q,*r;
    for(p=h;p!=NULL;p=p->n)for(q=p->n,r=p;q!=NULL;r=q,q=q->n)if(p->a==q->a)r->n=q->n,free(q),q=r;
}
int main(){ 
    sn*h=NULL;int n;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),c(&h,n),d(h),printf("After deletion:\n"),disp(h);
    return 0;
}
