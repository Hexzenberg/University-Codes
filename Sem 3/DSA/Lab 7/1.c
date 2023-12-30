//October 13,2022 
//WAP to do the following operations on sparse matrix using Linked List:
//1.Addition
//2.Multiplication
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a,r,c;
    struct node*n;
}sn;
void cr(sn**h){
    printf("Enter the number of rows and columns:\n"),scanf("%d%d",&(*h)->r,&(*h)->c);
    printf("Enter the number of non zero elements:\n"),scanf("%d",&(*h)->a);
    sn*l=*h;
    for(int i=0;i<(*h)->a;i++){
        sn*c=malloc(sizeof(sn));
        if(c==NULL)return;
        printf("Enter the row and column number and then the value:\n");
        scanf("%d%d%d",&c->r,&c->c,&c->a),c->n=NULL;
        l=l->n=c;
    } 
}
void disp(sn*h){for(;h!=NULL;h=h->n)printf("(%d %d %d)",h->r,h->c,h->a);printf("\n");}
void add(sn*h1,sn*h2){
    if(h1->r!=h2->r||h1->c!=h2->c)printf("The matrices cannot be added!\n");
    else{sn*p=h1;for(;p->n!=NULL;p=p->n);p->n=h2->n,h1->a+=h2->a;}
    for(sn*t=h1->n,*l=h1,*s=t;t!=NULL;l=t,t=t->n){
        for(sn*q=t->n;q!=NULL;s=q,q=q->n)if(t->r==q->r&&t->c==q->c)t->a+=q->a,s->n=q->n,free(q),q=s,h1->a--;
        if(t->a==0)l->n=t->n,free(t),t=l,h1->a--;
    }printf("After adding:\n"),disp(h1);
}
void mul(sn**h,sn*h1,sn*h2){
    if(h1->c!=h2->r)printf("The matrices cannot be multiplied!\n");
    else{
        (*h)->r=h1->r,(*h)->c=h2->c,(*h)->a=0;sn*l=*h;
        for(sn*p=h1->n;p!=NULL;p=p->n)for(sn*q=h2->n;q!=NULL;q=q->n)if(p->c==q->r){sn*cur=malloc(sizeof(sn));cur->n=NULL,cur->r=p->r,cur->c=q->c,cur->a=p->a*q->a,l=l->n=cur,(*h)->a++;}
        printf("After multiplying:\n"),disp(*h);
    }
}
int main(){
    sn*h1=malloc(sizeof(sn)),*h2=malloc(sizeof(sn)),*h=malloc(sizeof(sn));
    cr(&h1),disp(h1),cr(&h2),disp(h2),mul(&h,h1,h2),add(h1,h2);
    return 0;
}