// Interchange left node to right and right node to left in a binary tree.
#include<stdio.h>
#include<stdlib.h>
typedef struct tree{int a;struct tree*l,*r;}tr;
void cr(tr**h,int v){
    tr*cur=malloc(sizeof(tr)),*p=*h,*q=*h;cur->a=v,cur->l=cur->r=NULL;
    if(*h==NULL){*h=cur;return;}
    while(p!=NULL)v>p->a?q=p,p=p->r:(q=p,p=p->l);
    v>q->a?q->r=cur:(q->l=cur);
}
void ch(tr*h){
    if(h==NULL)return;
    tr*cur=h->l;h->l=h->r,h->r=cur;
    ch(h->l),ch(h->r);
}
void post(tr*h){if(h!=NULL)post(h->l),post(h->r),printf("%d ",h->a);}
int main(){
    tr*h=NULL;
    cr(&h,10),cr(&h,9),cr(&h,8),cr(&h,12),cr(&h,13),cr(&h,11),cr(&h,14),post(h);
    ch(h),post(h);
    return 0;
}