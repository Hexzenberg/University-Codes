//WAP to construct a bst and do the deletion a/c to the given input.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*l,*r;
}sn;
void cr(sn**h,int v){
    sn*cur=malloc(sizeof(sn)),*p=*h,*q=*h;cur->a=v,cur->l=cur->r=NULL;
    if(*h==NULL)*h=cur;
    else{
        while(p!=NULL)v>p->a?q=p,p=p->r:(q=p,p=p->l);
        v>q->a?q->r=cur:(q->l=cur);
    }
}
void pre(sn*h){if(h!=NULL)printf("%d ",h->a),pre(h->l),pre(h->r);}
sn*getmax(sn*h){
    if(h==NULL)return h;
    sn*p=h;while(p->r!=NULL)p=p->r;
    return p;
}
sn*getnode(sn*h,sn**prv,int v){
    sn*p=h;*prv=NULL;
    while(p!=NULL){
        if(p->a==v)break;
        v>p->a?*prv=p,p=p->r:(*prv=p,p=p->l);
    }return p;
}
void del(sn**h,int v){
    if(*h==NULL)return;
    if((*h)->l==(*h)->r&&(*h)->a==v){free(*h),*h=NULL;return;}
    sn*p,*q,*r;p=getnode(*h,&q,v);
    if(p==*h&&p->l==NULL)*h=p->r,free(p);
    else if(p==*h&&p->l->r==NULL)p->l->r=p->r,*h=p->l,free(p);
    else if(p->l==NULL)q->l==p?q->l=p->r:(q->r=p->r),free(p);
    else if(p->l->r==NULL)q->l==p?q->l=p->l,q->l->r=p->r:(q->r=p->l,q->r->r=p->r),free(p);
    else r=getmax(p->l),r=getnode(*h,&q,r->a),p->a=r->a,q->r=r->l,free(r);   
}
int main(){
    sn*h=NULL;int n;
    cr(&h,15),cr(&h,5),cr(&h,2),cr(&h,14),cr(&h,7),cr(&h,20),cr(&h,21),cr(&h,6);
    pre(h),printf("\nEnter the element you want to delete:\n"),scanf("%d",&n),del(&h,n),pre(h);
    return 0;
}