// October 13,2022
// WAP to perform polynomial addition and multiplication.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int e,c;
    struct node*n;
}sn;
void cr(sn**h){
    int n;sn*l=*h;
    printf("Enter the number of elements:\n"),scanf("%d",&n);
    for(int i=0;i<n;i++){
        sn*cur=malloc(sizeof(sn));cur->n=NULL;
        printf("Enter the coefficient and exponents:\n"),scanf("%d%d",&cur->c,&cur->e);
        (*h==NULL)?*h=l=cur:(l=l->n=cur);
    }
}
void simp(sn*h){
    sn*p=h,*q,*r;
    while(p->n!=NULL){
        r=p,q=p->n;
        while(q!=NULL)(p->e!=q->e)?r=q,q=q->n:(p->c+=q->c,r->n=q->n,free(q),q=r->n);
        p=p->n;
    }
}
void add(sn**h1,sn*h2){sn*p=*h1;for(;p->n!=NULL;p=p->n);p->n=h2;simp(*h1);}
void mul(sn**h,sn*h1,sn*h2){
    sn*i,*j,*l;
    for(i=h1;i!=NULL;i=i->n){
        for(j=h2;j!=NULL;j=j->n){
            sn*cur=malloc(sizeof(sn));
            cur->c=i->c*j->c,cur->e=i->e+j->e,cur->n=NULL;
            (*h==NULL)?*h=l=cur:(l=l->n=cur);
        }
    }simp(*h);
}
void disp(sn*h){for(;h!=NULL;h=h->n)printf("(%d %d)",h->c,h->e);printf("\n");}
int main(){
    sn*h=NULL,*h1=NULL,*h2=NULL;
    cr(&h1),disp(h1),cr(&h2),disp(h2),mul(&h,h1,h2),disp(h),add(&h1,h2),disp(h1);
    return 0;
}