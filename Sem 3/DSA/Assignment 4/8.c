// Write a program to identify whether a binary tree is a fully complete or not.
#include<stdio.h>
#include<stdlib.h>
typedef struct tree{int a;struct tree*l,*r;}tr;
void cr(tr**h,int v){
    tr*cur=malloc(sizeof(tr)),*p=*h,*q=*h;cur->a=v,cur->l=cur->r=NULL;
    if(*h==NULL){*h=cur;return;}
    while(p!=NULL)v>p->a?q=p,p=p->r:(q=p,p=p->l);
    v>q->a?q->r=cur:(q->l=cur);
}
int cn(tr*h){return((h==NULL)?0:1+cn(h->l)+cn(h->r));}
int is(tr*h,int i,int n){
    if(h==NULL)return 1;
    if(i>=n)return 0;
    return (is(h->l,2*i+1,n)&&is(h->r,2*i+2,n));
}
int main(){
    tr*h=NULL;
    cr(&h,10),cr(&h,9),cr(&h,12);
    printf(is(h,0,cn(h))?"Complete":"In complete");
}