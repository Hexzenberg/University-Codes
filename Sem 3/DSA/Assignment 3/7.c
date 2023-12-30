// Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome 
// or not, respectively.(without using recession)
// List 1-->2-->1 is a palindrome. List 1-->2-->3 is not a palindrome.
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
int p(sn*h){
    if(h==NULL)return 0;
    if(h->n==NULL)return 1;
    sn*m=NULL,*p=h,*q=NULL,*l;
    for(;p->n!=NULL;p=p->n);
    for(;p!=NULL;p=q){
        sn*cur=malloc(sizeof(sn));
        cur->a=p->a,cur->n=NULL;
        (m==NULL)?m=l=cur:(l->n=cur,l=cur);
        if(p==h)break;
        for(q=h;q->n!=p;q=q->n);
    }for(;h!=NULL;h=h->n,m=m->n)if(h->a!=m->a)return 0;
    return 1;
}
int main(){ 
    sn *h=NULL;int n;
    printf("Enter the number of nodes:\n"),scanf("%d",&n),c(&h,n);
    int t=p(h);
    printf(t==0?"Not a palindrome!":"Palindrome Number!");
    return 0;
}
